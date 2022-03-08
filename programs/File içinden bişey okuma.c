#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE* Mydata;
	int display;
	Mydata = fopen("Mydata.txt","r");
	while(1){
		display = fgetc(Mydata);
		if (feof(Mydata)){
			break;
		}
		printf("%c",display);
	}
	fclose(Mydata);
	return 0;
	// now ý print it :D
}

