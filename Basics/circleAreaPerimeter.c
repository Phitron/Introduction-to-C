#include <stdio.h>

int main(){
    double radius;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    const double PI = 3.14;
    double perimeter = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("Perimeter = %.2lf\n", perimeter);
    printf("Area = %.2lf\n", area);
    return 0;
}