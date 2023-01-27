#include <stdio.h>

typedef struct Vehicule {
    int wheel_count;
    char *model_name;
} vehicule;

void get_largest_vehicule(vehicule, vehicule);

void main() {
    vehicule bike;
    vehicule car;

    bike.wheel_count = 2;
    bike.model_name  = "ultra bike 100";

    car.wheel_count = 4;
    car.model_name  = "fast 2007";

    get_largest_vehicule(bike, car);
}

void get_largest_vehicule(vehicule a, vehicule b) {
    if (a.wheel_count > b.wheel_count) {
        printf("%s is the largest vehicule\n", a.model_name);
    }
    else if (a.wheel_count < b.wheel_count) {
        printf("%s is the largest vehicule\n", b.model_name);
    }
    else {
        printf("both vehicules are the same size\n");
    }
}
