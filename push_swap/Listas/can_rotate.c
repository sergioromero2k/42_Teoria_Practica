/*
Enunciado:
Dada una pila representada por t_stack_node *stack,
	decide si una operación de rotación tiene sentido o no.
Pistas:

¿Qué pasa si stack == NULL?
¿Y si stack->next == NULL?

Solución (idea):
Antes de cualquier manipulación, compruebas:
Si la pila está vacía → no haces nada
Si tiene un solo nodo → no haces nada
Esto evita segfaults y lógica innecesaria.
 */

#include "header_list.h"

int	can_rotate(t_stack_node *stack)
{
	if (!stack)
		return (0);
	if (!stack->next)
		return (0);
	return (1);
}
