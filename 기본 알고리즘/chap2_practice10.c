#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void shuffle(int a[], int n)
{
	int i, j;
	int tmp;
	srand(time(NULL));
	for (i = n - 1; i > 0; i--)
	{
		j = rand() % (i + 1);
		if (i != j)
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
}
int main() {
	int i;
	int* x;
	int nx;//��ڼ�

	printf("��Ұ��� : ");
	scanf("%d", &nx);

	x = calloc(nx, sizeof(int));
	printf("%d���� ������ �Է��ϼ���.\n");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = ", i);
		scanf("%d", &x[i]);
	}
	shuffle(x, nx);

	printf("��Ұ� ��� �ڼ������ϴ�.\n");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]=%d\n", i, x[i]);
	}
	free(x);
}