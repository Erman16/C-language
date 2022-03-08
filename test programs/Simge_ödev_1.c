#include<stdio.h>

int main(){
	int lower_limit,upper_limit,exclude,i,j=0,k,l,n,list[100];
	
	printf("please enter lower limit: ");
	scanf("%d",&lower_limit);
	
	printf("\nplease enter upper limit: ");
	scanf("%d",&upper_limit);
	
	for(i = lower_limit; i <= upper_limit; i++){
		list[j] = i;
		j++;
	}
	
	printf("\nNow please enter value to be excluded: ");
	scanf("%d",&exclude);
	for( k = 0; k <= upper_limit - lower_limit; k++){
		
		if(list[k] % exclude == 0){
			for(l = k;l <= upper_limit - lower_limit;l++){
				list[l] = list[l + 1];				
			}
		upper_limit -= 1;
		}
	}
	
	printf("\nyour list: \n");
	for(n = 0;n <= upper_limit - lower_limit; n++){
		printf("%d-) %d\n",n,list[n]);
	}
	return 0;
}

