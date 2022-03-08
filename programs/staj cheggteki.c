#include<stdio.h>
#include<string.h>
// structre for detials
struct details{
    int ssn;
    char name[50];
    char surname[50];
    char cellNo[20];
    char email[50];
    char homeAddress[200];
    char city[20];
    char company[50];
    char companyAdress[200];
    char companyLocation[50];
    char companyPhone[20];
    char companyEmail[20];
    char beginningDate[20];
    char endingDate[20];
    int workdays;
};

struct details list[1000];
int size = 0;

void showAll(){
	int i;
    if(size == 0){
        printf("No Students in the list.\n");
        return ;
    }
    printf("Id\t\tName\n");
    for(i=0;i<size;i++){
        printf("%d\t\t%s",i,list[i].name);
    }
}

void show(int id){
    if(id >= size){
        printf("No Student in the list.\n");
        return ;
    }
    printf("School Number: %d\n",list[id].ssn);
    printf("Name: %s\n",list[id].name);
    printf("Surname: %s\n",list[id].surname);
    printf("Phone No: %s\n",list[id].cellNo);
    printf("Email: %s\n",list[id].email);
    printf("Home Address: %s\n",list[id].homeAddress);
    printf("City: %s\n",list[id].city);
    printf("Company: %s\n",list[id].company);
    printf("Company Address: %s\n",list[id].companyAdress);
    printf("Company location: %s\n",list[id].companyLocation);
    printf("Company phone no: %s\n",list[id].companyPhone);
    printf("Company email: %s\n",list[id].companyEmail);
    printf("Beginning date: %s\n",list[id].beginningDate);
    printf("Ending date: %s\n",list[id].endingDate);
    printf("Total work days: %d\n",list[id].workdays);
}

// Saving it in file details.txt
void save(){
    FILE *fp = fopen("details.txt", "a");
    if(fp == NULL){
        printf("File cant be created. Data is not saved.");
        return ;
    }
    char str[10000];
    sprintf(str,"%d %s %s %s %s %s %s %s %s %s %s %s %s %s %d\n",list[size-1].ssn,list[size-1].name,
    list[size-1].surname,list[size-1].cellNo,list[size-1].email,list[size-1].homeAddress,list[size-1].city,
    list[size-1].companyAdress,list[size-1].companyAdress,list[size-1].companyLocation,list[size-1].companyPhone,
    list[size-1].companyEmail,list[size-1].beginningDate,list[size-1].endingDate,list[size-1].workdays);
    fwrite(str,strlen(str),1,fp);
    fclose(fp);
}

// Addition of students in list
void add(){
    printf("Enter Details\n");
    printf("School Number: ");
    scanf("%d",&list[size].ssn);
    getchar();
    printf("Name: ");
    fgets(list[size].name, sizeof(list[size].name), stdin);
    strtok(list[size].name, "\n");
    printf("Surname: ");
    fgets(list[size].surname, sizeof(list[size].surname), stdin);
    strtok(list[size].name, "\n");
    printf("Phone No: ");
    fgets(list[size].cellNo, sizeof(list[size].cellNo), stdin);
    strtok(list[size].name, "\n");
    printf("Email: ");
    fgets(list[size].email, sizeof(list[size].email), stdin);
    strtok(list[size].name, "\n");
    printf("Home Address: ");
    fgets(list[size].homeAddress, sizeof(list[size].homeAddress), stdin);
    strtok(list[size].name, "\n");
    printf("City: ");
    fgets(list[size].city, sizeof(list[size].city), stdin);
    strtok(list[size].name, "\n");
    printf("Company: ");
     fgets(list[size].company, sizeof(list[size].company), stdin);
     strtok(list[size].name, "\n");
    printf("Company Address: ");
     fgets(list[size].companyAdress, sizeof(list[size].companyAdress), stdin);
     strtok(list[size].name, "\n");
    printf("Company location: ");
     fgets(list[size].companyLocation, sizeof(list[size].companyLocation), stdin);
     strtok(list[size].name, "\n");
    printf("Company phone no: ");
     fgets(list[size].companyPhone, sizeof(list[size].companyPhone), stdin);
     strtok(list[size].name, "\n");
    printf("Company email: ");
     fgets(list[size].companyEmail, sizeof(list[size].companyEmail), stdin);
     strtok(list[size].name, "\n");
    printf("Beginning date DD/MM/YYYY: ");
     fgets(list[size].beginningDate, sizeof(list[size].beginningDate), stdin);
     strtok(list[size].name, "\n");
    printf("Ending date DD/MM/YYYY: ");
    fgets(list[size].endingDate, sizeof(list[size].endingDate), stdin);
    strtok(list[size].name, "\n");
    printf("Total work days: ");
    scanf("%d",&list[size].workdays);
    size++;
    save();
}


int main()
{
    
    while(1){
        int choice;
        printf("\n-------- Menu --------- \n");
        printf("1. Show list\n");
        printf("2. Show Student details\n");
        printf("3. Enter a student details\n");
        printf("0. To Exit.\n");
        scanf("%d",&choice);
        if(choice == 0)
        {
            return 0;
        }
        if(choice == 1){
            showAll();
        }
        else if(choice == 2){
            printf("Enter student Id: ");
            int id;
            scanf("%d",&id);
            show(id);
        }else{
            add();
        }  
    }
    return 0;
}
