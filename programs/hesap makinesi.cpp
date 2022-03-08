/* CALCULATOR PROGRAM */

#include<stdio.h>
#include<math.h>

void sum(){
	float s=1,answer=0;
	int i=1;
	char control = 'a';
	
	printf("\nPlease enter the values you want to sum (enter a for '+' c for '=')");
	
	while(control != 'c'){
		printf("\nPlease enter %d'th value: ",i);
		scanf("%d",&s);
		answer = s + answer;
		printf("\ncontinue? : ");
		scanf("%s",&control);
		i++;
	}
	printf("\nAnswer: %d\n\n\n",answer);
}

void multiply(){
	float s=1,answer=1;
	int i=1;
	char control = 'a';
	
	printf("\nPlease enter the values you want to multiply (enter a for '*' c for '=')");
	
	while(control != 'c'){
		printf("\nPlease enter %f'th value: ",i);
		scanf("%d",&s);
		answer = s * answer;
		printf("\ncontinue? : ");
		scanf("%s",&control);
		i++;
	}
	printf("\nAnswer: %d\n\n\n",answer);
}

void divide(){
	float s=1,answer=1;
	int i=1;
	char control = 'a';
	
	printf("\nPlease enter the values you want to divide (enter a for '/' c for '=')");
	
	while(control != 'c'){
		printf("\nPlease enter %d'th value: ",i);
		scanf("%f",&s);
		answer = answer / s;
		printf("\ncontinue? : ");
		scanf("%s",&control);
		i++;
	}
	printf("\nAnswer: %d\n\n\n",answer);
}

int main(){
	
	/* Sum , Multiply , Divide , Power of a number , Root , Log , factorial , sin , cos , tan */
	
	int selection; 
	a:
	printf("Please select the process that you want...\n");
	printf(" 1-) Sum\n");
	printf(" 2-) Multiply\n");
	printf(" 3-) Divide\n");
	printf(" 4-) Power of a number\n");
	printf(" 5-) Root\n");
	printf(" 6-) Log\n");
	printf(" 7-) Factorial\n");
	printf(" 8-) Sin\n");
	printf(" 9-) Cos\n");
	printf("10-) Tan\n");
	printf("Press (-1) for quit.\n");
	printf("\nInput: ");
	scanf("%d",&selection);
	
	
	
	switch(selection){
		
		case 1:
			sum();
			break;
		case 2:
			multiply();
			break;
		case 3:
			divide();
			break;
		case 4:
			
		case 5:
			
		case 6:
			
		case 7:
			
		case 8:
			
		case 9:
			
		case 10:
			
		case -1:
			printf("Quiting...");
			break;
		default:
			printf("please select correctly...");
			break;
	}
	if(selection != -1){
		goto a;
	}
	return 0;
}

