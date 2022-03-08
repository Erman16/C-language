#include<stdio.h>
#include<stdlib.h>

void getData(int* data){
	*data = 9;
}

int main(){
	int data = 3;
	getData(&data);
	printf("data: %d\n",data);
	return 0;
}

