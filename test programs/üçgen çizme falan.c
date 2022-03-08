#include <stdio.h>

void draw_circle();
	
void draw_intersect();

void draw_base();

void draw_triangle();

	
int main()
{
	
    draw_circle();
    
   	draw_intersect();
    
	draw_base();
	
	draw_triangle();
	
    return(0);
}

void draw_circle()
{
	printf("   *   \n ");
	printf(" *   * \n ");
	printf("  * *  \n ");
	
}

void draw_intersect()
{
	printf("    /\\    \n");
	printf("   /  \\   \n");
	printf("  /    \\  \n");
	
}

void draw_base()
{
	
	printf(" --------- \n");
	
	
}

void draw_triangle()
{
	
	draw_intersect();
	void draw_base();
	
}



