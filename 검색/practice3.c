#include <stdio.h>
#include <stdlib.h>

int searchidx(const int a[], int n, int key, int idx[])
{
	int i;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == key) {

			idx[j] = i;
			j++;
		}
	}
	return j;
}
int main(void) {

	int nx, i, ky, no;
	int* x;
	int* idx;//배열 idx;; 
	printf("요소 개수 :");
	scanf("%d", &nx);


	x = calloc(nx, sizeof(int));
	idx = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}
	printf("검색값:");
	scanf("%d", &ky);

	no = searchidx(x, nx, ky, idx);

	if (no == -1)
		printf("error!");
	else {

		printf("%d\n", no);
		for (i = 0; i < no; i++)
			printf("x[%d] ", idx[i]);
	}
	free(x);
	free(idx);

	return 0;
}