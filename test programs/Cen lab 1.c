#define NOT_FOUND -1    
#include<stdio.h>
#define arr1 10

int search(int arr[],int target,int n){
    int i,found = 0,where;
     
    i = 0;
    while (!found && i < n) {
        if (arr[i] == target)
                found = 1;
        else
            ++i;
    }

    if(found){
      	where = i+1;
	}    
    else{
      	where = NOT_FOUND;
	}
    printf("%d\n",where);
    return where;
}

int main(){
	int my_arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int answer;
	int my_target = 6;                            /* I choose the target */
	int my_n = 10;                                 /* There is 9 element in array */
	answer = search(my_arr[10],my_target,my_n);
	printf("%d",answer);
}
