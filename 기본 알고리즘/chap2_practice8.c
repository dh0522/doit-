#include <stdio.h>
#include <stdlib.h>
void ary_copy(int a[], const int b[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
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
	ary_copy(a, b, n);
	printf("�迭 b�� ���Ҹ� �迭a�� ��� �����߽��ϴ�.\n");
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}

	free(b);
	free(a);
}