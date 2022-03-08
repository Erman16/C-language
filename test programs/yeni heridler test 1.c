#include<stdio.h>
#include<stdlib.h>

int main(){	

	/*
	
	//sayıları karşılaştıran
	
	int number1,number2;
	
	printf("please enter your first number:");
	scanf("%d",&number1);
	printf("please enter your second number:");
	scanf("%d",&number2);
	
	if(number1 > number2){
		printf("first number bigger than second number");
	}
	else if(number2 > number1){
		printf("second number bigger than first number");
	}
	else{
		printf("numbers are same");
	}
	return 0;
	
	//***********************************************************
	
	//üçgenler
	
	int edge1,edge2,edge3;
	
	printf("please enter firts edge: ");
	scanf("%d",&edge1);
	
	printf("please enter second edge: ");
	scanf("%d",&edge2);
	
	printf("please enter third edge: ");
	scanf("%d",&edge3);
	
	if(edge1 == edge2 && edge2 == edge3){
		printf("its a equilateral triangle");
	}
	else if(edge1 == edge2 || edge2 == edge3 || edge1 == edge3){
		printf("its a isosceles triangle");
	}
	else{
		printf("its a scalene triangle");
	}
	return 0;
	
	//*************************************************************
	
	//sayııları kendi arasında sıralayan
	
	int number1,number2,number3;
	
	printf("please enter your first number:");
	scanf("%d",&number1);
	
	printf("please enter your second number:");
	scanf("%d",&number2);
	
	printf("please enter your third number:");
	scanf("%d",&number3);
	
	if(number1 > number2 && number1 > number3){
		if(number2 > number3){
			printf("number 1 > number 2 > number 3");
		}
		else{
			printf("number 1 > number 3 > number 2");
		}	
	}
	else if(number2 > number1 && number2 > number3){
		if(number1 > number3){
			printf("number 2 > number 1 > number 3");
		}
		else{
			printf("number 2 > number 3 > number 1");
		}	
	}
	else if(number3 > number1 && number3 > number2){
		if(number1 > number2){
			printf("number 3 > number 1 > number 2");
		}
		else{
			printf("number 3 > number 2 > number 1");
		}	
	}
	return 0;
	
	*/
	
	//****************************************************************
	
	//4- klavyeden girilen birbirinden farklı 3 tam sayıyı küçükten büyüğe doğru sıralayan C programı?
	
	int number1,number2,number3;
	
	printf("please enter your first number:");
	scanf("%d",&number1);
	
	printf("please enter your second number:");
	scanf("%d",&number2);
	
	printf("please enter your third number:");
	scanf("%d",&number3);
	
	if(number1 < number2 && number1 < number3){
		if(number2 < number3){
			printf("number 1 < number 2 < number 3");
		}
		else{
			printf("number 1 < number 3 < number 2");
		}	
	}
	else if(number2 < number1 && number2 < number3){
		if(number1 < number3){
			printf("number 2 < number 1 < number 3");
		}
		else{
			printf("number 2 < number 3 < number 1");
		}	
	}
	else if(number3 < number1 && number3 < number2){
		if(number1 < number2){
			printf("number 3 < number 1 < number 2");
		}
		else{
			printf("number 3 < number 2 < number 1");
		}	
	}
	return 0;
		
}

