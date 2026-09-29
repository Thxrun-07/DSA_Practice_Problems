# Module 1: Array Data Structure

This folder contains the 10 solved C programs for **Arrays** (Questions Q1 – Q10).

## Problems Index

| Problem # | Global Q# | File | Challenge | Description Summary |
| :--- | :--- | :--- | :--- | :--- |
| Problem 1 | Q1 | [`Array1.c`](./Array1.c) | Challenge 21 | Convert Arabic numbers (1 |
| Problem 2 | Q2 | [`Array2.c`](./Array2.c) | Challenge 22 | Given p rows and q columns, print a matrix of Y and 0 filled in alternating concentric rectangles: outermost rectangle Y, next 0, next Y, and so on |
| Problem 3 | Q3 | [`Array3.c`](./Array3.c) | Challenge 23 | For T test cases, given N days of stock prices, print every (buy sell) day pair of a rising run as '(b s)' concatenated on one line; print 'No Profit' if no profitable interval exists |
| Problem 4 | Q4 | [`Array4.c`](./Array4.c) | Challenge | Sort the array in wave fashion: arrange elements so that a[0]>=a[1]<=a[2]>=a[3] |
| Problem 5 | Q5 | [`Array5.c`](./Array5.c) | Challenge | Read integers 0 |
| Problem 6 | Q6 | [`Array6.c`](./Array6.c) | Challenge 24 | Given a budget and 2 |
| Problem 7 | Q7 | [`Array7.c`](./Array7.c) | Challenge 27 | For T test cases: read n, m then the n x m matrix (row-major, one line) and coordinates X1 Y1 X2 Y2 (1-based, inclusive) |
| Problem 8 | Q8 | [`Array8.c`](./Array8.c) | Challenge 27 | Identical statement and test cases to Question 7 (same platform challenge repeated) |
| Problem 9 | Q9 | [`Array9.c`](./Array9.c) | Challenge 37 | Given an r x c binary matrix, modify it so that if cell (i,j) is 1 then every cell in row i and column j becomes 1 |
| Problem 10 | Q10 | [`Array10.c`](./Array10.c) | Challenge 30 | For T test cases with N animal sizes: equal sizes get equal treats, larger sizes strictly more, at least 1 treat each |

---

## Detailed Problem Descriptions

### Problem 1 (Q1): Challenge 21 - [`Array1.c`](./Array1.c)

**Description:**
Convert Arabic numbers (1..1000) to Martian numerals using the value/symbol table: 1000=R, 900=BR, 500=G, 400=BG, 100=B, 90=ZB, 50=P, 40=ZP,
10=Z, 9=BZ, 5=W, 4=BW, 1=B (greedy, largest value first; symbols may be reused). Read numbers one per line until end of input and print each conversion
on its own line.

**Input Format:**
A list of numbers in a data file, one number per line, up to 5 lines at a time (minimum 1 line). No number exceeds 1000 or is less than 1.

**Output Format:**
Print the output in separate lines converting the numbers from Arabic (1,2,3...10...500...1000) to Martian (B,BB,BBB...Z...G...R) numerals.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
26
67
186
408
500
```
  - Output:
```text
ZZWB
PZWBB
BPZZZWB
BGWBBB
G
```
- **Test Case 2:**
  - Input:
```text
161
627
816
401
501
```
  - Output:
```text
BPZB
GBZZWBB
GBBBZWB
BGB
GB
```

---

### Problem 2 (Q2): Challenge 22 - [`Array2.c`](./Array2.c)

**Description:**
Given p rows and q columns, print a matrix of Y and 0 filled in alternating concentric rectangles: outermost rectangle Y, next 0, next Y, and so on. Tokens
separated by spaces.

**Input Format:**
One line with the number of rows and columns of the matrix, values separated by space.

**Output Format:**
Print the pattern matrix in separate lines.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
6 7
```
  - Output:
```text
Y Y Y Y Y Y Y
Y 0 0 0 0 0 Y
Y 0 Y Y Y 0 Y
Y 0 Y Y Y 0 Y
Y 0 0 0 0 0 Y
Y Y Y Y Y Y Y
```
- **Test Case 2:**
  - Input:
```text
5 8
```
  - Output:
```text
Y Y Y Y Y Y Y Y
Y 0 0 0 0 0 0 Y
Y 0 Y Y Y Y 0 Y
Y 0 0 0 0 0 0 Y
Y Y Y Y Y Y Y Y
```

---

### Problem 3 (Q3): Challenge 23 - [`Array3.c`](./Array3.c)

**Description:**
For T test cases, given N days of stock prices, print every (buy sell) day pair of a rising run as '(b s)' concatenated on one line; print 'No Profit' if no profitable
interval exists.

**Input Format:**
First line contains number of test cases T. First line of each test case contains an integer N denoting the number of days, followed by an array of stock prices
of N days.

**Output Format:**
For each testcase, output all the days with profit in a single line. If there is no profit then print "No Profit".

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
1
5
130 204 150 175 140
```
  - Output:
```text
(0 1)(2 3)
```
- **Test Case 2:**
  - Input:
```text
2
5
131 124 110 175 110
3
23 45 67
```
  - Output:
```text
(2 3)
(0 2)
```

---

### Problem 4 (Q4): Challenge - [`Array4.c`](./Array4.c)

**Description:**
Sort the array in wave fashion: arrange elements so that a[0]>=a[1]<=a[2]>=a[3]... (equivalently: sort ascending then swap adjacent pairs). Output the result
in one space-separated line.

**Input Format:**
First line contains the size of the array. Second line contains the space separated elements of the array.

**Output Format:**
Output contains one line that is only the result array in the wave form fashion.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
6
3 6 5 10 7 20
```
  - Output:
```text
5 3 7 6 20 10
```
- **Test Case 2:**
  - Input:
```text
8
10 5 6 3 2 20 98 80
```
  - Output:
```text
3 2 6 5 20 10 98 80
```

---

### Problem 5 (Q5): Challenge - [`Array5.c`](./Array5.c)

**Description:**
Read integers 0..12 separated by spaces, terminated by 999. Echo the tokens followed by '. ', then print, in alphabetical order (with repetitions), all letters
needed to spell the English names of the given numbers, space separated.

**Input Format:**
A set of integers from 0 to 12, separated by spaces, representing one fan's favorite players. The last integer will be 999, marking the end of the line.

**Output Format:**
Print the same numbers, then a period and a space. Then, in alphabetical order, print all the letters the fan needs to be able to spell any one of the jersey
numbers provided.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
2 3 0999
```
  - Output:
```text
2 3 0999. E E H O R T T W
```
- **Test Case 2:**
  - Input:
```text
8 14 0999
```
  - Output:
```text
8 14 0999. E G H I T
```

---

### Problem 6 (Q6): Challenge 24 - [`Array6.c`](./Array6.c)

**Description:**
Given a budget and 2..6 items (name price), buy as many items as possible (cheapest-first greedy). For each item in input order print "I can afford <name>"
or "I can't afford <name>"; if nothing can be bought print "I need more Dollar!"; finally print the remaining dollars (only when at least one item was bought).

**Input Format:**
File listing 2 to 6 items in the format of: ITEM DDDDD where ITEM = the name of the item you want to buy, DDDDD = the price of the item (in Dollar).

**Output Format:**
List the items Suresh can afford to buy, each item on its own line. If Suresh cannot afford anything in the list, output "I need more Dollar!". The final line
output should be the remaining Dollar left over after making purchases.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
6000 3
Phone-case 1486
Candybar 863
Sunglasses 5529
```
  - Output:
```text
I can afford Phone-case
I can afford Candybar
I can't afford Sunglasses
3651
```
- **Test Case 2:**
  - Input:
```text
2100 3
Camera 69555
TV 76439
iPhone 90000
```
  - Output:
```text
I can't afford Camera
I can't afford TV
I can't afford iPhone
I need more Dollar!
```

---

### Problem 7 (Q7): Challenge 27 - [`Array7.c`](./Array7.c)

**Description:**
For T test cases: read n, m then the n x m matrix (row-major, one line) and coordinates X1 Y1 X2 Y2 (1-based, inclusive). Print the sum of all elements
inside the submatrix.

**Input Format:**
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is n and m, n is the number of rows and m is
the number of columns. The second line of each test case contains C[N][M]. The third line contains four values X1, Y1, X2, Y2 (top-left and bottom-right cell).

**Output Format:**
Print the sum of all elements inside that submatrix.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
1
3 3
91 8 71 14 2 11 6 51 3
1 2 1 3
```
  - Output:
```text
79
```
- **Test Case 2:**
  - Input:
```text
1
3 3
9 18 7 14 2 11 6 51 3
1 2 1 3
```
  - Output:
```text
25
```

---

### Problem 8 (Q8): Challenge 27 - [`Array8.c`](./Array8.c)

**Description:**
Identical statement and test cases to Question 7 (same platform challenge repeated).

**Input Format:**
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is n and m, n is the number of rows and m is
the number of columns. The second line of each test case contains C[N][M]. The third line contains four values X1, Y1, X2, Y2 (top-left and bottom-right cell).

**Output Format:**
Print the sum of all elements inside that submatrix.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
1
3 3
91 8 71 14 2 11 6 51 3
1 2 1 3
```
  - Output:
```text
79
```
- **Test Case 2:**
  - Input:
```text
1
3 3
9 18 7 14 2 11 6 51 3
1 2 1 3
```
  - Output:
```text
25
```

---

### Problem 9 (Q9): Challenge 37 - [`Array9.c`](./Array9.c)

**Description:**
Given an r x c binary matrix, modify it so that if cell (i,j) is 1 then every cell in row i and column j becomes 1. Print the resulting matrix with space-separated
rows.

**Input Format:**
First line: two integers r and c (rows and columns). Next r lines: the binary matrix values separated by space.

**Output Format:**
Print the modified matrix in separate lines, values space separated.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
2 2
1 0
0 1
```
  - Output:
```text
1 1
1 1
```
- **Test Case 2:**
  - Input:
```text
3 3
0 0 0
0 1 0
0 0 1
```
  - Output:
```text
0 1 1
1 1 1
1 1 1
```

---

### Problem 10 (Q10): Challenge 30 - [`Array10.c`](./Array10.c)

**Description:**
For T test cases with N animal sizes: equal sizes get equal treats, larger sizes strictly more, at least 1 treat each. Print the minimum total treats = sum over
animals of the rank of its size among distinct sizes.

**Input Format:**
The first line of the input gives the number of test cases T. Each test case consists of two lines: a single integer N (number of animals), then N integers
S1..SN (the sizes).

**Output Format:**
Print, in separate lines, the minimum number of treats he needs to buy to offer at least one treat to all animals while complying with the impartiality rules.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3
4
10 20 10 25
5
7 7 7 7 7
2
100 1
```
  - Output:
```text
7
5
3
```
- **Test Case 2:**
  - Input:
```text
5
5
8 6 4 8 9
3
8 5 2
4
101 120 110 215
5
1711 171 711 71 71
2
110 11
```
  - Output:
```text
13
6
10
11
3
```

---

