#ifndef HEADER_LIST
# define HEADER_LIST

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					value;
	int					index;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						t_stack_node;

int						can_rotate(t_stack_node *stack);
t_stack_node			*get_last_node(t_stack_node *stack);
t_stack_node			*detach_first(t_stack_node **stack);
void					insert_at_end(t_stack_node *stack, t_stack_node *node);
void					rotate_stack(t_stack_node **stack);
int						check_integrity(t_stack_node *stack);

#endif
