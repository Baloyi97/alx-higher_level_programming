#include "lists.h"

/**
 * check_cycle-Checks if a linked list contains a cycle
 * @list: Linked list to be checked
 * Return: If the list has a cycle return 1, and 0 if not
 */

int check_cycle(listint_t *list)
{
	if (!list)
	{
		return (0);
	}
	listint_t *slow = list;
	listint_t *fast = list;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (1);
	}

	return (0);
}
