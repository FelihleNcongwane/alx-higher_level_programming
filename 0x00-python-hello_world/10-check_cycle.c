#include "lists.h"

/**
 * check_cycle - checking if a particular linked list is containing a cycle
 * @param list: The linked list to be checked
 *
 * Return: 1(Success), 0(Otherwise)
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
