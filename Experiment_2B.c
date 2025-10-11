/*
Name: Arbaaz shaikh 
UIN : 251M014
*/
#include <stdio.h>

int main()
{   
        int num1, num2, i, sum = 0;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nOdd numbers between %d and %d are:\n", num1, num2);

    for (i = num1; i <= num2; i++) 
        if (i % 2 != 0) {
            printf("%d ", i);
            sum = sum + i;
    }
    printf("\n\nSum of odd numbers between %d and %d = %d\n", num1, num2, sum);
    return 0;
}
