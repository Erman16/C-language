#include<stdio.h>
#include <stdlib.h>

struct linked_list{
    int x;
    struct linked_list *next;
};

typedef struct linked_list node;

int main() {
    node *root;
    root = (node *) malloc(sizeof(node));
    node *iter;
    iter = root;
	int i;
	for(i=0;i<3;i++) {
    	iter->next = (node *) malloc(sizeof(node));
    	iter = iter->next;
    	scanf("%d\n",&iter->x);
    	printf("%d\n",iter->x);
	}
    return 0;
}
