/*Enunciado:
Dada la cabeza de una lista doble, obtén un puntero al último nodo.
Pistas:
Empiezas desde el head
Avanzas mientras haya next

Solución (idea):
Recorres la lista hasta que node->next == NULL.
Ese nodo es el último.*/

#include "header_list.h"

t_stack_node	*get_last_node(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	if (!stack->next)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
