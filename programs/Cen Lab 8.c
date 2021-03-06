/* Figure 10.16 Program to Compute Area and Perimeter of Geometric Figures */
/*
 * Computes the area and perimeter of a variety of geometric figures.
 */

#include <stdio.h>
#define PI 3.14159

/*  Types defining the components needed to represent each shape.       */
typedef struct {
      double area,
             circumference,
             radius;
} circle_t;

typedef struct {
      double area,
             perimeter,
             width,
             height;
} rectangle_t;

typedef struct {
      double area,
             perimeter,
             side;
} square_t;

/* Type of a structure that can be interpreted a different way for
     each shape                                                         */
typedef union {
      circle_t    circle;
      rectangle_t rectangle;
      square_t    square;
} figure_data_t;

/* Type containing a structure with multiple interpretations along with
 * a component whose value indicates the current valid interpretation   */
typedef struct {
      char          shape;
      figure_data_t fig;
} figure_t;

figure_t get_figure_dimensions(void);
figure_t compute_area(figure_t object);
figure_t compute_perim(figure_t object);
void print_figure(figure_t object);

int
main(void){
	
    figure_t onefig;

	printf("Area and Perimeter Computation Program\n");

    for (onefig = get_figure_dimensions(); onefig.shape != 'Q'; onefig = get_figure_dimensions()) {
        onefig = compute_area(onefig);
        onefig = compute_perim(onefig);
        print_figure(onefig);
    }

    return (0);
}

/*
 * Prompts for and stores the dimension data necessary to compute a
 * figure's area and perimeter. Figure returned contains a 'Q' in the
 * shape component when signaling end of data.
 */
figure_t
get_figure_dimensions(void)
{
      figure_t object;
  
      printf("\nEnter a letter to indicate the object shape or Q to quit.\n");
      printf("C (circle), R (rectangle), or S (square)> ");
      object.shape = getchar();    /*it quit beacause of this and line 102*/

      switch (object.shape) {
      case 'C':
      case 'c':

            printf("Enter radius> ");
            scanf("%lf", &object.fig.circle.radius);
            break;

      case 'R':
      case 'r':
            printf("Enter height> ");
            scanf("%lf", &object.fig.rectangle.height);
            printf("Enter width> ");
            scanf("%lf", &object.fig.rectangle.width);
            break;

      case 'S':
      case 's':
            printf("Enter length of a side> ");
            scanf("%lf", &object.fig.square.side);
            break;

      default: /* Error is treated as a QUIT */
            object.shape = 'Q';    /*getchar do not work and because of that this is happening.... (i work to solve it but i can not solve it)*/
      }

      return (object);
}

/*
 * Computes the area of a figure given relevant dimensions. Returns
 * figure with area component filled.
 * Pre: value of shape component is one of these letters: CcRrSs
 *      necessary dimension components have values
 */
figure_t
compute_area(figure_t object)
{
      switch (object.shape) {
      case 'C':
      case 'c':
            object.fig.circle.area = PI * object.fig.circle.radius *
                                     object.fig.circle.radius;
            break;

      case 'R':
      case 'r':
            object.fig.rectangle.area = object.fig.rectangle.height *
                                        object.fig.rectangle.width;
            break;

      case 'S':
      case 's':
            object.fig.square.area = object.fig.square.side *
                                     object.fig.square.side;
            break;
      default:
            printf("Error in shape code detected in compute_area\n");
      }

      return (object);
}

/* Code for compute_perim and print_figure goes here */

figure_t
compute_perim(figure_t object)
{
      switch (object.shape) {
      case 'C':
      case 'c':
            object.fig.circle.circumference = 2 * PI * object.fig.circle.radius;
            break;

      case 'R':
      case 'r':
            object.fig.rectangle.perimeter = 2 * (object.fig.rectangle.height + object.fig.rectangle.width);
            break;

      case 'S':
      case 's':
            object.fig.square.perimeter = 4 * object.fig.square.side;
            break;
      default:
            printf("Error in shape code detected in compute_perimeter\n");
      }

      return (object);
}

void
print_figure(figure_t object)
{
      switch (object.shape) {
      case 'C':
      case 'c':
            printf("\nCircle area: %0.4f",object.fig.circle.area);
            printf("\nCircle circumference: %0.4f",object.fig.circle.circumference);
            break;

      case 'R':
      case 'r':
            printf("\nRectangle area: %0.4f",object.fig.rectangle.area);
            printf("\nRectangle perimeter: %0.4f",object.fig.rectangle.perimeter);
            break;

      case 'S':
      case 's':
            printf("\nSquare area: %0.4f",object.fig.square.area);
            printf("\nSquare perimeter: %0.4f",object.fig.square.perimeter);
            break;
      default:
            printf("\nError in shape code detected in print_figure\n");
      }

}

