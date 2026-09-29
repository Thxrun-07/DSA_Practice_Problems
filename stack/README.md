# Module 2: Stack Data Structure

This folder contains the 10 solved C programs for **Stack** (Questions Q11 – Q20).

## Problems Index

| Problem # | Global Q# | File | Challenge | Description Summary |
| :--- | :--- | :--- | :--- | :--- |
| Problem 1 | Q11 | [`Stack1.c`](./Stack1.c) | Challenge 41 | A and B each hold a copy of the same list of n numbers; A picks from the front of his copy, B from the end of hers |
| Problem 2 | Q12 | [`Stack2.c`](./Stack2.c) | Challenge 42 | Push n elements into stack1 and m elements into stack2 (linked list, push at head) |
| Problem 3 | Q13 | [`Stack3.c`](./Stack3.c) | Challenge 43 | Given array A and queries i: find the minimum index j>i with A[i] < A[j] and digit-sum(A[i]) > digit-sum(A[j]); print -1 if none |
| Problem 4 | Q14 | [`Stack4.c`](./Stack4.c) | Challenge | Implement two stacks sharing a single 5-element array (space efficient) |
| Problem 5 | Q15 | [`Stack5.c`](./Stack5.c) | Challenge | Read one line of curly and square brackets; using a stack (push/pop/empty), print 'Balanced' if the expression is balanced else 'Not Balanced' |
| Problem 6 | Q16 | [`Stack6.c`](./Stack6.c) | Challenge 44 | For n daily prices print the span of each day (max consecutive prior days with price <= current), space-separated, using a stack |
| Problem 7 | Q17 | [`Stack7.c`](./Stack7.c) | Challenge | F(x) = smallest z>x with A[x]<A[z]; G(x) = smallest z>x with A[x]>A[z] |
| Problem 8 | Q18 | [`Stack8.c`](./Stack8.c) | Challenge 48 | From any building, repeatedly jump to the next higher building on the right until none; journey stamina = XOR of all heights visited |
| Problem 9 | Q19 | [`Stack9.c`](./Stack9.c) | Challenge 49 | Implement stack push (enqueue then rotate size-1 elements) and pop (dequeue) using one queue |
| Problem 10 | Q20 | [`Stack10.c`](./Stack10.c) | Challenge 50 | Convert a postfix expression (single-character operands/operators) to prefix form using a stack: on operator pop two operand strings, push operator+first+second |

---

## Detailed Problem Descriptions

### Problem 1 (Q11): Challenge 41 - [`Stack1.c`](./Stack1.c)

**Description:**
A and B each hold a copy of the same list of n numbers; A picks from the front of his copy, B from the end of hers. Each step: if A's pick > B's print 1 and B
removes her pick; if A's < B's print 2 and A removes his pick; if equal print 0 and both remove. Game ends when either copy is empty. Print the output
sequence space-separated.

**Input Format:**
First line consists of a number n, size of the list provided. Next line consists of n numbers separated by space.

**Output Format:**
Output the required output list.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
3
1 2 3
```
  - Output:
```text
2 2 0
```
- **Test Case 2:**
  - Input:
```text
5
5 7 1 2 3
```
  - Output:
```text
1 1 1 2 0 2 2 2
```

---

### Problem 2 (Q12): Challenge 42 - [`Stack2.c`](./Stack2.c)

**Description:**
Push n elements into stack1 and m elements into stack2 (linked list, push at head). Merge by linking stack2's first node after stack1's last node. Print the
merged stack top-to-bottom space-separated.

**Input Format:**
First line indicates n & m, where n is the number of elements to be pushed into stack1 and m into stack2. The next lines indicate the stack elements.

**Output Format:**
Single line indicating the merged stack elements from top to bottom.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5 8
9 8 7 6 5
5 6 7 8 3 11 2 3
```
  - Output:
```text
5 6 7 8 9 3 2 11 3 8 7 6 5
```
- **Test Case 2:**
  - Input:
```text
10 4
91 18 17 16 15 15 16 17 18 13
11 12 13 14
```
  - Output:
```text
13 18 17 16 15 15 16 17 18 91 14 13 12 11
```

---

### Problem 3 (Q13): Challenge 43 - [`Stack3.c`](./Stack3.c)

**Description:**
Given array A and queries i: find the minimum index j>i with A[i] < A[j] and digit-sum(A[i]) > digit-sum(A[j]); print -1 if none. Answers space-separated
(1-based).

**Input Format:**
The first line contains two numbers N and Q. The next line contains N numbers. Next Q lines contain Q queries.

