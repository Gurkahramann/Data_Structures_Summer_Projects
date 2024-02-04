# Data_Structures_Summer_Projects
Two data structures assignments I completed during Summer School.

Linked List Project Short Description:
-The program reads numbers from a file named "Sayilar.txt", where each line contains space-separated two-digit numbers.
-It processes each number, placing the tens digit in a singly linked list directed upwards and the units digit in a list directed downwards.
-After populating both lists, the program prompts the user to input two index positions, one for each list.
-These positions are used to perform an operation that calculates the average of corresponding nodes across both lists and adds them up.
-The output is then displayed, showing the total sum of the averages of the nodes at the top and the bottom of the lists.
-The end result is a clear visual representation of the modified linked lists and the computation of their averages.

Tree Project Short Description:
-The program begins by reading from a file named "Sayilar.txt", which contains numbers ranging from 0 to 256, separated by spaces, organized in lines.
As each line is read, numbers are added to a stack. If the incoming number is even and greater than the number at the top of the current stack, it is placed into a new stack.
-Once a line has been read and the stacks are filled, each stack is then emptied into a separate binary search tree (BST). Duplicate values are not added to the BSTs.
-For each line, multiple BSTs are created corresponding to the number of stacks. The BST with the greatest height is selected. In case of equal heights, the BST with the greater sum of node values is chosen. If the sums are also equal, the first-created BST is selected.
-The selected BST is then traversed in postorder, and the numerical values are converted to their ASCII character equivalents and printed to the screen.
-The program pauses for 10 milliseconds after each line's output (using a sleep function) before proceeding to the next line. This process repeats until all lines are processed, and the program terminates after the last line is read.
