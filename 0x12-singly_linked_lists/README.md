# Overview #

Thid repo contains files for the C Singly linked lists project, in partial fulfilment of the requirements of the ALX_SE program.

### Project Timeline ###
- **Released:** Thu 21 Sep 2023 - 6am.
- **1st Deadline:** Fri 22 Sept 2023 - 6am.
- **Duration:** 24 hrs.

### Author ###
- [MIRACLE AMAJAMA](https://github.com/iceking-fct/)

### Technologies ##
- All C files written to be C-89 compatible
- Compiled with gcc 9.4.0
- Code tested on Ubuntu 20.04 LTS.

### Files ###
Files on the project are task based and are as follows:
| SN | File | Description |
|----|------|-------------|
| 1. |[0-print_list.c](https://github.com/) | A function that prints all the elements of a list_t list.</br>-Returns Number of nodes.</br>- If str is NULL, print [0] (nil).</br>-printf allowed.|
| 2. | Pending |





0. Print list
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a function that prints all the elements of a list_t list.

    Prototype: size_t print_list(const list_t *h);
    Return: the number of nodes
    Format: see example
    If str is NULL, print [0] (nil)
    You are allowed to use printf


1. List length
  3 mandatory
    4 Score: 0.0% (Checks completed: 0.0%)
      5
        6 Write a function that returns the number of elements in a linked list_t list.
	  7
	    8     Prototype: size_t list_len(const list_t *h);
	      9
	       10 THIS README.md contains the description of the tasks on singly linked list


2. Add node
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a function that adds a new node at the beginning of a list_t list.

    Prototype: list_t *add_node(list_t **head, const char *str);
        Return: the address of the new element, or NULL if it failed
	    str needs to be duplicated
	        You are allowed to use strdup



3. Add node at the end
mandatory
Score: 0.0% (Checks completed: 0.0%)

Write a function that adds a new node at the end of a list_t list.

    Prototype: list_t *add_node_end(list_t **head, const char *str);
        Return: the address of the new element, or NULL if it failed
	    str needs to be duplicated
	        You are allowed to use strdup



		4. Free list
		mandatory
		Score: 0.0% (Checks completed: 0.0%)

		Write a function that frees a list_t list.

		    Prototype: void free_list(list_t *head);

