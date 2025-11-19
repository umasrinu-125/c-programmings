#include <stdio.h>

int main()
 {
    int s1, s2, s3, s4, s5, sum;
    float average;
    printf("Enter s1, s2, s3, s4, s5 values: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    sum = s1 + s2 + s3 + s4 + s5;
    printf("Sum = %d", sum);
    average = sum / 5.0;
    printf("Average = %.2f", average);
    return 0;
}
