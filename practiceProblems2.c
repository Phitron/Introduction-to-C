#include <stdio.h>

int main(){
    //Problem 1
    printf("Name: Samiun Black");
    printf("DOB: August 6, 1975");
    printf("Mobile: 01769762176");

    //Problem 2
    int a, b;
    printf("Input the first integer: ");
    scanf("%d", &a);
    printf("Input the second integer: ");
    scanf("%d", &b);

    printf("Product of the above two integers = %d", a * b);

    //Problem 3
    int c, d;
    printf("First number: ");
    scanf("%d", &c);
    printf("Second number: ");
    scanf("%d", &d);

    printf("Sum = %d\n", c + d);
    printf("Difference = %d\n", c - d);
    printf("Product = %d\n", c * d);
    printf("Quotient = %d\n", c / d);
    printf("Modulus = %d\n", c % d);

    //Problem 4
    float P;  int T;
    float R;
    
    printf("Enter principle: ");
    scanf("%f", &P);

    printf("Enter time: ");
    scanf("%d", &T);

    printf("Enter rate: ");
    scanf("%f", &R);

    float SI =  (P * T * R) / 100.00;

    printf("Simple Interest = %f\n", SI);
    printf("Principal + Interest = %.1f", P + SI );

    //Problem 5
    float number;
    
    printf("Enter Number: ");
    scanf("%f", &number);

    printf("Integer part: %d\n", (int) number);
    printf("Real part: %f", number - (int) number);

    //Problem 6
    int workingHours, salaryPerHour;

    printf("Input the working hrs: ");
    scanf("%d", &workingHours);

    printf("Salary amount/hr: ");
    scanf("%d", &salaryPerHour);

    printf("Salary = %.2f", (double) (workingHours * salaryPerHour));

    //Problem 7
    int celsius;

    printf("Enter temperature in Celsius = ");
    scanf("%d", &celsius);

    double farenheit = ((9.0/5.0) * celsius ) + 32.0;

    printf("Temperature in Farenheit = %.1lf F", farenheit);

    //Problem 8
    int temp;
    printf("Temperature in farenheit = ");
    scanf("%d", &temp);

    double temp_celsius = (temp - 32.0) * (5.0/9.0);

    printf("Temperature in celsius = %.2lf C", temp_celsius);

    //Problem 9
    int day, month, year;
    
    printf("Input no. of days: ");
    scanf("%d", &day);

    year = day / 365;
    day -= year * 365;

    month = day / 30;
    day -= month * 30;

    printf("%d Year(s)\n%d Month(s)\n%d Day(s)", year, month, day);

    //Problem 10
    int weight1, amount1, weight2, amount2;

    printf("Weight - Item1: ");
    scanf("%d", &weight1);
    
    printf("No. of item1: ");
    scanf("%d", &amount1);

    printf("Weight - Item2: ");
    scanf("%d", &weight2);
    
    printf("No. of item2: ");
    scanf("%d", &amount2);

    int total_weight1 = weight1 * amount1;
    int total_weight2 = weight2 * amount2;

    double totalWeight = total_weight1 + total_weight2;
    double totalAmount = amount1 + amount2;

    printf("Average Value = %lf", totalWeight/totalAmount);

    return 0;
}