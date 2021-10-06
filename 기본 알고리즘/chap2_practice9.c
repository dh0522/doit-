#include <stdio.h>
#include <stdlib.h>
void ary_rcopy(int a[], const int b[], int n)
{
	int i, tmp;
	for (i = 0; i < n; i++)
	{

		a[i] = b[n - i - 1];

	}

}
int main() {
	int n;
	int* a, * b;

	printf("요소 개수는? ");
	scanf("%d", &n);
	a = calloc(n, sizeof(int));
	b = calloc(n, sizeof(int));

	int i;
	printf("%d개의 정수를 입력하세요.\n", n);
	for (i = 0; i < n; i++)
	{
		printf("b[%d]: ", i);
		scanf("%d", &b[i]);
	}
	ary_rcopy(a, b, n);
	printf("배열 b의 원소를 배열a에 모두 복사했습니다.\n");
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}

	free(b);
	free(a);
}