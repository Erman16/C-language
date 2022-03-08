#include <string.h>
#include<stdio.h>

typedef struct {
	char name[100];
	double diameter,orbit_time,rotation_time;
	int moons;
	
} planet_t;

int planet_equal(planet_t planet_1,planet_t planet_2){
		
	return (strcmp(planet_1.name, planet_2.name) == 0   &&
           planet_1.diameter == planet_2.diameter      &&
           planet_1.moons == planet_2.moons            &&
           planet_1.orbit_time == planet_2.orbit_time  &&
           planet_1.rotation_time == planet_2.rotation_time);
} 

int main(){
	planet_t planet_1,planet_2;
	int result;
	
	printf("please enter your first planet variables: \n");
	printf("\nFirst planet name: ");
	scanf("%s",&planet_1.name);
	printf("\nFirst planet diameter: ");
	scanf("%lf",&planet_1.diameter);
	printf("\nFirst planet moons: ");
	scanf("%d",&planet_1.moons);
	printf("\nFirst planet orbit_time: ");
	scanf("%lf",&planet_1.orbit_time);
	printf("\nFirst planet rotation_time: ");
	scanf("%lf",&planet_1.rotation_time);
	
	printf("\nplease enter your second planet variables: ");
	printf("\nSecond planet name: ");
	scanf("%s",&planet_2.name);
	printf("\nSecond planet diameter: ");
	scanf("%lf",&planet_2.diameter);
	printf("\nSecond planet moons: ");
	scanf("%d",&planet_2.moons);
	printf("\nSecond planet orbit_time: ");
	scanf("%lf",&planet_2.orbit_time);
	printf("\nSecond planet rotation_time: ");
	scanf("%lf",&planet_2.rotation_time);
	
	result = planet_equal(planet_1,planet_2);
	if(result == 1){
		printf("They are same");
	}
	else{
		printf("They are not same");
	}
	return 0;
}


