#include<stdio.h>

struct cars_info1 {
    char model[20];
    char type[20];
    int year;
};
    
struct cars_info2{
    int engine;
    char fuel_type[20];
    struct cars_info1 cars;
};

int main() {
    struct cars_info2 arda;
    printf("please enter your car info\n");
    printf("Engine: ");
    scanf("%d", &arda.engine);
    printf("Fuel: ");
    scanf("%s", arda.fuel_type);
    printf("Cars Model: ");
    scanf("%s", arda.cars.model);
    printf("Cars Type: ");
    scanf("%s", arda.cars.type);
    printf("Cars Year: ");
    scanf("%d", &arda.cars.year);
    
    printf("----------------------------\nEngine:%d\nFuel:%s\nCars Model:%s\nCars Type:%s\nCars Year:%d", arda.engine, arda.fuel_type, arda.cars.model, arda.cars.type, arda.cars.year);
    
    return 0;
}
