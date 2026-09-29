#include <stdio.h>
#include <stdlib.h>

typedef struct QNode { unsigned page; struct QNode *prev, *next; } QNode;
typedef struct Queue { QNode *front, *rear; int cap, n; } Queue;

QNode* newQNode(unsigned pageNumber) {
  QNode* q = (QNode*)malloc(sizeof(QNode));
  q->page = pageNumber; q->prev = q->next = NULL;
  return q;
}

Queue* createQueue(int numberOfFrames) {
  Queue* q = (Queue*)malloc(sizeof(Queue));
  q->front = q->rear = NULL; q->cap = numberOfFrames; q->n = 0;
  return q;
}

static void detach(Queue* q, QNode* n) {
  if (n->prev) n->prev->next = n->next; else q->front = n->next;
  if (n->next) n->next->prev = n->prev; else q->rear = n->prev;
  n->prev = n->next = NULL; q->n--;
}

static void push_front(Queue* q, QNode* n) {
  n->next = q->front; n->prev = NULL;
  if (q->front) q->front->prev = n; else q->rear = n;
  q->front = n; q->n++;
}

static QNode* find(Queue* q, unsigned p) {
  for (QNode* t = q->front; t; t = t->next) if (t->page == p) return t;
  return NULL;
}

void reference(Queue* q, unsigned p) {
  QNode* hit = find(q, p);
  if (hit) { detach(q, hit); push_front(q, hit); return; }
  if (q->n == q->cap) { QNode* old = q->rear; detach(q, old); free(old); }
  push_front(q, newQNode(p));
}

int main(void) {
  int n, m;
  if (scanf("%d %d", &n, &m) != 2) return 0;
  Queue* q = createQueue(m);
  for (int i = 0; i < n; i++) { unsigned p; scanf("%u", &p); reference(q, p); }
  int first = 1;
  for (QNode* t = q->front; t; t = t->next) { printf("%s%u", first ? "" : " ", t->page); first = 0; }
  printf("\n");
  return 0;
}
