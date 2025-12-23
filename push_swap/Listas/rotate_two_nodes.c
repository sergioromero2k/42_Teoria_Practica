/*
Ejercicio 7 — Rotación con 2 nodos
-----------------------------------
Enunciado:
Analiza manualmente una lista de 2 nodos y aplica una rotación.

Pistas:

Dibuja antes
¿Cambia algo respecto a 4 nodos?

Solución (idea):
La rotación intercambia los nodos:
El primero pasa al final
El segundo se vuelve head
Pero los punteros siguen la misma lógica.
*/

#include "header_list.h"

void	rotate_two_nodes(t_stack_node **stack)
{
	t_stack_node	*first;
	t_stack_node	*second;

	if (!can_rotate(*stack))
		return ;
	first = *stack;
	second = first->next;
	first->next = NULL;
	first->prev = second;
	second->prev = NULL;
	second->next = first;
	*stack = second;
}
