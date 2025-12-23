/*
***********
Ejercicio 5 — Simular una rotación parcial
-------------------------------------------
Enunciado:
Realiza una rotación sin imprimir nada ni usar el nombre ra.

Pistas:
Usa ejercicios 3 y 4
No olvides casos límite

Solucion:
Separas el primer nodo
Lo insertas al final
El nuevo head es el segundo nodo original
*/

#include "header_list.h"

void rotate_stack(t_stack_node **stack){
  t_stack_node *first;

  if(!can_rotate(*stack))
    return ;
    
  first=detach_first(*stack);
  insert_at_end(*stack,first);

    
}
