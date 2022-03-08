#include<stdio.h>
#include<math.h>
	
void change_x();	 
void change_y();



int main(){
    int x;
    int y;
    int t;
    
    printf("please enter x and y values if x bigger than y they are replaced if else they stay still \n");
    
    printf("write x: \n");
    scanf("%d",&x);
    
    printf("write y: \n");
    scanf("%d",&y);
    
    
    if (x>y){
        t=x;
        x=y;
        y=t;
        
        printf("your x %d \n",x);
        printf("your y %d \n",y);
    }
    else {
        
        printf("your x %d \n",x);
        printf("your y %d \n",y);
        
    }
    
    return 0;

}
