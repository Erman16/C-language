#include<stdio.h>

int main(){
	
	int input=0,old_input = 0;
	
	while(input >= 0){
		
		printf("\n\nplease enter: ");
		scanf("%d",&input);
		if(input > old_input){
			printf("\nbiggest number: %d",input);
			printf("\nsmallest number: %d",old_input);
			old_input = input;
		}
		else if(old_input > input){
			printf("\nbiggest number: %d",old_input);
			printf("\nsmallest number: %d",input);
			old_input = input;
		}
		else{
			printf("\nthey are equal to each other");
			old_input = input;
		}
	}
	return 0;
}

