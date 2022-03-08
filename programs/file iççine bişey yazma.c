#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE* Mydata;
	Mydata = fopen("Mydata.txt","w+");
	fprintf(Mydata, "%s","Today I am very happy because I can create external data file in C Programming Language myself");
	fclose(Mydata);
	return 0;
	// you do not say print it in this question so ý do not print it yet;
}

