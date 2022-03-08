#include<stdio.h>
#include<math.h>

int main(){
	int time,total,simple_interest;
	float amount,rate;
	printf("Please Enter Principal Amount:");
	scanf("%f",&amount);
	printf("Please Enter Rate:");
	scanf("%f",&rate);
	printf("Please Enter Time:");
	scanf("%d",&time);
	printf("Amount = %.2f \n",amount);
	printf("Rate = %.2f \n",rate);	
	printf("Time = %d years\n",time);
	rate = rate/100;
	total = amount * rate * time;
	simple_interest = total;
	total = total + amount;
	printf("Simple interest = %d \n",simple_interest);
	printf("Total amount at the end of the period = %d \n",total);
	return 0;
}

