#include<stdio.h>
#include <stdlib.h>

int main(){
	char input[6]={0};                                    //kanka burada kullan�c�dan alaca��m �ifreyi istedim
	int kontrol = 2;                                      //burada bi kontrol de�eri olu�turdum
	a:                                                    //bu d�n�� i�in
	printf("please enter the password:");                 //bunu biliyon
	scanf("%s",&input);                                   //burda kullan�c�dan giriyi ald�m %s olmas� �nemli
	
	kontrol = strcmp(input,"kobe24");                     //burada �zel bi fonksiyon kulland�m bu strcmp soldaki ile sa�dakinin harflerini kar��la�t�r�yor e�er ayn�ysa 0 de�ilse 1 sonucunu veriyor

	if(kontrol==0){                                       //e�er ayn� ise strcmp 0 de�erini vericek ve buraya girmesini sa�l�yacak ve do�ru ��kt�s� girilecek
		printf("correct password");
	}
	else{                                                 //e�er 0 de�il ise buraya giricek ve ba�a d�nd�r�cek
		printf("wrong password please try again!!\n");    //for ile de yapabilirsin sorun olmaz ben b�yle istedim sadece :D
		goto a;    
	}
	return 0;
}

