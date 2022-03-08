#include<stdio.h>
#define SIZE 100

int main(){
	
	printf("-- This is an internship program please follow the instructions --\n\n");
	printf("-----------------------------------------------------------------------------------------------");
	printf("\nPlease use '_' for spaces, if you do not use it, what you write after it will not be taken.\n");
	printf("-----------------------------------------------------------------------------------------------");
	printf("\n\nThe program will continue unless you press '0'\n");
	
	FILE *fst;
	
	
	int school_number,workday,quit=1;
	char name[SIZE],surname[SIZE],st_phone[SIZE],st_mail[SIZE],st_adress[SIZE],st_city[SIZE],st_company[SIZE];
	char st_comp_adress[SIZE],st_comp_location[SIZE],comp_phone[SIZE],comp_mail[SIZE],beg_date[SIZE],end_date[SIZE];
	
	if (fst == NULL){
		printf("\nThere was a problem creating the file. please try again\n");
	}
    
	while(quit != 0){
		fst = fopen("internship_program.txt","a");
		
		printf("\nPlease enter the student's school number: ");	
		scanf("%d",&school_number);

		printf("\nPlease enter the student's Name and Surname (You can only use space here): ");	
		scanf("%s%s",name,surname);
		
		printf("\nPlease enter the student's phone number: ");	
		scanf("%s",st_phone);
		
		printf("\nPlease enter the student's Email: ");	
		scanf("%s",st_mail);
		
		printf("\nPlease enter the student's Home address: ");	
		scanf("%s",st_adress);
		
		printf("\nPlease enter the student's city: ");	
		scanf("%s",st_city);
		
		printf("\nPlease enter the company name where the student does his or her internship: ");	
		scanf("%s",st_company);
		
		printf("\nPlease enter the full address of the company: ");	
		scanf("%s",st_comp_adress);
		
		printf("\nPlease enter the location of the company: ");	
		scanf("%s",st_comp_location);
		
		printf("\nPlease enter the phone number of the company: ");	
		scanf("%s",comp_phone);
		
		printf("\nPlease enter the Email address of the company: ");	
		scanf("%s",comp_mail);
		
		printf("\nPlease enter the beginning date of the internship (Write like 'day.mounth.year'): ");	
		scanf("%s",beg_date);
		
		printf("\nPlease enter the ending date of the internship (Write like 'day.mounth.year'): ");	
		scanf("%s",end_date);
		
		printf("\nPlease enter the total workdays in the company: ");	
		scanf("%d",&workday);
		
		fprintf(fst,"School number: %d\nSchool name: %s %s\nPhone number: %s\nEmail: %s\nHome address: %s\nCity of the student: %s\nCompany name: %s\nCompany address: %s\nLocation of the company: %s\nPhone number of the company: %s\nEmail address of the company: %s\nBeginning date of the internship: %s\nEnding date of the internship: %s\nTotal workdays in the company: %d\n\n\n",school_number,name,surname,st_phone,st_mail,st_adress,st_city,st_company,st_comp_adress,st_comp_location,comp_phone,comp_mail,beg_date,end_date,workday);
		fclose(fst);
		
		printf("\nWould you like to add more students\nPress '0' for NO, '1' for YES: ");
		scanf("%d",&quit);
		
	}
	
	printf("\n---\nYour file is created with name 'internship_program.txt'\nHave a nice day.\n\nClosing...");
	
	return 0;
}


