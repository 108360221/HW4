#include <stdio.h>
#include <stdlib.h>
#define SIZE 12

int main(void) {

	int i, total = 0, a[SIZE] = { 1,3,5,4,7,2,99,16,45,67,89,45 };

	for (i = 0; i < SIZE; i++) {
		total += a[i];
	}

	printf("Total of array element values is %d\n", total);

	system("pause");
	return 0;
}