**Output Format:**
Print the answer as described in the problem (space separated, -1 if no answer).

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5 5
62 70 28 62 92
1
5
3
4
2
```
  - Output:
```text
2 -1 4 -1 -1
```
- **Test Case 2:**
  - Input:
```text
6 6
12 71 21 16 91
11
15
31
14
21
```
  - Output:
```text
-1 -1 -1 -1 -1 -1
```

---

### Problem 4 (Q14): Challenge - [`Stack4.c`](./Stack4.c)

**Description:**
Implement two stacks sharing a single 5-element array (space efficient). Five integers are pushed alternately (1st to stack1, 2nd to stack2, ...). Print 'Popped
element from stack1 is:X' and 'Popped element from stack2 is:Y' after popping one element from each.

**Input Format:**
Five integers to be pushed into the two stacks (first element to stack1, second to stack2, alternatively).

**Output Format:**
Popped element from stack1 and popped element from stack2, each on its own line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
1
2
3
4
5
```
  - Output:
```text
Popped element from stack1 is:5
Popped element from stack2 is:4
```
- **Test Case 2:**
  - Input:
```text
5
4
5
3
4
```
  - Output:
```text
Popped element from stack1 is:4
Popped element from stack2 is:3
```

---

### Problem 5 (Q15): Challenge - [`Stack5.c`](./Stack5.c)

**Description:**
Read one line of curly and square brackets; using a stack (push/pop/empty), print 'Balanced' if the expression is balanced else 'Not Balanced'.

**Input Format:**
Single line represents only braces (both curly and square).

**Output Format:**
If the given input is balanced then print as Balanced (or) Not Balanced.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
{()}[]
```
  - Output:
```text
Balanced
```
- **Test Case 2:**
  - Input:
```text
{({)}])}
```
  - Output:
```text
Not Balanced
```

---

### Problem 6 (Q16): Challenge 44 - [`Stack6.c`](./Stack6.c)

**Description:**
For n daily prices print the span of each day (max consecutive prior days with price <= current), space-separated, using a stack.

**Input Format:**
First line indicates the number of days. Second line indicates the price quoted for the above mentioned days.

**Output Format:**
Single line represents the span values for corresponding days.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
6
9 8 7 6 5 4
```
  - Output:
```text
1 1 1 1 1 1
```
- **Test Case 2:**
  - Input:
```text
6
10 41 15 90 10 70
```
  - Output:
```text
1 2 1 4 1 2
```

---

### Problem 7 (Q17): Challenge - [`Stack7.c`](./Stack7.c)

**Description:**
F(x) = smallest z>x with A[x]<A[z]; G(x) = smallest z>x with A[x]>A[z]. For each i print A[G(F(i))] or -1 if either does not exist.

**Input Format:**
The first line contains a single integer N denoting the size of array A. The next line contains N integers, the i-th integer denotes A[i].

**Output Format:**
Print N space-separated integers on a single line, where the i-th integer denotes A[G(F(i))] or -1 if G(F(i)) does not exist.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
8
3 7 1 7 8 4 5 2
```
  - Output:
```text
1 4 4 4 -1 2 -1 -1
```
- **Test Case 2:**
  - Input:
```text
8
31 71 11 17 81 14 51 21
```
  - Output:
```text
11 14 14 14 -1 21 -1 -1
```

---

### Problem 8 (Q18): Challenge 48 - [`Stack8.c`](./Stack8.c)

**Description:**
From any building, repeatedly jump to the next higher building on the right until none; journey stamina = XOR of all heights visited. Print the maximum
stamina over all starting buildings.

**Input Format:**
First line: N, number of buildings. Second line: N integers defining heights of buildings.

**Output Format:**
Single integer: the maximum stamina required for any journey.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5
1 2 3 8 6
```
  - Output:
```text
11
```
- **Test Case 2:**
  - Input:
```text
8
1 2 3 8 6 4 7 9
```
  - Output:
```text
14
```

---

### Problem 9 (Q19): Challenge 49 - [`Stack9.c`](./Stack9.c)

**Description:**
Implement stack push (enqueue then rotate size-1 elements) and pop (dequeue) using one queue. Push n elements, print 'top of element X', perform m
pops, print 'top of element Y'.

**Input Format:**
First line indicates n & m, where n is the number of elements to be pushed into the stack and m is the number of pop operations to be performed. Next line
indicates the n stack elements.

**Output Format:**
First line indicates the top of the element of the stack; second line indicates the top of the element after the pop operations.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
5 2
1 2 3 4 5
```
  - Output:
```text
top of element 5
top of element 3
```
- **Test Case 2:**
  - Input:
```text
15 4
9 8 7 6 5 5 6 7 8 3 11 2 3 4 5
```
  - Output:
```text
top of element 5
top of element 11
```

---

### Problem 10 (Q20): Challenge 50 - [`Stack10.c`](./Stack10.c)

**Description:**
Convert a postfix expression (single-character operands/operators) to prefix form using a stack: on operator pop two operand strings, push
operator+first+second.

**Input Format:**
Single line represents the postfix expression (single-character operands and operators).

**Output Format:**
Single line represents the prefix expression.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
ABC/-AK/L-*
```
  - Output:
```text
*-A/BC-/AKL
```
- **Test Case 2:**
  - Input:
```text
AB+CD-*
```
  - Output:
```text
*+AB-CD
```

---

