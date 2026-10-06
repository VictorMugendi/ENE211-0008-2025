#include <stdio.h>


#define PI 3.14159265
int main() {
    float r, area;

    printf("Enter your radius");
    scanf("%f", &r);

    area= 4 * PI * r * r;

    printf("The area of the sphere is: %f",area);

    return 0;

}
