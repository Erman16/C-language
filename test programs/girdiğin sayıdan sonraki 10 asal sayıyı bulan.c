#include<stdio.h>

int main(){
	int j,input,stop=0,sayac=1,a=1;
	printf("this program finds 10 prime numbers after your input\n\n");  //bilgilendirdim
	printf("please enter the number:");                                 
	scanf("%d",&input);                               
	for(;stop<10;input++){
		if(input%2 != 0) {                  //girdi�im say� tekse devam et diyorum
			for(j=2;j<(input/2);j++){       //d�ng�
				if((input%j) == 0){         //kalan� yoksa sayac� 1 artt�r
				sayac++;
		     	}	
	     	}
			if(sayac == 0){                  //saya� hi� artmad�ysa asald�r .
				printf("%d-) %d\n",a,input);
				a++;                         //bu a ba��ndaki 1-),2-) ler i�in
				stop++;                      //10 say� olunca dursun diye
			}
			else {
				sayac = 0;                   //sayac� s�f�rlamak i�in
			}
		}	
	}
	return 0;
}

