#include "lists.h"
/**
  *add_node - adds a new node at the beginning of a list_t.
  *@head: pointer to first element of the list.
  *@str: string to be duplicated.
  *
  *Return: address of the new element or NULL if it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	/* temp now points to first element*/
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = strlen(str);

	*head = temp;

	return (*head);

}
