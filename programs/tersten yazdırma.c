#include<stdio.h>

int main(){
	int i;
	char word[100];
	char word2[100];
	
	printf("please enter the word that you want to reverse:");
	scanf("%s",&word);
	
	printf("your word is: %s\n",word);
	for(i = -1 ; i < 100 ; i++ ){
		word[i] = word2[100-i];
	}
	printf("your reverse is: %s",word2);

    return 0;	
}
