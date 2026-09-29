# Module 10: Hashing & Collision Resolution

This folder contains the 10 solved C programs for **Hashing** (Questions Q91 – Q100).

## Problems Index

| Problem # | Global Q# | File | Challenge | Description Summary |
| :--- | :--- | :--- | :--- | :--- |
| Problem 1 | Q91 | [`hash1.c`](./hash1.c) | Challenge | Count pairs (i,j), i<j, with A_i < A_j (the 'unique special Pikachu pairs') |
| Problem 2 | Q92 | [`hash2.c`](./hash2.c) | Challenge 92 | Queen moves left/up/diagonally-up-left on a quarter-infinite board; Canthi moves first; player unable to move loses |
| Problem 3 | Q93 | [`hash3.c`](./hash3.c) | Challenge 93 | Per festival remember only the top three spendings; print the festival with maximum remembered total (ties: lexicographically smallest name) and that total |
| Problem 4 | Q94 | [`hash4.c`](./hash4.c) | Challenge 94 | Boy x beats z = G[B[x]] when z != x |
| Problem 5 | Q95 | [`hash5.c`](./hash5.c) | Challenge 5 | Print the most frequent character of the string (ties: lowest ASCII) and its count |
| Problem 6 | Q96 | [`hash6.c`](./hash6.c) | Challenge 94 | Each element may be shifted by k*M (|k| <= Q); print the highest achievable frequency of a single value |
| Problem 7 | Q97 | [`hash7.c`](./hash7.c) | Challenge 7 | Over all contiguous subarrays compute the maximum sub-array sum within each; print the sum of the unique values |
| Problem 8 | Q98 | [`hash8.c`](./hash8.c) | Challenge 98 | Array initially zero; '1 k' sets A[k] = -1; '2 y' prints the smallest index >= y with value -1, else -1 |
| Problem 9 | Q99 | [`hash9.c`](./hash9.c) | Challenge 9 | V(A_i) = number of divisors; count unordered pairs with equal V |
| Problem 10 | Q100 | [`hash10.c`](./hash10.c) | Challenge | Count distinct index triplets (i,j,k), i<j<k, whose values sum to a multiple of the mythical constant M (remainder-class counting) |

---

## Detailed Problem Descriptions

### Problem 1 (Q91): Challenge - [`hash1.c`](./hash1.c)

**Description:**
Count pairs (i,j), i<j, with A_i < A_j (the 'unique special Pikachu pairs').

**Input Format:**
N then N integers.

**Output Format:**
Single integer.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
1 2 2 1 3
```
  - Output:
```text
6
```
- **Test Case 2:**
  - Input:
```text
7
1 4 1 2 2 1 3
```
  - Output:
```text
10
```

---

### Problem 2 (Q92): Challenge 92 - [`hash2.c`](./hash2.c)

**Description:**
Queen moves left/up/diagonally-up-left on a quarter-infinite board; Canthi moves first; player unable to move loses. Print the winner for each position
(Wythoff game: first player loses exactly on Wythoff pairs).

**Input Format:**
t; per case a b.

**Output Format:**
Winner name per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
2
1 2
2 3
```
  - Output:
```text
sami
canthi
```
- **Test Case 2:**
  - Input:
```text
3
5 6
1 5
2 3
```
  - Output:
```text
canthi
canthi
canthi
```

---

### Problem 3 (Q93): Challenge 93 - [`hash3.c`](./hash3.c)

**Description:**
Per festival remember only the top three spendings; print the festival with maximum remembered total (ties: lexicographically smallest name) and that total.

**Input Format:**
T; per case N then N lines 'name amount'.

