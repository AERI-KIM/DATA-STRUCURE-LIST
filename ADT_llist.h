
#include <stdio.h>

typedef struct node1
{
	void* data_ptr;
	struct node1* next;

}NODE;

typedef struct 
{
	int count;
	NODE* front;
	NODE* rear;
	NODE* pos;
	int (*cmp_func)(void* x, void* y);
	void (*print_func)(void* x);

}LLIST;

LLIST* create_list(int (*cmp_func)(void* x, void* y), void (*print_func)(void* x));
bool add_node_at(LLIST* list, unsigned int index, void* data);
bool del_node_at(LLIST* list, unsigned int index);
void* get_node_at(LLIST* list, unsigned int index);
int find_data(LLIST* list, void* search_data);