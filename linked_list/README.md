# Module 4: Linked List Operations

This folder contains the 10 solved C programs for **Linked List** (Questions Q31 – Q40).

## Problems Index

| Problem # | Global Q# | File | Challenge | Description Summary |
| :--- | :--- | :--- | :--- | :--- |
| Problem 1 | Q31 | [`link1.c`](./link1.c) | Challenge 37 | Create a singly linked list from the given elements, delete every node holding the given key, and display the list as 'Linked List:->a->b |
| Problem 2 | Q32 | [`link2.c`](./link2.c) | Challenge 32 | Insert each given element at the beginning of a doubly linked list; print the list forward (top line) and backward (second line), space separated |
| Problem 3 | Q33 | [`link3.c`](./link3.c) | Challenge 33 | Insert the given elements one by one into a circular linked list kept sorted; print the resulting circle space separated |
| Problem 4 | Q34 | [`link4.c`](./link4.c) | Challenge 34 | Insert node X before node P in the singly linked list; if P is absent print 'Node not found!' then the list, else print the final list in 'Linked List:-> |
| Problem 5 | Q35 | [`link5.c`](./link5.c) | Challenge 25 | Build the list 1 |
| Problem 6 | Q36 | [`link6.c`](./link6.c) | Challenge 36 | Build the list by inserting each input element at the head; display it ('Linked list:--> |
| Problem 7 | Q37 | [`link7.c`](./link7.c) | Challenge 37 | Delete all nodes appearing before the first node with value P; if P is absent print 'Invalid Node!' then the unchanged list; finally display 'Linked List:-> |
| Problem 8 | Q38 | [`link8.c`](./link8.c) | Challenge 38 | Split the list into two halves (first half gets the extra node when odd), reverse the second half, then merge alternately (first, reversed-second,  |
| Problem 9 | Q39 | [`link9.c`](./link9.c) | Challenge 39 | Build a circular linked list 1 |
| Problem 10 | Q40 | [`link10.c`](./link10.c) | Challenge 40 | Delete the first P nodes of the linked list and display the remainder as 'Linked List:-> |

---

## Detailed Problem Descriptions

### Problem 1 (Q31): Challenge 37 - [`link1.c`](./link1.c)

**Description:**
Create a singly linked list from the given elements, delete every node holding the given key, and display the list as 'Linked List:->a->b...'.

**Input Format:**
First line: number of elements N. Second line: N elements. Third line: the key to delete.

**Output Format:**
Single line: the linked list after deletions in 'Linked List:->...' form.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
6
7 9 8 8 4 2
8
```
  - Output:
```text
Linked List:->7->9->4->2
```
- **Test Case 2:**
  - Input:
```text
10
5 3 7 2 7 9 8 8 4 2
2
```
  - Output:
```text
Linked List:->5->3->7->7->9->8->8->4
```

---

### Problem 2 (Q32): Challenge 32 - [`link2.c`](./link2.c)

**Description:**
Insert each given element at the beginning of a doubly linked list; print the list forward (top line) and backward (second line), space separated.

**Input Format:**
First line: N. Second line: N elements.

**Output Format:**
First line: list in forward direction. Second line: list in backward direction.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
16
1 3 4 7 9 11 13 14 18 19 23 24 56 32 98 17
```
  - Output:
```text
17 98 32 56 24 23 19 18 14 13 11 9 7 4 3 1
1 3 4 7 9 11 13 14 18 19 23 24 56 32 98 17
```
- **Test Case 2:**
  - Input:
```text
15
0 1 2 0 1 1 1 0 2 0 2 2 0 1 2
```
  - Output:
```text
2 1 0 2 2 0 2 0 1 1 1 0 2 1 0
0 1 2 0 1 1 1 0 2 0 2 2 0 1 2
```

---

### Problem 3 (Q33): Challenge 33 - [`link3.c`](./link3.c)

**Description:**
Insert the given elements one by one into a circular linked list kept sorted; print the resulting circle space separated.

**Input Format:**
First line: number of elements. Second line: the elements.

**Output Format:**
Single line with the sorted circular list elements.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
6
10 20 30 45 34 56
```
  - Output:
```text
10 20 30 34 45 56
```
- **Test Case 2:**
  - Input:
```text
6
1 2 11 12 56 90
```
  - Output:
```text
1 2 11 12 56 90
```

---

### Problem 4 (Q34): Challenge 34 - [`link4.c`](./link4.c)

**Description:**
Insert node X before node P in the singly linked list; if P is absent print 'Node not found!' then the list, else print the final list in 'Linked List:->...' form.

**Input Format:**
N; the N list elements; node P; node X.

**Output Format:**
Final linked list, or 'Node not found!' followed by the unchanged list.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4
115 210 116 110
116
17
```
  - Output:
```text
Linked List:->115->210->17->116->110
```
- **Test Case 2:**
  - Input:
```text
4
15 20 16 10
25
17
```
  - Output:
```text
Node not found!
Linked List:->15->20->16->10
```

---

### Problem 5 (Q35): Challenge 25 - [`link5.c`](./link5.c)

**Description:**
Build the list 1..N, remove alternate nodes starting from the second node, and print the survivors space separated.

**Input Format:**
First line: the number of elements N.

**Output Format:**
Single line with the elements after deletion of alternate nodes.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
10
```
  - Output:
```text
1 3 5 7 9
```
- **Test Case 2:**
  - Input:
```text
20
```
  - Output:
```text
1 3 5 7 9 11 13 15 17 19
```

---

### Problem 6 (Q36): Challenge 36 - [`link6.c`](./link6.c)

**Description:**
Build the list by inserting each input element at the head; display it ('Linked list:-->...') and then the data of the node at the given 1-based index ('Node at
index=I:V').

**Input Format:**
N; the N elements; the index I.

**Output Format:**
The list line and the 'Node at index=I:V' line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4
1 2 3 4
2
```
  - Output:
```text
Linked list:-->4-->3-->2-->1
Node at index=2:3
```
- **Test Case 2:**
  - Input:
```text
4
11 21 31 41
3
```
  - Output:
```text
Linked list:-->41-->31-->21-->11
Node at index=3:21
```

---

### Problem 7 (Q37): Challenge 37 - [`link7.c`](./link7.c)

**Description:**
Delete all nodes appearing before the first node with value P; if P is absent print 'Invalid Node!' then the unchanged list; finally display 'Linked List:->...'.

**Input Format:**
N; the N elements; the value P.

**Output Format:**
Single line with the final linked list (plus 'Invalid Node!' when P missing).

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4
9 77 12 6
12
```
  - Output:
```text
Linked List:->12->6
```
- **Test Case 2:**
  - Input:
```text
4
91 77 12 61
2
```
  - Output:
```text
Invalid Node!
Linked List:->91->77->12->61
```

---

### Problem 8 (Q38): Challenge 38 - [`link8.c`](./link8.c)

**Description:**
Split the list into two halves (first half gets the extra node when odd), reverse the second half, then merge alternately (first, reversed-second, ...). Print 'Link
list data:' original and 'Link list data after fold:' the folded order.

**Input Format:**
N; the N elements.

**Output Format:**
Original order line and folded order line.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
16
1 3 4 7 9 11 13 14 18 19 23 24 56 32 98 17
```
  - Output:
```text
Link list data:1 3 4 7 9 11 13 14 18 19 23 24 56 32 98 17
Link list data after fold:1 17 3 98 4 32 7 56 9 24 11 23 13 19 14 18
```
- **Test Case 2:**
  - Input:
```text
15
0 1 2 0 1 1 1 0 2 0 2 2 0 1 2
```
  - Output:
```text
Link list data:0 1 2 0 1 1 1 0 2 0 2 2 0 1 2
Link list data after fold:0 2 1 1 2 0 0 2 1 2 1 0 1 2 0
```

---

### Problem 9 (Q39): Challenge 39 - [`link9.c`](./link9.c)

**Description:**
Build a circular linked list 1..N; display it as '[h]=>1=>2=>...=>[h]', then the circular sub-list of odd values and of even values in the same notation under
'Odd:' and 'Even:'.

**Input Format:**
First line: number of elements N.

**Output Format:**
Complete list, odd list and even list lines as per sample.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
6
```
  - Output:
```text
Complete linked_list:
[h]=>1=>2=>3=>4=>5=>6=>[h]
Odd:
[h]=>1=>3=>5=>[h]
Even:
[h]=>2=>4=>6=>[h]
```
- **Test Case 2:**
  - Input:
```text
15
```
  - Output:
```text
Complete linked_list:
[h]=>1=>2=>3=>4=>5=>6=>7=>8=>9=>10=>11=>12=>13=>14=>15=>[h]
Odd:
[h]=>1=>3=>5=>7=>9=>11=>13=>15=>[h]
Even:
[h]=>2=>4=>6=>8=>10=>12=>14=>[h]
```

---

### Problem 10 (Q40): Challenge 40 - [`link10.c`](./link10.c)

**Description:**
Delete the first P nodes of the linked list and display the remainder as 'Linked List:->...'.

**Input Format:**
N; the N elements; number of nodes P to delete.

**Output Format:**
Single line with the final linked list.

**Test Cases:**
- **Test Case 1:**
  - Input:
```text
4
9 77 12 6
2
```
  - Output:
```text
Linked List:->12->6
```
- **Test Case 2:**
  - Input:
```text
6
45 21 91 77 12 61
4
```
  - Output:
```text
Linked List:->12->61
```

---

