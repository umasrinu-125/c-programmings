#include <stdio.h>
int main()
 {
    float f, c;
    printf("Enter the value of Fahrenheit (f): ");
    scanf("%f", &f);
    c = (f - 32) / 1.8;
    printf("Celsius (c) = %.2f", c);
    return 0;
}
