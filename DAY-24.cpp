#include <stdio.h>
#include <time.h>
#define MAX 10000

int arr[MAX][MAX] = { 0 };

void rowMajor()
{

	int i, j;

	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++) {
			arr[i][j]++;
		}
	}
}

void colMajor()
{

	int i, j;
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++) {
			arr[j][i]++;
		}
	}
}

int main()
{
	int i, j;
	clock_t t = clock();
	rowMajor();
	t = clock() - t;
	printf("Row major access time :%f s\n",
		t / (float)CLOCKS_PER_SEC);

	t = clock();
	colMajor();
	t = clock() - t;
	printf("Column major access time :%f s\n",
		t / (float)CLOCKS_PER_SEC);
	return 0;
}
