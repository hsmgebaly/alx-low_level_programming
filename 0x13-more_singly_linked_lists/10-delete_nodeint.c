#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a alinked list
 * @head: pointer to the 1st elem
 * @index: index
 *
 * Return: 1 sucess or -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);


	return (1);
}
