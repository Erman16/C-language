#include<stdio.h>
#include<stdlib.h>

typedef struct stack_{
	int* data;
	int size;
	int lastItem;
}stack;

stack* createStack(int size){
	stack* newStack = (stack*) malloc(sizeof(stack));
	if(newStack == NULL){
		printf("Memory can not allocated!!!");
		exit(EXIT_FAILURE);
	}
	newStack->data = (int*) malloc(sizeof(int)*size);
	newStack->size = size;
	newStack->lastItem = -1;
	return newStack;
}

int isFull(stack* head){
	return head->lastItem == head->size-1 ? 0 : 1;
}

void push(stack* head,int data){	
	if(head!=NULL){
		if(head->lastItem <= head->size-3){		
			++head->lastItem;
			head->data[head->lastItem] = data;		
		}
		else{
			stack* newItem = createStack(head->size*2);
			newItem->lastItem = head->lastItem;
			int i;
			for(i=0;i<=head->lastItem;i++){
				newItem->data[i] = head->data[i];
			}
			free(head);
			head = newItem;
			++head->lastItem;
			head->data[head->lastItem] = data;	
		}
	}
	else{
		printf("can not pushed because stack does not exist!!!");
	}
}

void pop(stack* head, int* data){
	*data = head->data[head->lastItem];
	head->lastItem--;
	if(head->lastItem <= head->size/3){
		stack* newItem = createStack(head->size/2);
		newItem->lastItem = head->lastItem;
		int i;
		for(i=0;i<=head->lastItem;i++){
			newItem->data[i] = head->data[i];
		}
		free(head);
		head = newItem;
	}
}

void peek(stack* head, int* data){
	*data = head->data[head->lastItem];
}

int main(){
	stack* list1 = createStack(10);
	int data,i;	
	for(i=1;i<11;i++){
		if(isFull(list1) != 0){
			push(list1,i*2);
		}
		else{
			printf("Stack Owerflow!!!");
		}
	}	
	if(list1 != NULL){
		pop(list1,&data);
		printf("poped data: %d\n",data);
	}
	if(list1 != NULL){
		peek(list1,&data);
		printf("peeked data: %d\n",data);
	}	
	for(i=0;i <= list1->lastItem;i++){
		printf("data: %d\n",list1->data[i]);
	}	
	return 0;
}

