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
	puts("���� �˻�(���ʹ�)");
	printf("��� ����: ");
	scanf("%d", &nx);
	x = calloc(nx+1, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}
	printf("�˻���: ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if (idx == -1)	printf("�˻��� �����߽��ϴ�.\n");
	else
	{
		printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, idx);
	}
	free(x);
}