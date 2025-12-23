/*
Enunciado:
Dado un nodo suelto y una lista no vacía, insértalo al final.

Pistas:
Busca el último nodo
Conecta ambos nodos

Solución (idea):
El último nodo apunta al nuevo
El nuevo apunta hacia atrás
El nuevo termina con next = NULL
*/

#include "header_list.h"

void	insert_at_end(t_stack_node *stack, t_stack_node *node)
{
	t_stack_node	*last;

	if (!stack || !node)
		return ;
	last = get_last_node(stack);
	last->next = node;
	node->prev = last;
	node->next = NULL;
}