**Output Format:**
One line 'name total' per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
2
6
B 20
A 2
A 10
A 10
B 30
A 30
3
abc 10
xyz 15
oop 8
```
  - Output:
```text
A 50
xyz 15
```
- **Test Case 2:**
  - Input:
```text
2
5
BA 25
AD 24
Ag 10
AE 15
AT 30
3
abc 15
xyz 25
oops 8
```
  - Output:
```text
AT 30
xyz 25
```

---

### Problem 4 (Q94): Challenge 94 - [`hash4.c`](./hash4.c)

**Description:**
Boy x beats z = G[B[x]] when z != x. Print (1) maximum beatings received by any student and (2) number of unordered pairs that beat each other.

**Input Format:**
T; per case N, boys' crushes, girls' crushes.

**Output Format:**
Two integers per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
2
3
2 2 1
3 2 1
4
2 3 4 1
2 3 4 1
```
  - Output:
```text
1 0
1 2
```
- **Test Case 2:**
  - Input:
```text
2
4
4 2 1 3
4 2 1 2
3
2 1 3
1 2 3
```
  - Output:
```text
1 0
1 1
```

---

### Problem 5 (Q95): Challenge 5 - [`hash5.c`](./hash5.c)

**Description:**
Print the most frequent character of the string (ties: lowest ASCII) and its count.

**Input Format:**
One string (may contain spaces).

**Output Format:**
'char count'.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
puppy is a dog!!!!!!!!!!!!
```
  - Output:
```text
! 12
```
- **Test Case 2:**
  - Input:
```text
leana is a singer!!!!!!!
```
  - Output:
```text
! 7
```

---

### Problem 6 (Q96): Challenge 94 - [`hash6.c`](./hash6.c)

**Description:**
Each element may be shifted by k*M (|k| <= Q); print the highest achievable frequency of a single value.

**Input Format:**
M; Q; N; array.

**Output Format:**
Single integer.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
1
1
4
1 2 3 4
```
  - Output:
```text
3
```
- **Test Case 2:**
  - Input:
```text
1
1
5
11 12 31 41 51
```
  - Output:
```text
2
```

---

### Problem 7 (Q97): Challenge 7 - [`hash7.c`](./hash7.c)

**Description:**
Over all contiguous subarrays compute the maximum sub-array sum within each; print the sum of the unique values.

**Input Format:**
N then N integers.

**Output Format:**
Single integer.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4
5 -2 7 -3
```
  - Output:
```text
17
```
- **Test Case 2:**
  - Input:
```text
15
2 3 4 5 6 7 3 4 2 7 6 8 6 4 9
```
  - Output:
```text
2021
```

---

### Problem 8 (Q98): Challenge 98 - [`hash8.c`](./hash8.c)

**Description:**
Array initially zero; '1 k' sets A[k] = -1; '2 y' prints the smallest index >= y with value -1, else -1.

**Input Format:**
n q then q queries.

**Output Format:**
One line per type-2 query.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5 5
2 3
1 2
2 1
2 3
2 2
```
  - Output:
```text
-1
2
-1
2
```
- **Test Case 2:**
  - Input:
```text
5 5
2 1
1 2
2 2
1 2
2 3
```
  - Output:
```text
-1
2
-1
```

---

### Problem 9 (Q99): Challenge 9 - [`hash9.c`](./hash9.c)

**Description:**
V(A_i) = number of divisors; count unordered pairs with equal V.

**Input Format:**
N then N integers.

**Output Format:**
Single integer.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3
2 3 4
```
  - Output:
```text
1
```
- **Test Case 2:**
  - Input:
```text
10
2 3 4 2 7 6 8 6 4 9
```
  - Output:
```text
12
```

---

### Problem 10 (Q100): Challenge - [`hash10.c`](./hash10.c)

**Description:**
Count distinct index triplets (i,j,k), i<j<k, whose values sum to a multiple of the mythical constant M (remainder-class counting).

**Input Format:**
N M; then N integers.

**Output Format:**
Single integer count.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
10 5
1 10 4 3 2 5 0 1 9 5
```
  - Output:
```text
26
```
- **Test Case 2:**
  - Input:
```text
10 5
11 10 14 31 21 15 10 11 9 51
```
  - Output:
```text
31
```

---

