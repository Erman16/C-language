#include<stdio.h>

char *scanline(char *dest,int  dest_len){
	
    int i,ch;
    i = 0;
    
    for (ch = getchar(); ch != '\n' && ch != EOF && i < dest_len  - 1 ; ch = getchar()){
    	dest[i++] = ch;
	}
        
    dest[i] = '\0';

    while (ch != '\n' && ch != EOF){
    	ch = getchar();
	}

    return (dest);
}

int main(){
	char string[100],n = 10;         /* you can input 10 char , after 10 there is no string*/
	printf("%s",scanline(string,n));
	return 0;
}

