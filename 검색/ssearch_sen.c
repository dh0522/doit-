#include <stdio.h>
#include <stdlib.h>
int search(int a[], int n, int key)
{
	int i = 0;
	a[n] = key;//보초 추가
	while (1)
	{
		if (a[i] == key)	break;
		i++;
	}
	return i == n ? -1 : i;
}
int main(void)
{
	int i, nx, ky, idx;
	int* x;
	puts("선형 검색(보초법)");
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
	idx = search(x, nx, ky);
	if (idx == -1)	printf("검색 실패");
	else	 printf("%d는(은) x[%d]에 있습니다.\n", ky, idx);
	free(x);
}