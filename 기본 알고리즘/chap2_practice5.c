#include <stdio.h>
void ary_reverse(int a[], int n)
{
	int i, j;
	int tmp = 0;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		printf("a[%d]와 a[%d]를 교환합니다.\n", i, n - i - 1);
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}

int main()
{
	int i;
	int* x;
	int nx;

	printf("요소 개수 :");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d개의 정수를 입력하세요.\n", nx);
	for (i = 0; i < nx; i++)
	{
		scanf("%d", &x[i]);
	}
	ary_reverse(x, nx);


	free(x);
	printf("역순 정렬을 종료합니다.");
	return 0;
}