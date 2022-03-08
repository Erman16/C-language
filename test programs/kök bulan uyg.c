#include<stdio.h>
#include<math.h>

int main() {
	
    double a , b , c , D , r1 , r2 , ip , rp ;
    
    printf("for ax^2 + bx + c select a , b , c:\n");
    
    scanf("%lf %lf %lf",&a ,&b ,&c);
    
    D = (b*b)-(4*a*c);
    
    printf("your equation is: %lfx^2 %lfx %lfc \n",a , b ,c);
    
    if (D>0)  {
    	
    	r1=(-b + sqrt(D)) / (2*a);
    	r2=(-b - sqrt(D)) / (2*a);
    		
    	printf("first real root = %.2lf \n", r1);
        printf("second real root = %.2lf \n", r2);
	}
	
	else {
		
		ip= -b / (2 * a);
		rp= sqrt(-D) / (2 * a) ;
		
    	printf("first nonreal root = %.2lf + %.2lfi \n",ip , rp );
    	printf("second nonreal root = %.2lf - %.2lfi \n", ip , rp);
				
	}
	 
	
	           
    return 0;
}


