#include <stdio.h>
int main ()
{   
    //Problem 1:

    printf ("Testing...");
    printf ("....1");
    printf ("...2");
    printf ("..3");
    printf ("\n");

    //Output: Testing.......1...2..3

    //Problem 2:
    int sum;
    /* COMPUTE RESULT */
    sum = 25  + 37 - 19;
    /*DISPLAY RESULTS*/
    printf("The answer is %d\n", sum);

    //Problem 3:
    printf("%*s", 1,"Hello\n");
    printf("%*s", 6,"nice\n");
    printf("%*s", 6, "to\n");
    printf("%*s", 6, "meet\n");
    printf("%*s", 6, "you\n");

    //Problem 4:
    int Int;
    int Calloc;
    int floating;
    int ReInitialize;
    int Xx;
    int _1312;
    int _;
    int alpha_beta_routine;
    int z;
    int A$;

    //Problem 5:
    int x, y;
    scanf("%d %d", &x, &y);
    if (y == 0){
        printf("MATH ERROR\n");
    }
    else{
        printf("%d\n", x/y);
    }

    //Output: divides x by y

    
    //Problem 6:
    int height;
    printf("Enter height in inches: ");
    scanf("%d", &height);
    int feet = height/12;
    int remainderInches = height % 12;

    printf("Your height is %d feet %d inches", feet, remainderInches);

    //Problem 7:
    int heightRectangle;
    int widthRectangle;

    printf("Enter height of rectangle: ");
    scanf("%d", &heightRectangle);
    printf("Enter width of rectangle: ");
    scanf("%d", &widthRectangle);

    int area = heightRectangle * widthRectangle;
    int perimeter = 2 * (heightRectangle + widthRectangle);

    printf("Area is %d\n", area);
    printf("Perimeter is %d\n", perimeter);

    return 0;

}