#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void) {

	int s[SIZE], j;

	for (j = 0; j < SIZE; j++) {
		s[j] = 2 + 2 * j;
	}

	printf("%s13%s\n", "Element", "Value");

	for (j = 0; j < SIZE; j++) {
		printf("%d%13d\n", j, s[j]);
	}

	system("pause");
	return 0;
}