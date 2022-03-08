#include<stdio.h>
#include<math.h>

int main(){
	int i,j,n = 3,arr[3][3] = {2,2,2,2,2,2,2,2,2},arr2[3][3] = {2,2,2,2,2,2,2,2,2},arr3[3][3];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			arr3[i][j] = arr[i][j]+arr2[i][j];
		}
	}
	printf("first\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("second\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("sum\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}

