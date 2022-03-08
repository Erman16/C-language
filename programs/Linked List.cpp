#include<stdio.h>
#include<stdlib.h>

typedef struct LinkedList{
	int data;  
	struct LinkedList* next; 
}LL;

void* AllocateMemory(int size){
	void* newItem = malloc(size); 
	if(newItem == NULL){
		printf("Memory can not allocated!!!");
		exit(EXIT_FAILURE);
	}
	return newItem;
}

LL* addItemToEnd(LL* head,int data){
	
	LL* newItem = (LL*) AllocateMemory(sizeof(LL));
	newItem->data = data;
	newItem->next = NULL;
	
	if(head == NULL){
		return newItem;
	}
	else{
		LL* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newItem;
	}
	return head;
}

void printLL(LL* head){
	
	if(head != NULL){
		while(head != NULL){
			printf("data: %d\n",head->data);
			head = head->next;
		}
	}
	else{
		printf("List does not exist!!!");
	}
	
}

int main(){
	LL* list1 = NULL;
	
	list1 = addItemToEnd(list1,2);
	list1 = addItemToEnd(list1,5);
	list1 = addItemToEnd(list1,7);
	list1 = addItemToEnd(list1,1);
	list1 = addItemToEnd(list1,4);
	printLL(list1);
	return 0;
}

