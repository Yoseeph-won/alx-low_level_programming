#include "lists.h"
/*
 * list_len: check length of list
 *
 * retutn: length of the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	if(h == NULL)
	{
		return 0;
	}
	while(h != NULL)
	{
		h = h->next;
		count++;
	}
	return count;
}

