# Module 7: Binary Trees & BST Part 1

This folder contains the 10 solved C programs for **Binary Tree** (Questions Q61 – Q70).

## Problems Index

| Problem # | Global Q# | File | Challenge | Description Summary |
| :--- | :--- | :--- | :--- | :--- |
| Problem 1 | Q61 | [`tree1.c`](./tree1.c) | Challenge 61 | Insert the given keys into a binary search tree and print the preorder traversal space separated |
| Problem 2 | Q62 | [`tree2.c`](./tree2.c) | Challenge 62 | Given the preorder and inorder traversals of a binary tree, print its postorder traversal |
| Problem 3 | Q63 | [`tree3.c`](./tree3.c) | Challenge 4 | Forest map of ' |
| Problem 4 | Q64 | [`tree4.c`](./tree4.c) | Challenge 64 | Insert the given keys into a binary search tree and print the postorder traversal space separated |
| Problem 5 | Q65 | [`tree5.c`](./tree5.c) | Challenge 45 | Build a segment tree over the array and answer q range-minimum queries |
| Problem 6 | Q66 | [`tree6.c`](./tree6.c) | Challenge | Company tree given as boss list (employee 1 = general director); each query (a,b) asks for the b-th boss of employee a, or -1 if absent |
| Problem 7 | Q67 | [`tree7.c`](./tree7.c) | Challenge 67 | Count maximum number of non-similar trips: a trip is a path from a city A up to an ancestor B; two trips are similar iff their sequences of city degrees coincide |
| Problem 8 | Q68 | [`tree8.c`](./tree8.c) | Challenge 48 | Maintain salaries under updates '! k x' and answer '? a b': the number of employees with salary in [a,b] |
| Problem 9 | Q69 | [`tree9.c`](./tree9.c) | Challenge 69 | Two forests on n nodes; add the maximum number of edges that keep BOTH forests acyclic (same edge set); print k and the added edges (any valid maximum set) |
| Problem 10 | Q70 | [`tree10.c`](./tree10.c) | Challenge 70 | Repeatedly remove the p_i-th element of the current list (1-based) and print the removed elements in order |

---

## Detailed Problem Descriptions

### Problem 1 (Q61): Challenge 61 - [`tree1.c`](./tree1.c)

**Description:**
Insert the given keys into a binary search tree and print the preorder traversal space separated.

**Input Format:**
N then N keys.

**Output Format:**
Preorder traversal in one line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
7
200 120 80 160 280 240 320
```
  - Output:
```text
200 120 80 160 280 240 320
```
- **Test Case 2:**
  - Input:
```text
9
34 67 10 90 410 810 40 20 60
```
  - Output:
```text
34 10 20 67 40 60 90 410 810
```

---

### Problem 2 (Q62): Challenge 62 - [`tree2.c`](./tree2.c)

**Description:**
Given the preorder and inorder traversals of a binary tree, print its postorder traversal.

**Input Format:**
N; preorder line; inorder line.

**Output Format:**
Postorder traversal in one line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
5 3 2 1 4
3 5 1 2 4
```
  - Output:
```text
3 1 4 2 5
```
- **Test Case 2:**
  - Input:
```text
6
6 5 3 2 1 4
6 3 5 1 2 4
```
  - Output:
```text
3 1 4 2 5 6
```

---

### Problem 3 (Q63): Challenge 4 - [`tree3.c`](./tree3.c)

**Description:**
Forest map of '.' (empty) and '*' (tree); each query gives rectangle corners r1 c1 r2 c2 - print the number of trees inside (an empty/inverted range counts 0).

**Input Format:**
n q; n grid rows; q queries r1 c1 r2 c2.

**Output Format:**
Tree count per query.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4 3
.*..
*.**
**..
****
2 2 3 4
3 1 3 1
1 1 2 2
```
  - Output:
```text
3
1
2
```
- **Test Case 2:**
  - Input:
```text
4 3
.*.*
*.**
**.*
***.
1 2 3 4
3 2 3 4
1 4 2 3
```
  - Output:
```text
6
2
0
```

---

### Problem 4 (Q64): Challenge 64 - [`tree4.c`](./tree4.c)

**Description:**
Insert the given keys into a binary search tree and print the postorder traversal space separated.

**Input Format:**
N then N keys.

**Output Format:**
Postorder traversal in one line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
7
90 70 50 75 130 110 150
```
  - Output:
