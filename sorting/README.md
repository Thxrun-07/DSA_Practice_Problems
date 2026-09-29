# Module 6: Sorting Algorithms

This folder contains the 10 solved C programs for **Sorting** (Questions Q51 – Q60).

## Problems Index

| Problem # | Global Q# | File | Challenge | Description Summary |
| :--- | :--- | :--- | :--- | :--- |
| Problem 1 | Q51 | [`sort1.c`](./sort1.c) | Challenge 11 | Girls' heights ascending, boys' descending; pair by index; a pair is ideal if one height divides the other (Ai%Bi==0 or Bi%Ai==0) |
| Problem 2 | Q52 | [`sort2.c`](./sort2.c) | Challenge 12 | Sort the numbers with selection sort and print the sorted array space separated |
| Problem 3 | Q53 | [`sort3.c`](./sort3.c) | Challenge 13 | Per query, decide whether swap operations can put each fruit type in its own container: possible iff sorted row sums equal sorted column sums |
| Problem 4 | Q54 | [`sort4.c`](./sort4.c) | Challenge | Carry at most m laptops; buying a laptop with negative price earns its absolute value |
| Problem 5 | Q55 | [`sort5.c`](./sort5.c) | Challenge 15 | Given n visibility segments, answer m queries: print Yes if the query interval lies strictly inside some segment (longer than the query), else No |
| Problem 6 | Q56 | [`sort6.c`](./sort6.c) | Challenge | Print the array state after the third iteration of insertion sort, then the fully sorted array (space separated) |
| Problem 7 | Q57 | [`sort7.c`](./sort7.c) | Challenge | Per case: given two arrays, print the maximum scalar product (sort one ascending, other descending and dot) |
| Problem 8 | Q58 | [`sort8.c`](./sort8.c) | Challenge | Per case: sort the array and print (maximum element - m) |
| Problem 9 | Q59 | [`sort9.c`](./sort9.c) | Challenge | M stacks of K leaves with beauty values; take exactly P leaves taking prefixes of stacks; maximise total beauty (DP over stacks) |
| Problem 10 | Q60 | [`sort10.c`](./sort10.c) | Challenge | Per case: flats with (x,y,h); d=y-x; if total h odd print NO; else sort by d and print YES iff some prefix ending at a d-group boundary sums to half the total |

---

## Detailed Problem Descriptions

### Problem 1 (Q51): Challenge 11 - [`sort1.c`](./sort1.c)

**Description:**
Girls' heights ascending, boys' descending; pair by index; a pair is ideal if one height divides the other (Ai%Bi==0 or Bi%Ai==0). Print the count per test
case.

**Input Format:**
T; per case n, then girls' heights, then boys' heights.

**Output Format:**
Number of ideal pairs per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
2
4
1 6 9 12
4 12 3 9
4
2 2 2 2
2 2 2 2
```
  - Output:
```text
2
4
```
- **Test Case 2:**
  - Input:
```text
2
4
3 6 9 12
4 12 16 9
4
1 1 1 1
2 2 2 2
```
  - Output:
```text
3
4
```

---

### Problem 2 (Q52): Challenge 12 - [`sort2.c`](./sort2.c)

**Description:**
Sort the numbers with selection sort and print the sorted array space separated.

**Input Format:**
N then the numbers.

**Output Format:**
Sorted array in one line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
15 17 11 25 1
```
  - Output:
```text
1 11 15 17 25
```
- **Test Case 2:**
  - Input:
```text
6
65 45 27 21 25 11
```
  - Output:
```text
11 21 25 27 45 65
```

---

### Problem 3 (Q53): Challenge 13 - [`sort3.c`](./sort3.c)

**Description:**
Per query, decide whether swap operations can put each fruit type in its own container: possible iff sorted row sums equal sorted column sums. Print
Possible/Impossible.

**Input Format:**
q; per query n then n x n matrix.

**Output Format:**
Possible or Impossible per query.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
2
2
1 1
1 1
2
0 2
1 1
```
  - Output:
```text
Possible
Impossible
```
- **Test Case 2:**
  - Input:
```text
2
2
2 1
1 2
2
1 2
2 1
```
  - Output:
```text
Possible
Possible
```

---

### Problem 4 (Q54): Challenge - [`sort4.c`](./sort4.c)

**Description:**
Carry at most m laptops; buying a laptop with negative price earns its absolute value. Print the maximum earnable sum.

**Input Format:**
T; per case n m then n prices.

**Output Format:**
Maximum sum per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
1
5 3
-6 0 35 -2 4
```
  - Output:
