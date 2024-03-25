
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

