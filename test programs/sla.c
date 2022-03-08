#include<stdio.h>
#include<math.h>

int main(){
	
	int a , b , x;
	printf("f(x)= 68^3 + sqrt(58) - 4x^6 \n");
	printf("please enter a value of x for normal calculation: ");
	scanf("%d",&x);
	
	a = (pow(68,3)) + (sqrt(58)) - (4 * pow(x,6));
	
	printf("your normal result is %d \n",a);
	
	b = (24 * x);
	
	printf("and derivative of f(x) with your entry is: %d ",b);
	
	return 0;
}