```text
8
```
- **Test Case 2:**
  - Input:
```text
2
6 2
-4 5 0 -1 2 1
7 4
6 1 0 -2 2 -4 3
```
  - Output:
```text
5
6
```

---

### Problem 5 (Q55): Challenge 15 - [`sort5.c`](./sort5.c)

**Description:**
Given n visibility segments, answer m queries: print Yes if the query interval lies strictly inside some segment (longer than the query), else No. (Statement
page badly corrupted; semantics inferred from test data.)

**Input Format:**
n m; n segment pairs; m query pairs.

**Output Format:**
Yes/No per query.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5 3
1 2
2 3
3 4
1 5
2 6
2 3
1 2
2 6
```
  - Output:
```text
Yes
Yes
No
```
- **Test Case 2:**
  - Input:
```text
5 3
1 4
2 3
3 5
5 1
5 6
2 3
2 4
1 3
```
  - Output:
```text
Yes
Yes
Yes
```

---

### Problem 6 (Q56): Challenge - [`sort6.c`](./sort6.c)

**Description:**
Print the array state after the third iteration of insertion sort, then the fully sorted array (space separated).

**Input Format:**
N then the numbers.

**Output Format:**
Third-iteration line and final sorted line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
64 25 22 90 35
```
  - Output:
```text
22 25 64 90 35
22 25 35 64 90
```
- **Test Case 2:**
  - Input:
```text
5
16 21 22 10 35
```
  - Output:
```text
16 21 22 10 35
10 16 21 22 35
```

---

### Problem 7 (Q57): Challenge - [`sort7.c`](./sort7.c)

**Description:**
Per case: given two arrays, print the maximum scalar product (sort one ascending, other descending and dot).

**Input Format:**
T; per case n then array A then array B.

**Output Format:**
One value per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3
4
2 5 3 7
8 5 7 3
3
13 11 1
6 15 14
5
6 11 9 15 4
3 41 8 21 4
```
  - Output:
```text
83
247
451
```
- **Test Case 2:**
  - Input:
```text
2
3
13 11 1
6 15 14
5
6 11 9 15 4
3 41 8 21 4
```
  - Output:
```text
247
451
```

---

### Problem 8 (Q58): Challenge - [`sort8.c`](./sort8.c)

**Description:**
Per case: sort the array and print (maximum element - m).

**Input Format:**
T; per case n m then n numbers.

**Output Format:**
One value per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
2
5 6
2 5 4 5 2
5 3
1 6 3 5 2
```
  - Output:
```text
-1
3
```
- **Test Case 2:**
  - Input:
```text
2
5 6
12 15 14 15 12
5 3
11 61 31 51 21
```
  - Output:
```text
9
58
```

---

### Problem 9 (Q59): Challenge - [`sort9.c`](./sort9.c)

**Description:**
M stacks of K leaves with beauty values; take exactly P leaves taking prefixes of stacks; maximise total beauty (DP over stacks).

**Input Format:**
T; per case M K P then M lines of K values.

**Output Format:**
Maximum beauty per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
2
2 4 5
10 10 100 30
80 50 10 50
3 2 3
80 80
20 20
15 50
```
  - Output:
```text
250
180
```
- **Test Case 2:**
  - Input:
```text
2
2 4 5
20 20 70 30
60 30 10 50
3 2 3
60 70
15 40
20 10
```
  - Output:
```text
200
150
```

---

### Problem 10 (Q60): Challenge - [`sort10.c`](./sort10.c)

**Description:**
Per case: flats with (x,y,h); d=y-x; if total h odd print NO; else sort by d and print YES iff some prefix ending at a d-group boundary sums to half the total.

**Input Format:**
t; per case n then n lines of x y h.

**Output Format:**
YES or NO per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3
3
-2 1 1
-1 1 3
1 -1 4
3
-2 1 1
-1 1 1
-2 1 1
4
-2 1 1
-1 1 2
-2 1 1
3 1 5
```
  - Output:
```text
YES
NO
NO
```
- **Test Case 2:**
  - Input:
```text
3
3
1 -1 4
-1 1 3
1 -1 4
3
1 -1 4
-1 1 1
1 -1 4
4
1 -1 4
-1 1 2
1 -1 4
3 1 5
```
  - Output:
```text
NO
NO
NO
```

---

