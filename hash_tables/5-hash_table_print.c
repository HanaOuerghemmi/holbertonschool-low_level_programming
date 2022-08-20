#include "hash_tables.h"
/**
 * hash_table_print - function that retrieves a value associated with a key
 * @ht: table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, i;
	hash_node_t *element;

	putchar('{');
	for (index = 0; index < (ht->size); index++)
	{
		element = ht->array[index];
		while (element)
		{
			if (i == 1)
			{
				putchar(',');
				putchar(' ');
			}
			i = 1;
			printf("'%s' : '%s'", element->key, element->value);
			element = element->next;

		}
	}
	putchar('}');
	putchar('\n');

}
