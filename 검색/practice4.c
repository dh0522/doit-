#include <stdio.h>
#include <stdlib.h>
int binarysearch(int a[], int n, int key)
{
	int i;
	int pl, pr, pc;

	pl = 0;
	pr = n - 1;

	printf("   |");
	for (i = 0; i < n; i++)
	{
		printf("%4d", i);
	}
	printf("\n---+");
	for (i = 0; i < n; i++) printf("----", i);
	printf("--\n");
	do {
		pc = (pl + pr) / 2;
		printf("   |");
		for (i = 0; i < 4 * pl; i++)	printf("  ");
		printf("<-");
		for (i = 0; i < 4 * (pc - pl); i++)	printf(" ");
		printf("+");
		for (i = 0; i < 4 * (pr - pc) - 2; i++)	printf(" ");
		printf("-> \n");

		printf("%3d|", pc);
		for (i = 0; i < n; i++)
		{
			printf("%4d", a[i]);
		}
		printf("\n");

		if (a[pc] == key)
			return pc;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);

	return -1;
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

	idx = binarysearch(x, nx, ky);


	printf("%d는 x[%d]에 있습니다.", ky, idx);
	free(x);
	return 0;

}