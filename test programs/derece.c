#include<stdio.h>
#include<math.h>
#define pi 3.14159265359

int main()  {
	
    double radyan ,result ,degree;
    
    scanf("%lf",&degree);
    
    radyan = degree * (pi/180);
    
    result = sin(radyan);
    
    printf("%lf",result);

	return 0;  
}
