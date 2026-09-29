# Module 5: Searching Algorithms

This folder contains the 10 solved C programs for **Searching** (Questions Q41 – Q50).

## Problems Index

| Problem # | Global Q# | File | Challenge | Description Summary |
| :--- | :--- | :--- | :--- | :--- |
| Problem 1 | Q41 | [`search1.c`](./search1.c) | Challenge | Three lines give M, D and X as 'VAR value' with exactly one '?'; using M = -d*x compute the unknown and print '<var> <value>' with two decimals (lowercase var) |
| Problem 2 | Q42 | [`search2.c`](./search2.c) | Challenge 2 | Sort horse-chariot names (until END): names containing a standalone gemstone word are royal and come first, ordered by their highest-priority gem (Lapis highest  |
| Problem 3 | Q43 | [`search3.c`](./search3.c) | Challenge 3 | A row-range is beautiful on a column range if in every row max-min of the chosen cells <= L |
| Problem 4 | Q44 | [`search4.c`](./search4.c) | Challenge 4 | For each range [L,R] count integers X with gcd(X, F(X)) > 1 where F(X) is the sum of the hexadecimal digits of X |
| Problem 5 | Q45 | [`search5.c`](./search5.c) | Challenge 5 | Building of M sections with digit beauty scores; Nesamani paints one section per day (first free, later adjacent to painted), adversary destroys one unpainted end section per day |
| Problem 6 | Q46 | [`search6.c`](./search6.c) | Challenge 6 | Print the third largest distinct value as 'The third Largest element is V' |
| Problem 7 | Q47 | [`search7.c`](./search7.c) | Challenge 7 | Count rectangles whose side ratio (either orientation) lies in [1 |
| Problem 8 | Q48 | [`search8.c`](./search8.c) | Challenge 8 | Substitute [N]/[AV]/[V]/[AJ] placeholders in the story line with the topmost unused word of each group (NOUNS/ADVERBS/VERBS/ADJECTIVES); perform the substitution twice without repeating words and print both final sentences |
| Problem 9 | Q49 | [`search9.c`](./search9.c) | Challenge | Train i runs on days X_i, 2X_i,  |
| Problem 10 | Q50 | [`search10.c`](./search10.c) | Challenge 10 | Array A holds value i exactly i*floor(sqrt(i)) + ceil(i/2) times in sorted order |

---

## Detailed Problem Descriptions

### Problem 1 (Q41): Challenge - [`search1.c`](./search1.c)

**Description:**
Three lines give M, D and X as 'VAR value' with exactly one '?'; using M = -d*x compute the unknown and print '<var> <value>' with two decimals (lowercase
var).

**Input Format:**
Three lines: capital letter then a decimal value or '?'.

**Output Format:**
The variable, a space, then the value (2 decimals).

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
M 14.00
D -4.80
X ?
```
  - Output:
```text
x 2.92
```
- **Test Case 2:**
  - Input:
```text
M 12.00
D -5.80
X ?
```
  - Output:
```text
x 2.07
```

---

### Problem 2 (Q42): Challenge 2 - [`search2.c`](./search2.c)

**Description:**
Sort horse-chariot names (until END): names containing a standalone gemstone word are royal and come first, ordered by their highest-priority gem (Lapis
highest ... Garnet lowest per the gems array), ties by name; non-royal names follow in case-insensitive alphabetical order.

**Input Format:**
One name per line, terminated by END.

**Output Format:**
The sorted names, one per line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
Buttershy
Orangejack
Rubyanne
Rainbow Dash
Rarity
Pinkie Pie
Emerald Sunshine
Spike the Dragon
Misty Sapphire
END
```
  - Output:
```text
Misty Sapphire
Emerald Sunshine
Buttershy
Orangejack
Pinkie Pie
Rainbow Dash
Rarity
Rubyanne
Spike the Dragon
```
- **Test Case 2:**
  - Input:
```text
Granny Smith
Discord
Spitfire
Granny Smith
Photo Finish
Pearl Peridot
Granny Smith
Princess Pearl
Soarine
END
```
  - Output:
```text
Pearl Peridot
Princess Pearl
Discord
Granny Smith
Granny Smith
Granny Smith
Photo Finish
```

---

### Problem 3 (Q43): Challenge 3 - [`search3.c`](./search3.c)

**Description:**
A row-range is beautiful on a column range if in every row max-min of the chosen cells <= L. Print the maximum area of an axis-aligned beautiful
sub-rectangle per test case.

**Input Format:**
T; per case R C L then R rows of C integers.

**Output Format:**
Maximum number of squares per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3
1 4 0
3 1 3 3
2 3 0
4 4 5
7 6 6
4 5 0
2 2 4 4 20
8 3 3 3 12
6 6 3 3 3
1 6 8 6 4
```
  - Output:
```text
2
2
6
```
- **Test Case 2:**
  - Input:
```text
3
2 4 0
2 3 1 2
3 1 3 3
2 3 0
41 4 5
7 61 6
4 5 0
12 12 14 4 20
81 13 13 3 12
61 16 31 3 3
11 16 81 6 4
```
  - Output:
```text
2
2
4
```

---

### Problem 4 (Q44): Challenge 4 - [`search4.c`](./search4.c)

**Description:**
For each range [L,R] count integers X with gcd(X, F(X)) > 1 where F(X) is the sum of the hexadecimal digits of X.

**Input Format:**
T then T lines of L R.

**Output Format:**
One count per line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3
1 3
5 8
7 12
```
  - Output:
```text
2
4
6
```
- **Test Case 2:**
  - Input:
```text
10
15 64
14 100
9 79
19 63
3 83
5 61
18 93
20 98
13 71
12 53
```
  - Output:
```text
29
52
45
26
53
37
45
47
36
26
```

---

### Problem 5 (Q45): Challenge 5 - [`search5.c`](./search5.c)

**Description:**
Building of M sections with digit beauty scores; Nesamani paints one section per day (first free, later adjacent to painted), adversary destroys one unpainted
end section per day. Print the maximum total beauty he can guarantee.

**Input Format:**
T; per case M then a string of M digits.

**Output Format:**
The guaranteed maximum beauty per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4
4
1332
4
9583
3
616
10
1029384756
```
  - Output:
```text
6
14
7
31
```
- **Test Case 2:**
  - Input:
```text
4
3
332
3
583
4
1616
8
29384756
```
  - Output:
```text
6
13
7
24
```

---

### Problem 6 (Q46): Challenge 6 - [`search6.c`](./search6.c)

**Description:**
Print the third largest distinct value as 'The third Largest element is V'.

**Input Format:**
N then N elements.

**Output Format:**
Single sentence with the third largest.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
6
1 14 2 16 10 20
```
  - Output:
```text
The third Largest element is 14
```
- **Test Case 2:**
  - Input:
```text
7
19 -10 20 14 2 16 10
```
  - Output:
```text
The third Largest element is 16
```

---

### Problem 7 (Q47): Challenge 7 - [`search7.c`](./search7.c)

**Description:**
Count rectangles whose side ratio (either orientation) lies in [1.6, 1.7] inclusive.

**Input Format:**
N then N lines of W H.

**Output Format:**
Single line with the count.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4
185 100
180 100
170 100
160 100
```
  - Output:
```text
2
```
- **Test Case 2:**
  - Input:
```text
6
185 100
180 100
170 100
160 100
165 90
164 95
```
  - Output:
```text
2
```

---

### Problem 8 (Q48): Challenge 8 - [`search8.c`](./search8.c)

**Description:**
Substitute [N]/[AV]/[V]/[AJ] placeholders in the story line with the topmost unused word of each group (NOUNS/ADVERBS/VERBS/ADJECTIVES); perform
the substitution twice without repeating words and print both final sentences.

**Input Format:**
Story line, then group headers with their words; input ends at END/EOF.

**Output Format:**
The two completed sentences, one per line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
There once was a [AJ] [N] from [N] who [AV] [V] all day.
NOUNS
squirrel
London
tree
lettuce
ADVERBS
silently
quickly
happily
VERBS
skipped
ran
climbs
ADJECTIVES
delightful
homely
quain
```
  - Output:
```text
There once was a delightful squirrel from London who silently skipped all day.
There once was a homely tree from lettuce who quickly ran all day.
```
- **Test Case 2:**
  - Input:
```text
There once was a [AJ] [N] from [N] who [AV] [V] all day.
NOUNS
singer
chennai
hotel
chettinad
ADVERBS
silently
quickly
happily
sadly
VERBS
skipped
reads
ran
sings
climbs
CH.SC.U4CSE25205 - B V THARUN | Department of Computer Science & Engineering (CSE) | 2026
```
  - Output:
```text

```

---

### Problem 9 (Q49): Challenge - [`search9.c`](./search9.c)

**Description:**
Train i runs on days X_i, 2X_i, ...; multiple trains same day allowed; journey of N trains must finish by day D. Print the latest possible day for the first train.

**Input Format:**
T; per case N D then N integers X_i.

**Output Format:**
Latest first-train day per case.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3
3 100
31 71 21
4 100
11 16 51 50
1 1
1
```
  - Output:
```text
62
44
1
```
- **Test Case 2:**
  - Input:
```text
3
5 1000
311 171 211 45 32
6 1000
111 161 511 510 56 93
2 10
9 5
```
  - Output:
```text
622
0
9
```

---

### Problem 10 (Q50): Challenge 10 - [`search10.c`](./search10.c)

**Description:**
Array A holds value i exactly i*floor(sqrt(i)) + ceil(i/2) times in sorted order. For each query L,R print the number of distinct values in A[L..R] (1-based).

**Input Format:**
Q then Q lines of L R.

**Output Format:**
One answer per line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
2
3 3
2 6
```
  - Output:
```text
1
3
```
- **Test Case 2:**
  - Input:
```text
3
3 3
2 6
5 4
```
  - Output:
```text
1
3
1
```

---

