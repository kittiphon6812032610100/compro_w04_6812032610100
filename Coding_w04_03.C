#include <stdio.h>

int main() {
    char nameInitial = 'K';
    int age =18;
    float weight = 55.5;
    char gender[] = "Male";

    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n",age);
    printf("weight = %.2f\n", weight);
    printf("gender = %s\n", gender);

    return 0;
}