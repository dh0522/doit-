#include <stdio.h>
#include <stdlib.h>
int search(int a[], int n, int key)
{
	int i = 0;
	a[n] = key;//���� �߰�
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
	puts("���� �˻�(���ʹ�)");
	printf("��� ����: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}
	printf("�˻���:");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if (idx == -1)	printf("�˻� ����");
	else	 printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, idx);
	free(x);
}