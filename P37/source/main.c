#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int linerSearch(const int array[], int key, int size);

int linerSearch(const int array[], int key, int size) {
	for (int n = 0; n < size; n++)
		if (array[n] == key)
			return n;
	return -1;
}

int main(void) {
	int x, searchKey, element, a[SIZE];

	for (x = 0; x < SIZE; x++)
		a[x] = 2 * x;

	printf("Enter integer search key:\n");
	scanf_s("%d", &searchKey);

	element = linerSearch(a, searchKey, SIZE);

	if (element != -1)
		printf("Found value in element %d\n", element);
	else
		printf("Value not found\n");

	system("pause");
	return 0;
}