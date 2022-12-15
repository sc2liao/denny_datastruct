#include <stdlib.h>
#include <stdio.h>
#define INIT_LIST(X) node_t* X = {.val = 0, .next = NULL}
typedef struct node {
	int val;
	struct node *next;
} node_t;
static inline void add_new_node(int value, node_t **head){
	node_t *new = (node_t*)malloc(sizeof(node_t));
	new->val = value;
	new->next = NULL;
	while(*head != NULL){
		head = &((*head)->next);
	}
	*head = new;
}
static inline void print_list(node_t *head){
	while(head != NULL) {
		printf("the node value is %d\n",head->val);
		head = head->next;
	}
}

int main(){
	node_t *head = malloc(sizeof(node_t));
	head->val = 0;
	/*head->next = malloc(sizeof(node_t));
	head->next->val=1;
	head->next->next = NULL;*/
	for(int i = 0;i < 10; i++) {
		add_new_node(i,&head);
	}
	print_list(head);
}
