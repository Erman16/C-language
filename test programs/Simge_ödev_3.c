#include<stdio.h>

int main(){
	
	int input,calculate,sum = 0;
	
	printf("please enter the value you want to calculate the sum of it is digits: ");
	scanf("%d",&input);
	
	for(;input != 0; input = input/10){
		calculate = input % 10;
		sum = sum + calculate;
	}
	
	
	printf("sum: %d",sum);
	return 0;
}

