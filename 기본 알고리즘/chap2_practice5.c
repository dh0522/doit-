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
		printf("a[%d]�� a[%d]�� ��ȯ�մϴ�.\n", i, n - i - 1);
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

	printf("��� ���� :");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d���� ������ �Է��ϼ���.\n", nx);
	for (i = 0; i < nx; i++)
	{
		scanf("%d", &x[i]);
	}
	ary_reverse(x, nx);


	free(x);
	printf("���� ������ �����մϴ�.");
	return 0;
}