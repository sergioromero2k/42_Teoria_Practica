/*
Ejercicio 9 — Generalizar ra y rb
----------------------------------
Enunciado:
¿Cómo harías una sola función para rotar cualquier pila?

Pistas:
Piensa en parámetros
t_stack_node **

Solución (idea):
La lógica es la misma:
Pasas la pila como parámetro
Cambias solo el head
Luego decides qué imprimir fuera. */

#include "header_list.h"

void	rotate(t_stack_node **stack)
{
	t_stack_node	*first;
	t_stack_node	*last;

	if (can_rotate(*stack))
		return ;
	first = *stack;
	last = get_last_node(*stack);
	*stack = first->next;
	(*stack)->prev = NULL;
	last->next = first;
	first->next = NULL;
	first->prev = last;
}
