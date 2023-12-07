#include "libft.h"

void print_int_list(void* content)
{
	ft_putnbr_fd(*(int *)content, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
}


int main(void)
{
	t_list* node;

	int* num = malloc(sizeof(int));
	int* otro = malloc(sizeof(int));
	*num = 42;
	*otro = 73;

	void* func = &print_int_list;
	node = ft_lstnew((void *)(&num));
	ft_lstadd_back(&node, ft_lstnew((void *)(&otro)));

	ft_lstiter(node, func);

	ft_lstclear(&node, free);
	return 0;
}

// #include <stdio.h>
	// printf("%zu\n", sizeof(*node));
	// printf("node: %p\n", node);
	// t_list* evitar_leaks = node;
	// (void)evitar_leaks;
	// printf("node: %p\n otro: %p\n", node, evitar_leaks);