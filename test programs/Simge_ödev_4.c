#include<stdio.h>
#include<math.h>

int main(){
	int input,answer_pos,answer_neg,i;
	
	printf("please enter your value: ");
	scanf("%d",&input);
	
	if(input >= 0){	
    	double sq = sqrt(input);
    	if(sq == round(sq)){
        	printf("answer: %d",input);
    	}
    	else{
    		for(i=1;;i++){
    			double sq = sqrt(input+i);
    			if(sq == round(sq)){
    				answer_pos = sq*sq;
    				break;
    			}
			}
			for(i=0;;i--){
				double sq = sqrt(input+i);
    			if(sq == round(sq)){
    				answer_neg = sq*sq;
    				break;
    		 	}
			}
		}
		if(input - answer_neg > answer_pos - input){
			printf("answer: %d",answer_pos);
		}
		else if(input - answer_neg < answer_pos - input){
			printf("answer: %d",answer_neg);
		}
		else{
			printf("there is two answer: 1-)%d 2-)%d",answer_pos,answer_neg);
		}
	}
	return 0;
}
