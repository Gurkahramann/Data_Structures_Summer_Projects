# Data Structures Assignments - Summer School

## Linked List Project

### Overview
This project focuses on manipulating singly linked lists to store and process two-digit numbers read from a file.

### Details
- **Input**: A file named `Sayilar.txt` containing lines of two-digit numbers separated by spaces.
- **Processing**:
  - Tens digits are placed in a singly linked list pointing upwards.
  - Units digits are placed in a singly linked list pointing downwards.
- **User Interaction**:
  - Users are prompted to enter index numbers which correspond to the lists. As a result, the selected lists swap places with each other.
  - The averages are then calculated in sequence for all elements, starting with the first nodes and then the second nodes of each list, and so on.
  - The program calculates the average of the nodes at these indices.
- **Output**:
  - Displays the sum of averages from the top and bottom lists.
  - Provides a visual representation of the modified lists.

## Tree Project

### Overview
This assignment involves reading numbers to form stacks, which then populate binary search trees (BSTs) with unique values.

### Details
- **Input**: A file named `Sayilar.txt` with numbers ranging from 0 to 256 in lines, separated by spaces.
- **Stacks**:
  - Even numbers greater than the current stack's top are placed in a new stack.
  - Others continue in the current stack.
- **BSTs**:
  - Each stack is converted into a BST, avoiding duplicates.
  - Multiple BSTs are created, one for each stack per line.
  - The BST with the greatest height or node value sum is selected.
- **Traversal and Output**:
  - The chosen BST is postorder traversed.
  - Node values are printed as their ASCII characters.
  - The program includes a 10-millisecond pause between lines.
- **Completion**:
  - The program ends after processing all lines.
