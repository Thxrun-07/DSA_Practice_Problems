# Module 9: Graph Representations & Algorithms

This folder contains the 10 solved C programs for **Graph** (Questions Q81 – Q90).

## Problems Index

| Problem # | Global Q# | File | Challenge | Description Summary |
| :--- | :--- | :--- | :--- | :--- |
| Problem 1 | Q81 | [`graph1.c`](./graph1.c) | Challenge 8 | Token prices c_i; each road needs a token set; buy a token set S of minimum total cost so that roads whose required tokens are all in S connect all cities (brute force over token subsets) |
| Problem 2 | Q82 | [`graph2.c`](./graph2.c) | Challenge 2 | Each member gives two wishes (+x good / -x bad); choose toppings so every member has at least one true wish; print any valid +/- assignment or IMPOSSIBLE |
| Problem 3 | Q83 | [`graph3.c`](./graph3.c) | Challenge 83 | Maximum number of days to travel 1->n using each teleporter at most once overall; print k and k routes (length then nodes) |
| Problem 4 | Q84 | [`graph4.c`](./graph4.c) | Challenge 84 | Print the minimum number of new roads (components-1) and any such roads |
| Problem 5 | Q85 | [`graph5.c`](./graph5.c) | Challenge | Add edge (u,v,x) online iff every simple cycle keeps XOR weight 0 (xor-consistent potentials via weighted DSU); print YES/NO per query |
| Problem 6 | Q86 | [`graph6.c`](./graph6.c) | Challenge 44 | Maximum boy-girl matching; print size and the pairs (any valid maximum matching) |
| Problem 7 | Q87 | [`graph7.c`](./graph7.c) | Challenge 87 | After each new road print the number of components and the size of the largest component |
| Problem 8 | Q88 | [`graph8.c`](./graph8.c) | Challenge 88 | Print the maximum number of disjoint edges (matching) in a tree |
| Problem 9 | Q89 | [`graph9.c`](./graph9.c) | Challenge 89 | Identical statement and test cases to Question 83 (same platform challenge repeated) |
| Problem 10 | Q90 | [`graph10.c`](./graph10.c) | Challenge 90 | Minimum number of streets whose closure disconnects bank (1) from harbor (n); print k and any such k streets |

---

## Detailed Problem Descriptions

### Problem 1 (Q81): Challenge 8 - [`graph1.c`](./graph1.c)

**Description:**
Token prices c_i; each road needs a token set; buy a token set S of minimum total cost so that roads whose required tokens are all in S connect all cities
(brute force over token subsets).

**Input Format:**
n m k; k prices; m lines: u v t then t token indices.

**Output Format:**
Minimum cost, or -1 if impossible.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3 3 4
1 2 5 10
1 2 2 1 2
1 3 1 3
2 3 1 4
```
  - Output:
```text
8
```
- **Test Case 2:**
  - Input:
```text
3 3 4
1 2 5 10
1 2 1 1
1 3 1 3
2 3 2 3 4
```
  - Output:
```text
6
```

---

### Problem 2 (Q82): Challenge 2 - [`graph2.c`](./graph2.c)

**Description:**
Each member gives two wishes (+x good / -x bad); choose toppings so every member has at least one true wish; print any valid +/- assignment or
IMPOSSIBLE.

**Input Format:**
n m; n lines of two signed wishes.

**Output Format:**
m symbols +/-. Any valid solution.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3 5
+ 1 + 2
- 1 + 3
+ 4 - 2
```
  - Output:
```text
+ + + + +
```
- **Test Case 2:**
  - Input:
```text
3 5
+ 2 + 2
- 3 + 3
+ 5 - 2
```
  - Output:
```text
+ + + + +
```

---

### Problem 3 (Q83): Challenge 83 - [`graph3.c`](./graph3.c)

**Description:**
Maximum number of days to travel 1->n using each teleporter at most once overall; print k and k routes (length then nodes).

**Input Format:**
n m; m directed teleporters.

