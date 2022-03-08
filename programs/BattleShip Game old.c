#include<stdio.h>
#include<math.h>
#include <unistd.h>
char p11='g',p12='g',p13='g',p2_1='g',p2_2='g',p2_3='g';  //player 1's ships are p1_1,p1_2,p1_3 .... player 2's ships are p2_1,p2_2,p2_3 ....
char p1_s1='f',p1_s2='f',p1_s3='f',p2_s1='f',p2_s2='f',p2_s3='f';        //player 1's shoot places and player 2's shoot places
int aship = 3,bship = 3;                         //aship for player 1's ship count and bship for player 2's ...
int main(){
	int rules;
	printf("************************** Welcome to the BattleShip Game **************************\n");
	printf("*If you want to know the rules press 1 \nif you want to continue and play press 0:");
	baslangic:
	scanf("%d",&rules);
	
	if(rules == 1){
		printf("********** Rules *********\n");
	    printf("*This is a game for 2 player\n");
     	printf("*There are 3 ships per player and players choose 3 points from map to place their ships \n");
    	printf("*Then they select 3 number for shoot the other player and if they hit the right place they sink the enemy ship\n");
		printf("*And this is continue until one player sinks all enemy ships\n");
	}
	else if(rules != 0){
		printf("Please enter 1 or 0\n");
		goto baslangic;
	}

	printf("********* MAP *********\n\n");
	printf("     a     b     c  \n");
	printf("  ******************\n");
	printf("1 * 1a *  1b *  1c *\n");	
	printf("  ******************\n");
	printf("2 * 2a *  2b *  2c *\n");	
	printf("  ******************\n");
	printf("3 * 3a *  3b *  3c *\n");	
	printf("  ******************\n");
	printf("4 * 4a *  4b *  4c *\n");	
	printf("  ******************\n");
	
	void player1_selection1();
	void player1_selection2();
	void player1_selection3();
	void player2_selection();
	void player1_shoot();
	void player2_shoot();
	void player12();

	while (aship > 0 && bship > 0){
		player1_selection1();
		player1_selection2();
		player1_selection3();
		player2_selection();
		player1_shoot();
		player2_shoot();
		player12();
	}
	if(aship = 0){
		printf("*** Player 2 win ***");
	}
	if(bship = 0){
		printf("*** Player 2 win ***");
	}
	return 0;
}

	void player1_selection1(){
		
		printf("****First player's turn****\n");
		
		if(p11 != 0){
			
		printf("Enter your first place:");
		scanf("%c",&p11);
		
		printf("your ship is moved");	
				
	    }
	}
	void player1_selection2(){
	    if(p12 != 0){
	    	
		printf("Enter your second place:");
		scanf("%c",&p12);	
		
		printf("your ship is moved");	
				
		}
	}
	void player1_selection3(){
	    if(p13 != 0){
	    	
		printf("Enter your third place:");
		scanf("%c",&p13);	
		
		printf("your ship is moved");	
				
		}
	}
	
	void player2_selection(){
		
		printf("****Second player's turn****\n");
		
		if(p2_1 != 0){
			
		printf("Enter your first place:");
		scanf("%c",&p2_1);
		
		printf("your ship is moved");
						
		}
		
		if(p2_2 != 0){
			
		printf("Enter your second place:");
		scanf("%c",&p2_2);
		
		printf("your ship is moved");	
					
		}
		
		if(p2_2 != 0){
			
		printf("Enter your third place:");
		scanf("%c",&p2_3);			
		
		printf("your ship is moved");	
		
		}
		
	}
	
	void player1_shoot(){
		
		printf("****First player's turn****\n");

		if(p1_s1 != -1){
			
    		printf("Enter your first place for shoot:");
     		scanf("%c",&p1_s1);	   
			
			printf("shooting...");
			sleep(1); 	
				
		}

		if(p1_s2 != -1){	
		
    		printf("Enter your second place for shoot:");
    		scanf("%c",&p1_s2);	
			
			printf("shooting...");
			sleep(1); 	
			  		
		}
		sleep(1);
		if(p1_s3 != -1){
			
    		printf("Enter your third place for shoot:");	
    		scanf("%c",&p1_s2);
    		
    		printf("shooting...");
			sleep(1); 	
				  					
		}		
	}
	
	void player2_shoot(){
		
		printf("****Second player's turn****\n");

		if(p2_s1 != -1){
			
    		printf("Enter your first place for shoot:");
    		scanf("%c",&p2_s1);	 
    		
    		printf("shooting...");
			sleep(1); 	
			
		}
		sleep(1);
		if(p2_s2 != -1){	
		
    		printf("Enter your second place for shoot:");
			scanf("%c",&p2_s2);	 
			
			printf("shooting...");
			sleep(1); 	
					
		}
		sleep(1);
		if(p2_s3 != -1){
			
    		printf("Enter your third place for shoot:");
			scanf("%c",&p2_s3);	 
			
			printf("shooting...");
			sleep(1); 	
					
		}		
	}
	
	void player12(){
		sleep(1);
		if(p11 == p2_s1){               
			aship--;
			p11 = 0;
			p2_s1 = -1;
			printf("Player 1 lose 1 ship\n");
			
		}
		sleep(1);
		if(p11 == p2_s2){               
			aship--;
			p11 = 0;
			p2_s2 = -1;
			printf("Player 1 lose 1 ship\n");
		}
		sleep(1);
		if(p11 == p2_s3){               
			aship--;
			p11 = 0;
			p2_s3 = -1;
			printf("Player 1 lose 1 ship\n");
		}
		sleep(1);
		if(p12 == p2_s1){               
			aship--;
			p12 = 0;
			p2_s1 = -1;
			printf("Player 1 lose 1 ship\n");
		}
		sleep(1);
		if(p12 == p2_s2){               
			aship--;
			p12 = 0;
			p2_s2 = -1;
			printf("Player 1 lose 1 ship\n");
		}
		sleep(1);
		if(p12 == p2_s3){               
			aship--;
			p12 = 0;
			p2_s3 = -1;
			printf("Player 1 lose 1 ship\n");
		}
		sleep(1);
		if(p13 == p2_s1){               
			aship--;
			p13 = 0;
			p2_s1 = -1;
			printf("Player 1 lose 1 ship\n");
		}
		sleep(1);
		if(p13 == p2_s2){               
			aship--;
			p13 = 0;
			p2_s2 = -1;
			printf("Player 1 lose 1 ship\n");
		}
		sleep(1);
		if(p13 == p2_s3){               
			aship--;
			p13 = 0;
			p2_s3 = -1;
			printf("Player 1 lose 1 ship\n");
		}
		sleep(1);
		if(p2_1 == p1_s1){               
			bship--;
			p2_1 = 0;
			p1_s1 = -1;
			printf("Player 2 lose 1 ship\n");
		}
		sleep(1);
		if(p2_1 == p1_s2){               
			bship--;
			p2_1 = 0;
			p1_s2 = -1;
			printf("Player 2 lose 1 ship\n");
		}
		sleep(1);
		if(p2_1 == p1_s3){               
			bship--;
			p2_1 = 0;
			p1_s3 = -1;
			printf("Player 2 lose 1 ship\n");
     	}
     	sleep(1);
     	if(p2_2 == p1_s1){               
			bship--;
			p2_2 = 0;
			p1_s1 = -1;
			printf("Player 2 lose 1 ship\n");
		}
		sleep(1);
		if(p2_2 == p1_s2){               
			bship--;
			p2_2 = 0;
			p1_s2 = -1;
			printf("Player 2 lose 1 ship\n");
		}
		sleep(1);
		if(p2_2 == p1_s3){               
			bship--;
			p2_2 = 0;
			p1_s3 = -1;
			printf("Player 2 lose 1 ship\n");
     	}
     	sleep(1);
   		if(p2_3 == p1_s1){               
			bship--;
			p2_3 = 0;
			p1_s1 = -1;
			printf("Player 2 lose 1 ship\n");
		}
		sleep(1);
		if(p2_3 == p1_s2){               
			bship--;
			p2_3 = 0;
			p1_s2 = -1;
			printf("Player 2 lose 1 ship\n");
		}
		sleep(1);
		if(p2_3 == p1_s3){               
			bship--;
			p2_3 = 0;
			p1_s3 = -1;
			printf("Player 2 lose 1 ship\n");
     	}
     	sleep(1);
	}
	
	


