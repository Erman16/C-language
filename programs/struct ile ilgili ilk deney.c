//Kendisine parametre olarak gelen 100 elemanlý bir tamsayý dizisindeki elemanlarýn en büyük,
//en küçük, ortalama ve standart sapmasýný hesaplayarak bir “struct” yapýsýnda sonuç olarak geri döndüren fonksiyon kodunu yazýnýz.
//Bu fonksiyonun kullanýmýný örnekleyen bir program kodu yazýnýz

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

