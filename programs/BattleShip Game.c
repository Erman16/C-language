#include<stdio.h>
#include<math.h>
#include <unistd.h>

int map[] = {1,2,3,4,5,6,7,8,9} ;
int o1 = 98 , o2 = 98;                              //player 1's ship .... player 2's ship ....
int o1s = 99 , o2s = 99;                           //player 1's shoot place and player 2's shoot place
int aship = 1,bship = 1;                         //aship for player 1's ship count and bship for player 2's ...

int main(){
	int rules,conti=0,f;
	printf("------------------------------------------------------------------------------------\n");
	printf("************************** Welcome to the BattleShip Game **************************\n");
	printf("------------------------------------------------------------------------------------\n\n");	
	printf("*If you want to know the rules press 1 \n*If you want to continue and play press 0:");
	baslangic:
	scanf("%d",&rules);
	
	if(rules == 1){
		printf("\n\n********** Rules *********\n\n");
	    printf("*This is a game for 2 player\n");
     	printf("*There is one ship per player and players choose 1 point from map to place their ship \n");
    	printf("*Then they select 1 number for shoot the other player and if they hit the right place they sink the enemy ship\n");
		printf("*And player who sink enemy ship win the game\n");
		b:
		printf("..............................................................................................................\n");
		printf("please pless 1 to continue:");
		scanf("%d",&conti);
		if(conti == 1){
			goto a;
		}
		else {
			goto b;
		}
	}
	else if(rules != 0){
		printf("Please enter 1 or 0\n");           
		goto baslangic;
	}
	
    a: 
    g:
	printf("\n\n********* MAP *********\n\n");
	printf("  ******************\n");
	printf("  * 1  *  2  *  3  *\n");	
	printf("  ******************\n");
	printf("  * 4  *  5  *  6  *\n");	
	printf("  ******************\n");
	printf("  * 7  *  8  *  9  *\n");	
	printf("  ******************\n");
	
	while(aship == 1 && bship == 1){
		c:
		printf("\n*** Turn for player 1 ***\n");
		printf("please enter the place for your ship:");
		scanf("%d",&o1);
		if(o1 >= 10 || o1 == 0){
			printf("\n\n****please select from map****\n\n");
			goto c;
		}
		printf("your ship is moving....\n");
		sleep(1);
		d:	
		printf("\n*** Turn for player 2 ***\n");
		printf("please enter the place for your ship:");
		scanf("%d",&o2);
		if(o2 >= 10 || o2 == 0){
			printf("\n\n****please select from map****\n\n");
			goto d;
		}
		printf("your ship is moving....\n");
		sleep(1);
		e:	
		printf("\n*** Turn for player 1 ***\n");
		printf("please enter the place that you want to shoot:");
		scanf("%d",&o1s);
		if(o1s >= 10 || o1s == 0){
			printf("\n\n****please select from map****\n\n");
			goto e;
		}
		printf("shooting....\n");
		sleep(1);
        f:
		printf("\n*** Turn for player 2 ***\n");
		printf("please enter the place that you want to shoot:");
		scanf("%d",&o2s);
		if(o2s >= 10 || o2s == 0){
			printf("\n\n****please select from map****\n\n");
			goto f;
		}
		printf("shooting....\n");
		sleep(1);		
		
		if(o1s == o2 && o2s != o1){
			bship = 0;
		}
		else if(o2s == o1 && o1s != o2){
			aship = 0;
		}
		else{
			aship = 0;
			bship = 0;
		}
	
	}
	
	if(bship == 0 && aship != 0){
		printf("\n\n********player 1 win the game********");
	}
	else if(aship == 0 && bship != 0){
		printf("\n\n********player 2 win the game********");
	}
	else{
		printf("\n\n*************** Draw ****************");
	}
	printf("\n\n\n***********************************************\n");
	printf("If you want play to again pless 1:\nIf you dont want to play again press any number:");
	scanf("d",&f);
	if(f == 1){
		goto g;
	}
	else{
		goto k;
	}
	k:
	return 0;
}

	
	
	


