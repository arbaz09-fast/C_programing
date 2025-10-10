/*Name : Arbaaz shaikh
UIN :251M014*/
#include <stdio.h>
int main ()
{
float phy, chem, math, avg;

    printf("Enter Physics marks: ");
    scanf("%f", &phy);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chem);

    printf("Enter Math marks: ");
    scanf("%f", &math);

    avg = (phy + chem + math) / 3.0;
    printf("\nAverage Marks = %.2f\n", avg);

    (avg >= 50) ? printf("Eligible for Admission\n") : printf("Not Eligible for Admission\n");
    
    return 0;
}  
