#include <stdio.h>

int main(void)
{
	int x, y, z, max, mid, min;
	printf("3���� ���� �Է�: ");
	scanf("%d %d %d", &x, &y, &z);

	max = (x > y) ? (x > z) ? x : z : (y > z) ? y : z;

	min = (x < y) ? (x < z) ? x : z : (y < z) ? y : z;

	mid = (x != max && x != min) ? x : 
		(y != max && y != min) ? y : z;


	printf("max: %d\n", max);
	printf("mid: %d\n", mid);
	printf("min: %d\n", min);
	
	return 0;
}