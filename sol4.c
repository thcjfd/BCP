#include <stdio.h>
void main()
{
	char c1, c2;
	// (1)번
	for (c1 = 'A'; c1 <= 'Z'; c1++) {
		for (c2 = 'A'; c2 <= c1; c2++) {
			printf("%c", c2);
		}
		printf("\n");
	}

	printf("\n");

	//(2)번
	for (c1 = 'Z'; c1 >= 'A'; c1--) {
		for (c2 = 'A'; c2 <= c1; c2++) {
			printf("%c", c2);
		}
		printf("\n");
	}

	printf("\n");

	//(3)번
	for (c1 = 'Z'; c1 >= 'A'; c1--) {
		for (c2 = 'Z'; c2 >= c1; c2--) {
			printf("%c", c2);
		}
		printf("\n");
	}

	printf("\n");

	//(4)번
	for (c1 = 'A'; c1 <= 'Z'; c1++) {
		for (c2 = 'Z'; c2 >= c1; c2--) {
			printf("%c", c2);
		}
		printf("\n");
	}

	printf("\n");


}