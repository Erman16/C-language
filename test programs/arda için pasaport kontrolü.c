#include<stdio.h>
#include <stdlib.h>

int main(){
	char input[6]={0};                                    //kanka burada kullanýcýdan alacaðým þifreyi istedim
	int kontrol = 2;                                      //burada bi kontrol deðeri oluþturdum
	a:                                                    //bu dönüþ için
	printf("please enter the password:");                 //bunu biliyon
	scanf("%s",&input);                                   //burda kullanýcýdan giriyi aldým %s olmasý önemli
	
	kontrol = strcmp(input,"kobe24");                     //burada özel bi fonksiyon kullandým bu strcmp soldaki ile saðdakinin harflerini karþýlaþtýrýyor eðer aynýysa 0 deðilse 1 sonucunu veriyor

	if(kontrol==0){                                       //eðer ayný ise strcmp 0 deðerini vericek ve buraya girmesini saðlýyacak ve doðru çýktýsý girilecek
		printf("correct password");
	}
	else{                                                 //eðer 0 deðil ise buraya giricek ve baþa döndürücek
		printf("wrong password please try again!!\n");    //for ile de yapabilirsin sorun olmaz ben böyle istedim sadece :D
		goto a;    
	}
	return 0;
}

