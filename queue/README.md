# Module 3: Queue Data Structure

This folder contains the 10 solved C programs for **Queue** (Questions Q21 – Q30).

## Problems Index

| Problem # | Global Q# | File | Challenge | Description Summary |
| :--- | :--- | :--- | :--- | :--- |
| Problem 1 | Q21 | [`queue1.c`](./queue1.c) | Challenge 51 | For each index i, print the product of the largest, second largest and third largest values in A[1 |
| Problem 2 | Q22 | [`queue2.c`](./queue2.c) | Challenge | Given a bit string and m flip positions, print after each flip the length of the longest substring of equal bits (space-separated) |
| Problem 3 | Q23 | [`queue3.c`](./queue3.c) | Challenge 53 | Enqueue n elements; then print 'Dequeuing elements:' followed by the remaining queue contents after each dequeue until one element remains |
| Problem 4 | Q24 | [`queue4.c`](./queue4.c) | Challenge | Implement a linked queue (enqueue/dequeue/print per the given function descriptions) |
| Problem 5 | Q25 | [`queue5.c`](./queue5.c) | Challenge 55 | Enqueue n elements printing the running trace: 'Enqueuing d1' then '<contents> Enqueuing dk' per step, and the final queue contents on the last line |
| Problem 6 | Q26 | [`queue6.c`](./queue6.c) | Challenge 54 | Enqueue n elements into a circular queue; display it, dequeue two elements printing 'Deleted value = X' each time, then display again |
| Problem 7 | Q27 | [`queue7.c`](./queue7.c) | Challenge 57 | Enqueue n elements into a circular linked queue and display the elements (one per line) |
| Problem 8 | Q28 | [`queue8.c`](./queue8.c) | Challenge 44 | Cache of 4 frames as a queue (MRU at front, LRU at rear): on hit move page to front, on miss evict rear and insert at front |
| Problem 9 | Q29 | [`queue9.c`](./queue9.c) | Challenge 59 | Enqueue n elements into a circular linked queue; display the queue, then display again after each of two dequeues |
| Problem 10 | Q30 | [`queue10.c`](./queue10.c) | Challenge | Enqueue n elements; print 'Queue:<elements>' then reverse the queue in place (two-pointer swap) and print 'Reversed Queue:<elements>' |

---

## Detailed Problem Descriptions

### Problem 1 (Q21): Challenge 51 - [`queue1.c`](./queue1.c)

**Description:**
For each index i, print the product of the largest, second largest and third largest values in A[1..i] (distinct indices, values may repeat); print -1 while fewer
than three elements exist.

**Input Format:**
The first line contains an integer N, denoting the number of elements in the array A. The next line contains N space separated integers.

**Output Format:**
Print the answer for each index in each line. If there is no second largest or third largest number in A upto that index, then print "-1".

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
1 2 3 4 5
```
  - Output:
```text
-1
-1
6
24
60
```
- **Test Case 2:**
  - Input:
```text
8
3 7 1 2 4 7 5 9
```
  - Output:
```text
-1
-1
21
42
84
196
245
441
```

---

### Problem 2 (Q22): Challenge - [`queue2.c`](./queue2.c)

**Description:**
Given a bit string and m flip positions, print after each flip the length of the longest substring of equal bits (space-separated).

**Input Format:**
The first input line has a bit string consisting of n bits (numbered 1..n). The next line contains an integer m: the number of changes. The last line contains m
integers x1..xm describing the changes.

**Output Format:**
After each change, print the length of the longest substring whose each bit is the same.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
001011
3
3 2 5
```
  - Output:
```text
4 2 3
```
- **Test Case 2:**
  - Input:
```text
101010
4
1 3 2 6
```
  - Output:
```text
2 4 2 2
```

---

### Problem 3 (Q23): Challenge 53 - [`queue3.c`](./queue3.c)

**Description:**
Enqueue n elements; then print 'Dequeuing elements:' followed by the remaining queue contents after each dequeue until one element remains.

**Input Format:**
First line indicates the size of the queue. Second line indicates the elements of the queue.

**Output Format:**
Every line indicates the queue contents after each dequeue; the header line reads 'Dequeuing elements:'.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
5 6 3 1 2
```
  - Output:
```text
Dequeuing elements:
6 3 1 2
3 1 2
1 2
2
```
- **Test Case 2:**
  - Input:
```text
8
1 8 6 4 9 5 3 5
```
  - Output:
```text
Dequeuing elements:
8 6 4 9 5 3 5
6 4 9 5 3 5
4 9 5 3 5
9 5 3 5
5 3 5
3 5
5
```

---

### Problem 4 (Q24): Challenge - [`queue4.c`](./queue4.c)

**Description:**
Implement a linked queue (enqueue/dequeue/print per the given function descriptions). Print the queue, dequeue once, print again.

**Input Format:**
First line indicates the size of the queue. Second line indicates the elements of the queue.

**Output Format:**
First line the queued elements; second line the elements after one dequeue.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
9 1 5 3 5
```
  - Output:
```text
9 1 5 3 5
1 5 3 5
```
- **Test Case 2:**
  - Input:
```text
8
1 8 6 4 9 5 3 5
```
  - Output:
```text
1 8 6 4 9 5 3 5
8 6 4 9 5 3 5
```

---

### Problem 5 (Q25): Challenge 55 - [`queue5.c`](./queue5.c)

**Description:**
Enqueue n elements printing the running trace: 'Enqueuing d1' then '<contents> Enqueuing dk' per step, and the final queue contents on the last line.

**Input Format:**
First line indicates the size of the queue. Second line indicates the elements of the queue.

**Output Format:**
Every line indicates the enqueue of each element; last line indicates the final queued elements.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
5 6 3 1 2
```
  - Output:
```text
Enqueuing 5
5 Enqueuing 6
5 6 Enqueuing 3
5 6 3 Enqueuing 1
5 6 3 1 Enqueuing 2
5 6 3 1 2
```
- **Test Case 2:**
  - Input:
```text
8
1 8 6 4 9 5 3 5
```
  - Output:
```text
Enqueuing 1
1 Enqueuing 8
1 8 Enqueuing 6
1 8 6 Enqueuing 4
1 8 6 4 Enqueuing 9
1 8 6 4 9 Enqueuing 5
1 8 6 4 9 5 Enqueuing 3
1 8 6 4 9 5 3 Enqueuing 5
1 8 6 4 9 5 3 5
```

---

### Problem 6 (Q26): Challenge 54 - [`queue6.c`](./queue6.c)

**Description:**
Enqueue n elements into a circular queue; display it, dequeue two elements printing 'Deleted value = X' each time, then display again.

**Input Format:**
First line indicates the number of elements to be inserted in the queue. Second line indicates the elements.

**Output Format:**
First line the circular queue elements; then the two deleted values; then the remaining circular queue elements.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
10
1 2 3 4 5 6 7 8 9 10
```
  - Output:
```text
Elements in Circular Queue are:1 2 3 4 5 6 7 8 9 10
Deleted value = 1
Deleted value = 2
Elements in Circular Queue are:3 4 5 6 7 8 9 10
```
- **Test Case 2:**
  - Input:
```text
10
16 17 18 19 20 11 12 13 14 15
```
  - Output:
```text
Elements in Circular Queue are:16 17 18 19 20 11 12 13 14 15
Deleted value = 16
Deleted value = 17
Elements in Circular Queue are:18 19 20 11 12 13 14 15
```

---

### Problem 7 (Q27): Challenge 57 - [`queue7.c`](./queue7.c)

**Description:**
Enqueue n elements into a circular linked queue and display the elements (one per line).

**Input Format:**
First line indicates the size of the queue. Second line indicates the elements of the queue.

**Output Format:**
First line indicates the inserted elements in queue using linked list concept (one per line).

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
9 1 5 3 5
```
  - Output:
```text
9
1
5
3
5
```
- **Test Case 2:**
  - Input:
```text
8
1 8 6 4 9 5 3 5
```
  - Output:
```text
1
8
6
4
9
5
3
5
```

---

### Problem 8 (Q28): Challenge 44 - [`queue8.c`](./queue8.c)

**Description:**
Cache of 4 frames as a queue (MRU at front, LRU at rear): on hit move page to front, on miss evict rear and insert at front. Print final cache front to rear.

**Input Format:**
First line represents n and m, where n is the number of page references (0-9) and m is the cache size (4 for this problem). Next line represents the
referenced pages.

**Output Format:**
Single line represents the cache frames after the above referenced pages.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
6 4
1 2 3 1 4 5
```
  - Output:
```text
5 4 1 3
```
- **Test Case 2:**
  - Input:
```text
10 4
3 1 4 5 9 8 7 6 1 2
```
  - Output:
```text
2 1 6 7
```

---

### Problem 9 (Q29): Challenge 59 - [`queue9.c`](./queue9.c)

**Description:**
Enqueue n elements into a circular linked queue; display the queue, then display again after each of two dequeues.

**Input Format:**
First line indicates the size of the queue. Second line indicates the elements of the queue.

**Output Format:**
First line indicates the inserted elements in queue using linked list concept; then the queue after each dequeue.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
9 1 5 3 5
```
  - Output:
```text
9 1 5 3 5
1 5 3 5
5 3 5
```
- **Test Case 2:**
  - Input:
```text
8
1 8 6 4 9 5 3 5
```
  - Output:
```text
1 8 6 4 9 5 3 5
8 6 4 9 5 3 5
6 4 9 5 3 5
```

---

### Problem 10 (Q30): Challenge - [`queue10.c`](./queue10.c)

**Description:**
Enqueue n elements; print 'Queue:<elements>' then reverse the queue in place (two-pointer swap) and print 'Reversed Queue:<elements>'.

**Input Format:**
First line indicates the size of the queue. Second line indicates the elements of the queue.

**Output Format:**
First line 'Queue:' with the queued elements; second line 'Reversed Queue:' with the reversed queue.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
5 6 3 1 2
```
  - Output:
```text
Queue:5 6 3 1 2
Reversed Queue:2 1 3 6 5
```
- **Test Case 2:**
  - Input:
```text
8
1 8 6 4 9 5 3 5
```
  - Output:
```text
Queue:1 8 6 4 9 5 3 5
Reversed Queue:5 3 5 9 4 6 8 1
```

---