```text
50 75 70 110 150 130 90
```
- **Test Case 2:**
  - Input:
```text
9
50 23 56 89 43 75 130 110 150
```
  - Output:
```text
43 23 75 110 150 130 89 56 50
```

---

### Problem 5 (Q65): Challenge 45 - [`tree5.c`](./tree5.c)

**Description:**
Build a segment tree over the array and answer q range-minimum queries.

**Input Format:**
n q; array; q lines of a b.

**Output Format:**
One minimum per query.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
8 4
3 2 4 5 1 1 5 3
2 4
5 6
1 8
3 3
```
  - Output:
```text
2
1
1
4
```
- **Test Case 2:**
  - Input:
```text
10 4
13 12 14 51 11 1 5 3 4 6
3 4
3 6
4 8
1 3
```
  - Output:
```text
14
1
1
12
```

---

### Problem 6 (Q66): Challenge - [`tree6.c`](./tree6.c)

**Description:**
Company tree given as boss list (employee 1 = general director); each query (a,b) asks for the b-th boss of employee a, or -1 if absent.

**Input Format:**
n q; boss list for employees 2..n; q queries a b.

**Output Format:**
One answer per query.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5 3
1 3 2 2
4 2
1 2
1 3
```
  - Output:
```text
1
-1
-1
```
- **Test Case 2:**
  - Input:
```text
5 3
1 1 3 3
4 1
4 2
4 3
```
  - Output:
```text
3
1
-1
```

---

### Problem 7 (Q67): Challenge 67 - [`tree7.c`](./tree7.c)

**Description:**
Count maximum number of non-similar trips: a trip is a path from a city A up to an ancestor B; two trips are similar iff their sequences of city degrees
coincide. Print the number of distinct degree sequences over all ancestor chains.

**Input Format:**
N then N-1 edges.

**Output Format:**
Single integer.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3
2 1
3 1
```
  - Output:
```text
3
```
- **Test Case 2:**
  - Input:
```text
4
2 1
3 1
2 4
```
  - Output:
```text
5
```

---

### Problem 8 (Q68): Challenge 48 - [`tree8.c`](./tree8.c)

**Description:**
Maintain salaries under updates '! k x' and answer '? a b': the number of employees with salary in [a,b].

**Input Format:**
n q; salaries; q queries.

**Output Format:**
One answer per '?' query.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5 3
3 7 2 2 5
? 2 3
! 3 6
? 2 3
```
  - Output:
```text
3
2
```
- **Test Case 2:**
  - Input:
```text
5 3
31 17 12 12 15
? 12 31
! 2 6
? 2 13
```
  - Output:
```text
5
3
```

---

### Problem 9 (Q69): Challenge 69 - [`tree9.c`](./tree9.c)

**Description:**
Two forests on n nodes; add the maximum number of edges that keep BOTH forests acyclic (same edge set); print k and the added edges (any valid
maximum set).

**Input Format:**
n m1 m2; m1 edges of forest1; m2 edges of forest2.

**Output Format:**
k then k edge lines.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5 3 2
5 4
2 1
4 3
4 3
1 4
```
  - Output:
```text
1
1 5
```
- **Test Case 2:**
  - Input:
```text
5 3 2
5 3
2 3
2 4
1 2
4 5
```
  - Output:
```text
1
1 3
```

---

### Problem 10 (Q70): Challenge 70 - [`tree10.c`](./tree10.c)

**Description:**
Repeatedly remove the p_i-th element of the current list (1-based) and print the removed elements in order.

**Input Format:**
n; list; n positions.

**Output Format:**
Removed elements space separated.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
2 6 1 4 2
3 1 3 1 1
```
  - Output:
```text
1 2 2 6 4
```
- **Test Case 2:**
  - Input:
```text
6
7 2 6 1 4 2
2 2 1 2 2 1
```
  - Output:
```text
2 6 7 4 2 1
```

---

