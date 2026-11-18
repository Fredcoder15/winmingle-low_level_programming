0x12. C - Singly linked lists

This project covers singly linked lists in C.

Learning Objectives

- Understand what singly linked lists are.
- Create and use linked list nodes.
- Add nodes at the beginning and end of a list.
- Traverse a linked list.
- Calculate the number of nodes in a list.
- Free dynamically allocated memory.
- Get an introduction to Assembly language.

Files

File| Description
"lists.h"| Header file containing the list structure and function prototypes
"0-print_list.c"| Prints all elements of a linked list
"1-list_len.c"| Returns the number of nodes in a linked list
"2-add_node.c"| Adds a new node at the beginning
"3-add_node_end.c"| Adds a new node at the end
"4-free_list.c"| Frees a linked list
"100-first.c"| Executes a function before main
"101-hello_winmingle.asm"| Assembly program that prints Hello, WINMINGLE

Compilation

The C files are compiled using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89

The Assembly file can be assembled and linked using:

nasm -f elf64 101-hello_winmingle.asm -o 101-hello_winmingle.o
gcc -no-pie 101-hello_winmingle.o -o hello

Akpan-fred, Promise Friday

Winmingle
