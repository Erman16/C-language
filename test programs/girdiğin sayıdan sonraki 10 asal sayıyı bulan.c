#include<stdio.h>

int main(){
	int j,input,stop=0,sayac=1,a=1;
	printf("this program finds 10 prime numbers after your input\n\n");  //bilgilendirdim
	printf("please enter the number:");                                 
	scanf("%d",&input);                               
	for(;stop<10;input++){
		if(input%2 != 0) {                  //girdiðim sayý tekse devam et diyorum
			for(j=2;j<(input/2);j++){       //döngü
				if((input%j) == 0){         //kalaný yoksa sayacý 1 arttýr
				sayac++;
		     	}	
	     	}
			if(sayac == 0){                  //sayaç hiç artmadýysa asaldýr .
				printf("%d-) %d\n",a,input);
				a++;                         //bu a baþýndaki 1-),2-) ler için
				stop++;                      //10 sayý olunca dursun diye
			}
			else {
				sayac = 0;                   //sayacý sýfýrlamak için
			}
		}	
	}
	return 0;
}

