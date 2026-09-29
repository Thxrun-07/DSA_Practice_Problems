# Module 8: Tree Traversal & Balancing Part 2

This folder contains the 10 solved C programs for **Tree Traversal** (Questions Q71 – Q80).

## Problems Index

| Problem # | Global Q# | File | Challenge | Description Summary |
| :--- | :--- | :--- | :--- | :--- |
| Problem 1 | Q71 | [`tree1.c`](./tree1.c) | Challenge 7 | For each test case decide whether two rooted trees (root = node 1) are isomorphic; print YES/NO |
| Problem 2 | Q72 | [`tree2.c`](./tree2.c) | Challenge 72 | Each operation removes the greatest and smallest elements and inserts their difference; after K operations print the sum of the remaining array per query |
| Problem 3 | Q73 | [`tree3.c`](./tree3.c) | Challenge 73 | Add the minimum number of one-way flights so every city can reach every other; print k and any k valid new flights |
| Problem 4 | Q74 | [`tree4.c`](./tree4.c) | Challenge 74 | Print the total weight of the maximum spanning tree per test case (Kruskal with descending weights) |
| Problem 5 | Q75 | [`tree5.c`](./tree5.c) | Challenge 75 | Reconstruct the original tree from its beautiful code (Prüfer-like sequence) and print its n-1 edges |
| Problem 6 | Q76 | [`tree6.c`](./tree6.c) | Challenge 76 | Queries: '1 a b' adds 1,2,3, |
| Problem 7 | Q77 | [`tree7.c`](./tree7.c) | Challenge 77 | Maintain a B-sequence (strictly increasing then strictly decreasing; values except max at most twice, decreasing side subset of increasing side) |
| Problem 8 | Q78 | [`tree8.c`](./tree8.c) | Challenge 78 | Each day a ghost (by age) wins the title; the trophy goes to the ghost with most titles so far (ties to the eldest) |
| Problem 9 | Q79 | [`tree9.c`](./tree9.c) | Challenge 79 | Rooted tree with a lowercase char per node; queries (u,c): count nodes in u's subtree storing c |
| Problem 10 | Q80 | [`tree10.c`](./tree10.c) | Challenge 80 | Selling a seat from a row with K empty seats costs K and decrements K; sell N tickets maximising revenue (greedy max-heap) |

---

## Detailed Problem Descriptions

### Problem 1 (Q71): Challenge 7 - [`tree1.c`](./tree1.c)

**Description:**
For each test case decide whether two rooted trees (root = node 1) are isomorphic; print YES/NO.

**Input Format:**
t; per case n, edges of tree1, edges of tree2.

**Output Format:**
YES/NO per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
2
3
1 2
2 3
1 2
1 3
3
1 2
2 3
1 3
3 2
```
  - Output:
```text
NO
YES
```
- **Test Case 2:**
  - Input:
```text
2
4
1 2
1 3
1 4
1 2
2 3
2 4
4
1 2
1 3
1 4
1 2
1 3
1 4
```
  - Output:
```text
NO
YES
```

---

### Problem 2 (Q72): Challenge 72 - [`tree2.c`](./tree2.c)

**Description:**
Each operation removes the greatest and smallest elements and inserts their difference; after K operations print the sum of the remaining array per query.

**Input Format:**
N Q; array; Q lines of K.

**Output Format:**
One sum per query.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5 2
3 2 1 5 4
1
2
```
  - Output:
```text
13
9
```
- **Test Case 2:**
  - Input:
```text
5 3
13 12 11 15 14
1
2
3
```
  - Output:
```text
43
35
15
```

---

### Problem 3 (Q73): Challenge 73 - [`tree3.c`](./tree3.c)

**Description:**
Add the minimum number of one-way flights so every city can reach every other; print k and any k valid new flights.

**Input Format:**
n m; m directed edges.

**Output Format:**
k then k edges.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4 5
1 2
2 3
3 1
1 4
3 4
```
  - Output:
```text
1
4 1
```
- **Test Case 2:**
  - Input:
```text
4 5
1 3
2 1
1 2
2 4
1 4
```
  - Output:
```text
2
3 1
4 1
```

---

### Problem 4 (Q74): Challenge 74 - [`tree4.c`](./tree4.c)

**Description:**
Print the total weight of the maximum spanning tree per test case (Kruskal with descending weights).

**Input Format:**
T; per case N M then M edges a b c.

**Output Format:**
One integer per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
1
3 3
1 2 2
2 3 3
1 3 4
```
  - Output:
