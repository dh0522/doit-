#include <stdio.h>
#include <stdlib.h>
int bin_search2(int a[], int n, int key)
{
	int i;
	int pl, pr, pc;
	int ans;
	pl = 0;
	pr = n - 1;

	do {

		pc = pl + pr / 2;

		if (a[pc] == key)
		{
			while (pc > pl && a[pc - 1] == key)
				pc--;
			return pc;
		}
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);


}

int main() {

	int i, nx, ky, idx;
	int* x;

	printf("요소 개수: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}
	printf("검색값:");
	scanf("%d", &ky);

	idx = bin_search2(x, nx, ky);
	printf("%d", idx);
	free(x);
	return 0;

}