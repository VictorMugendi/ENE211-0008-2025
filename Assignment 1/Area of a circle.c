#include <stdio.h>


#define PI 3.14159265
int main() {
    float r, area;

    printf("Enter your radius");
    scanf("%f", &r);

    area= PI * r * r;

    printf("The area of the circle is: %f",area);

    return 0;

}
