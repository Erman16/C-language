#include<stdio.h>
#include<math.h>

int main(){
	int i,j,temp = 0,n = 5,a = 1;
	int arr[5] = {23,7,2,77,0};
	printf("ilk araliginiz = %d , %d , %d , %d , %d ",arr[0],arr[1],arr[2],arr[3],arr[4]);

	for(i = 0; i < n-1;i++){
		
		for(j = a; j < n ;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		a++;
	}
	printf("\nson araliginiz = %d , %d , %d , %d , %d ",arr[0],arr[1],arr[2],arr[3],arr[4]);
	return 0;
}

