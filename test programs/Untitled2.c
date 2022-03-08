#include <stdio.h>

void one();
void two();
void three();
void four();
int sayi,flag = 0, i ;

int main(){
	
	int sayi,flag = 0, i ;
	printf("Bir cift sayi giriniz:");
    scanf("%d", &sayi);
    for ( i = 2; i <= sayi; i=i){
    	sayi = (sayi - 2);
    	void one();
	}
	
	sayi = sayi + 2;
	
	for ( i = 2; i <= sayi; i=i){
		sayi = (sayi - 3);
    	void two();
	}
	
	sayi = sayi + 3;
	
	for (i = 2; i <= sayi; i=i){
		sayi = (sayi - 5);
    	void three();
	}
	
	sayi = sayi + 5;
	
	for (i = 2; i <= sayi; i=i){
		sayi = (sayi - 7);
    	void four();
	}
	
	sayi = sayi + 7;
	
	return 0;
}
	
void one(){

       for( i = 2; i <= sayi/2; i++) {
         if(sayi % i == 0) {
           flag = 1;
           break;
         }
       } 
       if(flag == 0)
          printf("asal sayýlarýn 2 ve %d \n",sayi);        
}

void two(){

       for( i = 2; i <= sayi/2; i++) {
         if(sayi % i == 0) {
           flag = 1;
           break;
         }
       } 
       if(flag == 0)
          printf("asal sayýlarýn 3 ve %d \n",sayi);        
}

void three(){

       for( i = 2; i <= sayi/2; i++) {
         if(sayi % i == 0) {
           flag = 1;
           break;
         }
       } 
       if(flag == 0)
          printf("asal sayýlarýn 5 ve %d \n",sayi);        
}

void four(){

       for( i = 2; i <= sayi/2; i++) {
         if(sayi % i == 0) {
           flag = 1;
           break;
         }
       } 
       if(flag == 0)
          printf("asal sayýlarýn 7 ve %d \n",sayi);        
}











