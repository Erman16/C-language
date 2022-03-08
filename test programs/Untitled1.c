#include<stdio.h>
#include<math.h>
int main(){
	int sayi,i,k,a=1;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	for(i=2;i<=sayi;i++){
		for(k=2;k<=sayi;k++){
			if(i%k == 0 && i != k){
				break;
			}
			else if(k==i){
				printf("*************\n");
				printf("%d-)***%d***\n",a,i);
				a++;
			}
		}
	}	
}
