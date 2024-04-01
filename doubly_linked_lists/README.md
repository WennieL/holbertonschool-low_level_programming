# C - Doubly linked lists

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, printf and exit
- In the following examples, the main.c files are shown as examples. 
  You can use them to test your functions, but you don't have to push them to your repo 
  (if you do we won't take them into account). We will use our own main.c files at compilation. 
  Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called lists.h
- Don't forget to push your header file
- All your header files should be include guarded

## More Info
###### Please use this data structure for this project:

```bash
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Tasks

### [0. Print list](https://github.com/WennieL/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/0-print_dlistint.c)
###### Write a function that prints all the elements of a dlistint_t list.

- Prototype: size_t print_dlistint(const dlistint_t *h);
- Return: the number of nodes

### [1. List length](https://github.com/WennieL/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/1-dlistint_len.c)
###### Write a function that returns the number of elements in a linked dlistint_t list.

- Prototype: size_t dlistint_len(const dlistint_t *h);

### [2. Add node](https://github.com/WennieL/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/2-add_dnodeint.c)
##### Write a function that adds a new node at the beginning of a dlistint_t list.

- Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed

### [3. Add node at the end]()
##### Write a function that adds a new node at the end of a dlistint_t list.

- Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed
