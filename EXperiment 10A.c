/* Name : ARBAAZ SHAIKH
  Branch : Mechanical F1
  UIN:- 251M014 */
#include <stdio.h>
int main() {
    int num1, num2, sum; // Declare integer variables
    int *ptr1, *ptr2;    // Declare integer pointer variables

    // Assign the addresses of num1 and num2 to ptr1 and ptr2 respectively
    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter the first number: ");
    scanf("%d", ptr1); // Read the first number into the location pointed by ptr1

    printf("Enter the second number: ");
    scanf("%d", ptr2); // Read the second number into the location pointed by ptr2

    // Dereference the pointers to get the values and add them
    sum = *ptr1 + *ptr2;

    printf("The sum of the two numbers is: %d\n", sum);

    return 0;
}
