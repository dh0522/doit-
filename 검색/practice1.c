#include <stdio.h>
#include <stdlib.h>

int search(int x[],int n,int find)
{
	int i;
	x[n] = find;
	for (i = 0; i < n; i++)
	{
		if (x[n] == x[i])	break;
	}
	return i==n?-1:i;
}
int main()
{
	int i, nx, ky, idx;
	int* x;
	puts("선형 검색(보초법)");
	printf("요소 개수: ");
	scanf("%d", &nx);
	x = calloc(nx+1, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}
	printf("검색값: ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if (idx == -1)	printf("검색에 실패했습니다.\n");
	else
	{
		printf("%d은(는) x[%d]에 있습니다.\n", ky, idx);
	}
	free(x);
}