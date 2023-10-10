#include <stdio.h>
#include <stdlib.h>
#include "../includes/push_swap.h"

// Function to create a new node with given value
t_swap	*new_node(int value)
{
    t_swap	*new;

    new = (t_swap *)malloc(sizeof(t_swap));
    if (!new)
        return (NULL);
    new->num = value;
    new->next = NULL;
    new->prev = NULL;
    return (new);
}

// Function to add a new node at the beginning of the list
void	push(t_swap **head, int value)
{
    t_swap	*new;

    new = new_node(value);
    if (!new)
        return ;
    new->next = *head;
    if (*head)
        (*head)->prev = new;
    *head = new;
}

// Function to print the list
void	print_list(t_swap *head)
{
    while (head)
    {
        ft_printf("%d ", head->num);
        head = head->next;
    }
    ft_printf("\n");
}
void	test_ft_pa(void)
{
    t_head	t_stark;
    t_swap	*stark_a;
    t_swap	*stark_b;

    // Test case 1: empty stack
    stark_a = NULL;
    stark_b = NULL;
	t_stark.head_a = stark_a;
    t_stark.head_b = stark_b;
    ft_printf("--- PA ----");
	ft_printf(" Test case 1: ");
	ft_pa(&t_stark);
    if (t_stark.head_a == NULL && t_stark.head_b == NULL)
        printf("\033[1;32mOK\033[0m\n");
    else
        printf("\033[1;31mFAIL\033[0m\n");

    // Test case 2: stack with one element
    stark_b = new_node(42);
    stark_a = NULL;
    t_stark.head_a = stark_a;
    t_stark.head_b = stark_b;
    ft_printf("Test case 2: ");
	ft_pa(&t_stark);
    if (t_stark.head_b == NULL && t_stark.head_a->num == 42 
        && t_stark.head_a->next == NULL 
        && t_stark.head_a->prev == NULL)
        printf("\033[1;32mOK\033[0m\n");
    else
        printf("\033[1;31mFAIL\033[0m\n");
    // Test case 3: stack with two elements
    stark_a = NULL;
    stark_b = NULL;
    push(&stark_b, 42);
    push(&stark_b, 24);
    t_stark.head_a = stark_a;
    t_stark.head_b = stark_b;
		
    printf("\033[1;35mTest case 3:\033[0m\n");
    ft_pa(&t_stark);
    //printf("debugg : %p", t_stark);
    if (t_stark.head_a->num == 24 && t_stark.head_a->next == NULL 
		&& t_stark.head_a->prev == NULL && t_stark.head_b->num == 42 
		&& t_stark.head_b->next == NULL && t_stark.head_b->prev == NULL)
        printf("\033[1;32mOK\033[0m\n");
    else
        printf("\033[1;31mFAIL\033[0m\n");

    // Test case 4: stack with three elements
    stark_b = NULL;
    push(&stark_b, 42);
    push(&stark_b, 24);
    push(&stark_b, 12);
    stark_a = NULL;
    t_stark.head_a = stark_a;
    t_stark.head_b = stark_b;
    printf("\033[1;35mTest case 4:\033[0m\n");
    ft_pa(&t_stark);
    if (t_stark.head_b->num == 24 && t_stark.head_b->next->num == 42 
		&& t_stark.head_b->next->next == NULL 
		&& t_stark.head_b->prev == NULL 
		&& t_stark.head_b->next->prev == t_stark.head_b
		&& t_stark.head_a->num == 12 && t_stark.head_a->next == NULL 
		&& t_stark.head_a->prev == NULL)
        printf("\033[1;32mOK\033[0m\n");
    else
        printf("\033[1;31mFAIL\033[0m\n");
}

// Test function for ft_pb
void	test_ft_pb(void)
{
    t_head	t_stark;
    t_swap	*stark_a;
    t_swap	*stark_b;

    // Test case 1: empty stack
    stark_a = NULL;
    stark_b = NULL;
	t_stark.head_a = stark_a;
    t_stark.head_b = stark_b;
	ft_printf("Test case 1: ");
	ft_pb(&t_stark);
    if (t_stark.head_a == NULL && t_stark.head_b == NULL)
        printf("\033[1;32mOK\033[0m\n");
    else
        printf("\033[1;31mFAIL\033[0m\n");

    // Test case 2: stack with one element
    stark_a = new_node(42);
    stark_b = NULL;
    t_stark.head_a = stark_a;
    t_stark.head_b = stark_b;
    ft_printf("Test case 2: ");
	ft_pb(&t_stark);
    if (t_stark.head_a == NULL && t_stark.head_b->num == 42 && t_stark.head_b->next == NULL && t_stark.head_b->prev == NULL)
        printf("\033[1;32mOK\033[0m\n");
    else
        printf("\033[1;31mFAIL\033[0m\n");

    // Test case 3: stack with two elements
    stark_a = NULL;
    push(&stark_a, 42);
    push(&stark_a, 24);
    t_stark.head_a = stark_a;
    stark_b = NULL;
    t_stark.head_b = stark_b;

    ft_pb(&t_stark);
	ft_printf("Test case 3: \n	");
    if (t_stark.head_a->num == 42 && t_stark.head_a->next == NULL 
		&& t_stark.head_a->prev == NULL && t_stark.head_b->num == 24 
		&& t_stark.head_b->next == NULL && t_stark.head_b->prev == NULL)
        printf("\033[1;32mOK\033[0m\n");
    else
        printf("\033[1;31mFAIL\033[0m\n");

    // Test case 4: stack with three elements
    stark_a = NULL;
    push(&stark_a, 42);
    push(&stark_a, 24);
    push(&stark_a, 12);
    stark_b = NULL;
    t_stark.head_a = stark_a;
    t_stark.head_b = stark_b;
    ft_pb(&t_stark);
    ft_printf("Test case 4: ");
    if (t_stark.head_a->num == 24 && t_stark.head_a->next->num == 42 
		&& t_stark.head_a->next->next == NULL 
		&& t_stark.head_a->prev == NULL 
		&& t_stark.head_a->next->prev == t_stark.head_a 
		&& t_stark.head_b->num == 12 && t_stark.head_b->next == NULL 
		&& t_stark.head_b->prev == NULL)
        printf("\033[1;32mOK\033[0m\n");
    else
        printf("\033[1;31mFAIL\033[0m\n");
}

int	main(void)
{
    test_ft_pb();
    test_ft_pa();
    return (0);
}