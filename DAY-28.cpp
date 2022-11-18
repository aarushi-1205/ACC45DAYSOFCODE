// C++ program showing time difference
// in row major and column major access
#include <stdio.h>
#include <time.h>

// taking MAX 10000 so that time difference
// can be shown
#define MAX 10000

int arr[MAX][MAX] = { 0 };

void rowMajor()
{

	int i, j;

	// accessing element row wise
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++) {
			arr[i][j]++;
		}
	}
}

void colMajor()
{

	int i, j;

	// accessing element column wise
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++) {
			arr[j][i]++;
		}
	}
}

// driver code
int main()
{
	int i, j;

	// Time taken by row major order
	clock_t t = clock();
	rowMajor();
	t = clock() - t;
	printf("Row major access time :%f s\n",
		t / (float)CLOCKS_PER_SEC);

	// Time taken by column major order
	t = clock();
	colMajor();
	t = clock() - t;
	printf("Column major access time :%f s\n",
		t / (float)CLOCKS_PER_SEC);
	return 0;
}
