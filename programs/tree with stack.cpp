#include<stdio.h>
#include<stdlib.h>

typedef struct tree_{
	int* data;
	int size;
	int lastItem;
}tree;

typedef struct stack_{
	tree* t;
	int size;
	int lastItem;
}stack;

stack* createStack(int size){
	stack* newStack = (stack*) malloc(sizeof(stack));
	if(newStack == NULL){
		printf("Memory can not allocated!!!");
		exit(EXIT_FAILURE);
	}
	newStack->t = (tree*) malloc(sizeof(tree)*size);
	newStack->size = size;
	newStack->lastItem = -1;
	return newStack;
}

int isFull(stack* head){
	return head->lastItem == head->size-1 ? 0 : 1;
}

void push(stack* head,int data){	
	if(head!=NULL){
		if(head->lastItem <= head->size-1){
			++head->lastItem;
			head->data[head->lastItem] = data;
		}
		else{
			printf("stack owerflow!!");
		}
	}
	else{
		printf("can not pushed because stack does not exist!!!");
	}
}

void pop(stack* head, int* data){
	*data = head->data[head->lastItem];
	head->lastItem--;
}

void peek(stack* head, int* data){
	*data = head->data[head->lastItem];
}

int main(){
	stack* list1 = createStack(10);
	tree* t;
	int i;	
	for(i=1;i<11;i++){
		if(isFull(list1) != 0){
			push(list1,i*2);
		}
		else{
			printf("Stack Owerflow!!!");
		}
	}	
	if(list1 != NULL){
		pop(list1,&t->data);
		printf("poped data: %d\n",t->data);
	}
	if(list1 != NULL){
		peek(list1,&data);
		printf("peeked data: %d\n",t->data);
	}	
	for(i=0;i <= list1->lastItem;i++){
		printf("data: %d\n",list1->t->data);
	}	
	return 0;
}

