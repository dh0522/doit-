//Q1 Ű�� �ּڰ� ���ϱ�

#include <stdio.h>
#include <stdlib.h>
int min(const int a[], int n)
{
	//n���� Ű��=a[] 
	int min;
	min = a[0];
	int i;
	for (i = 1; i < n; i++)
	{
		if (a[i] < min)	min = a[i];
	}
	return min;
}
int main() {
	int num;
	int* height;
	int i;

	printf("��� �� :");
	scanf("%d", &num);
	height = calloc(num, sizeof(int));

	printf("%d ����� Ű�� �Է��ϼ���.\n", num);
	for (i = 0; i < num; i++)
	{
		printf("height[%d]:", i);
		scanf("%d", &height[i]);
	}
	printf("�ּڰ��� %d�Դϴ�.\n", min(height, num));
	free(height);
	return 0;

}