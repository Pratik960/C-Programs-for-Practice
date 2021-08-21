#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Area and Circumference of a Circle

    printf("The Are Of Circle..\n");

    float radius;
    float pi = 3.14;

    printf("Please Enter Radius Of Circle : \n");
    scanf("%f", &radius);

    printf("The Area Of Circle Is : %f\n\n", pi*radius*radius);

    printf("The Circumference Of Circle..\n");
    
    printf("The Circumference Of Circle Is : %f\n", 2*pi*radius);

    
    return 0;
}
