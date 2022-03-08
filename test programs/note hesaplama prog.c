#include<stdio.h>

int grade;
char name[10];
char surname[10];
char schoolnumber[9];
int AA , BA , BB , CB , CC , DC , DD , F;

int main(){
	
	printf("Write your name: \n");
	scanf("%s",&name);
	printf("Write your surname: \n");
	scanf("%s",&surname);
	printf("Write your schoolnumber: \n");
	scanf("%s",&schoolnumber);
	printf("%s ",name);
	printf("%s ",surname);
	printf("%s ",schoolnumber);
	
	printf("\n Write your grade:");
	scanf("%d",&grade);

	if( (grade <= 100) && (grade >= 90) ){
		
		printf("your Final Grade is AA \n");
		printf("And your numerical Equivalent is 4.0 to 3.5");		
	}
	else if( (grade <= 89) && (grade >= 80) ){
		
		printf("your Final Grade is BA \n");
		printf("And your numerical Equivalent is 3.5 to 3.0");		
	}
	else if( (grade <= 79) && (grade >= 70) ){
		
		printf("your Final Grade is BB \n");
		printf("And your numerical Equivalent is 3.0 to 2.5");		
	}    
	else if( (grade <= 69) && (grade >= 60) ){
		
		printf("your Final Grade is CB \n");
		printf("And your numerical Equivalent is 2.5 to 2.0");		
	}	
	else if( (grade <= 59) && (grade >= 50) ){
		
		printf("your Final Grade is CC \n");
		printf("And your numerical Equivalent is 2.0 to 1.5");		
	}
	else if( (grade <= 49) && (grade >= 40) ){
		
		printf("your Final Grade is DC \n");
		printf("And your numerical Equivalent is 1.5 to 1.0");		
	}		
	else if( (grade <= 39) && (grade >= 30) ){
		
		printf("your Final Grade is DD \n");
		printf("And your numerical Equivalent is 1.0 to 0");		
	}		
	else {
		
		printf("your Final Grade is F \n");
		printf("And your numerical Equivalent is 0");	
	}				
	return 0;			
	}
	
	
	
	
	
	
	
	
	

