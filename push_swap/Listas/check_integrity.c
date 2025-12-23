/*
Ejercicio 6 — Comprobar consistencia de punteros
------------------------------------------------
Enunciado:
Después de mover nodos, verifica que:
El head tenga prev == NULL
El último tenga next == NULL

Pistas:
Piensa en errores silenciosos

Solución (idea):
Siempre que muevas nodos:
El primer nodo no puede tener prev
El último no puede tener next
*/

#include "header_list.h"

int	check_integrity(t_stack_node *stack)
{
	t_stack_node *last;
	if (!stack)
		return (1);
	if (stack->prev != NULL)
		return (0);
	last = get_last_node(stack);
	if (last->next != NULL)
		return (1);
	return (1);
}
