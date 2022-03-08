#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct tree_{
	int data;
	struct tree_* left;
	struct tree_* right;
}tree;

tree* addItem(int data,tree* head){
	
	tree* newItem = (tree*)malloc(sizeof(tree));
	if(newItem == NULL)	{
		printf("memory can not allocated!!!");
		exit(EXIT_FAILURE);
	}
	newItem->data = data;
	newItem->left = NULL;
	newItem->right = NULL;
	
	if(head == NULL){
		return newItem;
	}	
	
	tree* prev = NULL;
	tree* current = head;
	
	while(current != NULL){
		if(current->data > data){
			prev = current;
			current = current->left;
		}
		else if(current->data < data){
			prev = current;
			current = current->right;
		}
	}
	
	if(prev->data > data){
		prev->left = newItem;
	}
	else{
		prev->right = newItem;
	}
	return head;
}

tree* recursiveAddItem(int data,tree* head){
	
	//base case
	if(head == NULL){
		
		tree* newItem = (tree*) malloc(sizeof(tree));
		if(newItem == NULL)	{
			printf("memory can not allocated!!!");
			exit(EXIT_FAILURE);
		}
		newItem->data = data;
		newItem->left = NULL;
		newItem->right = NULL;
		
		return newItem;
	}
	
	if(data > head->data){
		head->right = recursiveAddItem(data,head->right);
	}
	else{
		head->left = recursiveAddItem(data,head->left);
	}
	return head;
}

void printTree(tree* head){
	
	//base case
	if(head == NULL){
		return;
	}	
	
	printTree(head->left);
	printf("data: %d\n",head->data);
	printTree(head->right);
	
}

int main(){
	tree* list1 = NULL;
	
	list1 = recursiveAddItem(4,list1);
	list1 = recursiveAddItem(2,list1);
	list1 = recursiveAddItem(6,list1);
	list1 = recursiveAddItem(3,list1);
	list1 = recursiveAddItem(7,list1);
	
	printTree(list1);
	
	return 0;
}