```text
7
```
- **Test Case 2:**
  - Input:
```text
1
3 3
1 2 3
2 3 4
1 3 5
```
  - Output:
```text
9
```

---

### Problem 5 (Q75): Challenge 75 - [`tree5.c`](./tree5.c)

**Description:**
Reconstruct the original tree from its beautiful code (Prüfer-like sequence) and print its n-1 edges.

**Input Format:**
n; then n-2 code integers.

**Output Format:**
n-1 edges, any order (decoder order matches platform).

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
2 2 4
```
  - Output:
```text
1 2
3 2
2 4
4 5
```
- **Test Case 2:**
  - Input:
```text
5
3 1 2
```
  - Output:
```text
4 3
3 1
1 2
2 5
```

---

### Problem 6 (Q76): Challenge 76 - [`tree6.c`](./tree6.c)

**Description:**
Queries: '1 a b' adds 1,2,3,... to positions a..b; '2 a b' prints the sum of positions a..b.

**Input Format:**
n q; array; q queries.

**Output Format:**
Sum per type-2 query.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5 3
3 7 2 2 5
2 2 3
1 3 6
1 2 3
```
  - Output:
```text
9
```
- **Test Case 2:**
  - Input:
```text
5 3
4 2 3 1 7
2 1 5
1 1 5
2 1 5
```
  - Output:
```text
17
32
```

---

### Problem 7 (Q77): Challenge 77 - [`tree7.c`](./tree7.c)

**Description:**
Maintain a B-sequence (strictly increasing then strictly decreasing; values except max at most twice, decreasing side subset of increasing side). Insert val
only if still a B-sequence; print size after each operation and the final sequence.

**Input Format:**
N; sequence; Q; Q values.

**Output Format:**
Size per operation then the final sequence.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4
1 2 5 2
4
5
1
3
2
```
  - Output:
```text
4
5
6
6
1 2 3 5 2 1
```
- **Test Case 2:**
  - Input:
```text
5
3 4 5 3 1
3
6
2
3
```
  - Output:
```text
6
7
7
2 3 4 5 6 3 1
```

---

### Problem 8 (Q78): Challenge 78 - [`tree8.c`](./tree8.c)

**Description:**
Each day a ghost (by age) wins the title; the trophy goes to the ghost with most titles so far (ties to the eldest). Print per day the trophy winner's age and his
title count.

**Input Format:**
N M; N ages (day order).

**Output Format:**
M lines: age and count.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
7 5
1 3 1 3 2 2 2
```
  - Output:
```text
1 1
3 1
1 2
3 2
3 2
3 2
2 3
```
- **Test Case 2:**
  - Input:
```text
10 4
3 4 5 1 3 1 3 2 2 2
```
  - Output:
```text
3 1
4 1
5 1
5 1
3 2
3 2
3 3
3 3
3 3
3 3
```

---

### Problem 9 (Q79): Challenge 79 - [`tree9.c`](./tree9.c)

**Description:**
Rooted tree with a lowercase char per node; queries (u,c): count nodes in u's subtree storing c.

**Input Format:**
N Q; string; N-1 edges; Q queries.

**Output Format:**
One count per query.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3 1
aba
1 2
1 3
1 a
```
  - Output:
```text
2
```
- **Test Case 2:**
  - Input:
```text
4 1
wsxw
1 2
1 3
1 4
1 w
```
  - Output:
```text
2
```

---

### Problem 10 (Q80): Challenge 80 - [`tree10.c`](./tree10.c)

**Description:**
Selling a seat from a row with K empty seats costs K and decrements K; sell N tickets maximising revenue (greedy max-heap).

**Input Format:**
M N; M row capacities.

**Output Format:**
Maximum pounds.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3 4
1 2 4
```
  - Output:
```text
11
```
- **Test Case 2:**
  - Input:
```text
8 4
3 7 1 2 4 7 5 9
```
  - Output:
```text
31
```

---

