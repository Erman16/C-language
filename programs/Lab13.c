#include<stdio.h>

int permutation(){ 
	int n,r,nr,i;
	float ansver;
	printf("please enter total number of objects (n):");
	scanf("%d",&n);
	printf("please enter number of objects selected (r):");
	scanf("%d",&r);
	nr = n-r;
	for(i=n;i>1;i--){
		n = n * (i-1);
	}
	for(i=nr;i>1;i--){
		nr = nr * (i-1);
	}
	ansver = n / nr;
	printf("Permutation: %0.2f",ansver);
}

int combination(){ 
	int n,r,nr,i;
	float ansver;
	printf("\nplease enter total number of objects (n):");
	scanf("%d",&n);
	printf("please enter number of objects selected (r):");
	scanf("%d",&r);
	nr = n-r;
	for(i=n;i>1;i--){
		n = n * (i-1);
	}
	for(i=r;i>1;i--){
		r = r * (i-1);
	}

	for(i=nr;i>1;i--){
		nr = nr * (i-1);
	}
	ansver = n / (nr * r);
	printf("Combination: %0.2f",ansver);
}

int main(){
	int inp = -1;
	
	while(1){
		printf("\nPlease select:\n");
		printf("1-) Permutation\n");
		printf("2-) Combination\n");
		printf("0-) Quit\n");
		scanf("%d",&inp);
		if(inp == 1){
			permutation();
		}
		else if(inp == 2){
			combination();
		}
		else if(inp == 0){
			return 0;
		}
		else{
			printf("please enter 1 or 2");
		}
	}
	
	return 0;
}

