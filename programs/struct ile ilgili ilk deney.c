//Kendisine parametre olarak gelen 100 elemanl� bir tamsay� dizisindeki elemanlar�n en b�y�k,
//en k���k, ortalama ve standart sapmas�n� hesaplayarak bir �struct� yap�s�nda sonu� olarak geri d�nd�ren fonksiyon kodunu yaz�n�z.
//Bu fonksiyonun kullan�m�n� �rnekleyen bir program kodu yaz�n�z

#include<stdio.h>
#include<math.h>

struct book {
		int little[100];
	    int bigger[1];
	    float avarage[1];
	    float deviation[1];	
};

int main(){
	int i;
	struct book values[100];
	for(i=0;i<100;i++){
		struct book values.little[i] = i+1;
		printf("%d",values.little);
	}
	
    
}

