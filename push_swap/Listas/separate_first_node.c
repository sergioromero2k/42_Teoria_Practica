/*
Enunciado:
Dada una pila con al menos 2 nodos, separa el primer nodo del resto de la lista.

Pistas:
Guarda el primer nodo
El segundo nodo se convierte en nuevo head
Ajusta prev

Solución (idea):
Guardas el nodo inicial
Avanzas el head
Pones prev del nuevo head a NULL
El nodo separado queda “suelto”
*/
#include "header_list.h"

t_stack_node	*detach_first(t_stack_node **stack)
{
	t_stack_node	*first;

	if (!stack || !*stack || !(*stack)->next)
		return (NULL);
	first = *stack;
	*stack = first->next;
	(*stack)->prev = NULL;
	first->next = NULL;
	first->prev = NULL;
	return (first);
}
