#include<stdio.h>
#include<math.h>

int main(){
	int k,a,b,result,sum,i;
	printf("********************************************* Sigma Notation Basic (Can't calculate exponential numbers) ************************************************************)\n\n");
	printf("please enter a 'k' value for sigma formula for the terms (just number for example if you write 10 it is mean 10k):");
	scanf("%d",&k);
	printf("please enter the lower limit(where to start) for sigma:");
	scanf("%d",&a);
	printf("please enter  the upper limit(where to stop) for sigma:)");
	scanf("%d",&b);
	
	for(i=(a-1);i<=b;i++){
		sum = k * i;
		result = result + sum;
	}
	printf("result: %d",result);
	return 0;
}

