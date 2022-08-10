#ifndef _LINK1_H_
#define _LINK1_H_

#include <stdlib.h>

/**
 * struct list_s - sing linked list
 * @key: void * type p to the key
 * @value: void * type p to the value
 * @next: struct list_s ptr to the next node
 *
 * Description: sing linked list used in shell project
 */
typedef struct list_s
{
  void *key;
  void *value;
  struct list_s *next;
} list_t;

/* linklist01.c */
list_t *add_node(list_t **head, void *key, void *value);
list_t *reverse_list(list_t **head);
void free_list(list_t **head, int flag);
int delete_node_at_index(list_t **head, unsigned int index);

#endif /* _LINK1_H_ */
