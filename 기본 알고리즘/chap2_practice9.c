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

	printf("��� ������? ");
	scanf("%d", &n);
	a = calloc(n, sizeof(int));
	b = calloc(n, sizeof(int));

	int i;
	printf("%d���� ������ �Է��ϼ���.\n", n);
	for (i = 0; i < n; i++)
	{
		printf("b[%d]: ", i);
		scanf("%d", &b[i]);
	}
	ary_rcopy(a, b, n);
	printf("�迭 b�� ���Ҹ� �迭a�� ��� �����߽��ϴ�.\n");
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}

	free(b);
	free(a);
}