**Output Format:**
k then per route: length and nodes.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
6 7
1 2
1 3
2 6
3 4
3 5
4 6
5 6
```
  - Output:
```text
2
4
1 3 5 6
3
1 2 6
```
- **Test Case 2:**
  - Input:
```text
6 7
1 2
2 3
3 6
4 4
4 5
5 6
5 6
```
  - Output:
```text
1
4
1 2 3 6
```

---

### Problem 4 (Q84): Challenge 84 - [`graph4.c`](./graph4.c)

**Description:**
Print the minimum number of new roads (components-1) and any such roads.

**Input Format:**
n m; m roads.

**Output Format:**
k then k roads.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4 2
1 2
3 4
```
  - Output:
```text
1
2 4
```
- **Test Case 2:**
  - Input:
```text
4 2
2 3
2 4
```
  - Output:
```text
1
1 4
```

---

### Problem 5 (Q85): Challenge - [`graph5.c`](./graph5.c)

**Description:**
Add edge (u,v,x) online iff every simple cycle keeps XOR weight 0 (xor-consistent potentials via weighted DSU); print YES/NO per query.

**Input Format:**
n q; q lines u v x.

**Output Format:**
YES/NO per query.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
9 12
6 1 0
1 3 1
3 6 0
6 2 0
6 4 1
4 5 0
3 4 1
2 4 0
2 5 0
7 8 1
8 9 1
9 7 0
```
  - Output:
```text
YES
YES
NO
YES
YES
YES
NO
NO
NO
YES
YES
YES
```

---

### Problem 6 (Q86): Challenge 44 - [`graph6.c`](./graph6.c)

**Description:**
Maximum boy-girl matching; print size and the pairs (any valid maximum matching).

**Input Format:**
n m k; k potential pairs.

**Output Format:**
Size then pairs.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3 2 4
1 1
1 2
2 1
3 1
```
  - Output:
```text
2
1 2
2 1
```
- **Test Case 2:**
  - Input:
```text
3 3 4
1 1
1 2
2 3
3 2
```
  - Output:
```text
3
1 1
2 3
3 2
```

---

### Problem 7 (Q87): Challenge 87 - [`graph7.c`](./graph7.c)

**Description:**
After each new road print the number of components and the size of the largest component.

**Input Format:**
n m; m roads in day order.

**Output Format:**
m lines 'components largest'.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5 5
1 2
2 3
3 1
3 4
4 5
```
  - Output:
```text
4 2
3 3
3 3
2 4
1 5
```
- **Test Case 2:**
  - Input:
```text
5 5
1 3
2 4
3 1
3 2
5 4
```
  - Output:
```text
4 2
3 2
3 2
2 4
1 5
```

---

### Problem 8 (Q88): Challenge 88 - [`graph8.c`](./graph8.c)

**Description:**
Print the maximum number of disjoint edges (matching) in a tree.

**Input Format:**
n; n-1 edges.

**Output Format:**
One integer.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
1 2
1 3
3 4
3 5
```
  - Output:
```text
2
```
- **Test Case 2:**
  - Input:
```text
6
1 2
2 3
3 4
4 5
5 6
```
  - Output:
```text
3
```

---

### Problem 9 (Q89): Challenge 89 - [`graph9.c`](./graph9.c)

**Description:**
Identical statement and test cases to Question 83 (same platform challenge repeated).

**Input Format:**
n m; m teleporters.

**Output Format:**
k then routes.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
6 7
1 2
1 3
2 6
3 4
3 5
4 6
5 6
```
  - Output:
```text
2
4
1 3 5 6
3
1 2 6
```
- **Test Case 2:**
  - Input:
```text
6 7
1 2
2 3
3 6
4 4
4 5
5 6
5 6
```
  - Output:
```text
1
4
1 2 3 6
```

---

### Problem 10 (Q90): Challenge 90 - [`graph10.c`](./graph10.c)

**Description:**
Minimum number of streets whose closure disconnects bank (1) from harbor (n); print k and any such k streets.

**Input Format:**
n m; m streets.

**Output Format:**
k then k streets.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4 5
1 2
1 3
2 3
3 4
1 4
```
  - Output:
```text
2
3 4
1 4
```
- **Test Case 2:**
  - Input:
```text
4 4
1 2
2 3
3 4
1 4
```
  - Output:
```text
2
1 2
1 4
```

---

