#include <stdio.h>

int main() {
	int x = 1;
	printf("( 1) x=%d\n", ++x); 
	printf("( 2) x=%d\n", x);
	printf("( 3) x=%d\n", x--); 
	printf("( 4) x=%d\n", x);
	printf("( 5) x=%d\n", --x); 
	printf("( 6) x=%d\n", x);
	printf("( 7) x=%d\n", x++); 
	printf("( 8) x=%d\n", x);
	printf("( 9) x=%d\n", x--); 
	printf("(10) x=%d\n", x);
	printf("(11) x=%d\n", ++x); 
	printf("(12) x=%d\n", x);
	return 0;
}