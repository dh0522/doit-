#include <stdio.h>
#include <stdlib.h>
double aveof(const int a[], int n)
{
	int i;
	double sum = 0;
	double ave = 0;
	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}
	ave = sum / n;
	return ave;
}
int main() {
	int i;
	int* height;
	int num;
	printf("��� ��:");
	scanf("%d", &num);
	height = calloc(num, sizeof(int));

	printf("%d ��� Ű�� �Է��ϼ���\n", num);
	for (i = 0; i < num; i++)
	{
		printf("height[%d] : ", i);
		scanf("%d", &height[i]);
	}
	printf("%d���� Ű�� ����� %f�Դϴ�.", num, aveof(height, num));
	free(height);

	return 0;
}