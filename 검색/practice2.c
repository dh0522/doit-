#include <stdio.h>
#include <stdlib.h>
int p2_search(int x[], int n, int key)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("  |");
		printf("%3d", i);
		printf("\n---+-------------");
		if (key == x[i])	break;
	}
}
int main()
{
	int i, nx, ky, idx;
	int* x;
	printf("��� ����:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}
	printf("�˻���: ");
	scanf("%d", &ky);

	idx = p2_search(x, nx, ky);
	if (idx == -1)	printf("�˻� ����");
	else
	{
		printf("")
	}
}