/* Name : ARBAAZ SHAIKH
Branch :Mechanical F1
UIN : 251M014*/
#include<stdio.h>

void counter() {
	static int count = 0;
	count ++;
	printf("Count = %d\n", count);
}

int main() {
	counter();
	counter();
	counter();

	return 0;
}
