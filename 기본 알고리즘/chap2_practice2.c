#include <stdio.h>
#include <stdlib.h>
int sumof(const int n[], int num)
{
	int i;
	int sum=0;
	for (i = 0; i < num; i++)
	{
		sum += n[i];
	}
	return sum;
}
int main() {
	int i;
	int *height;
	int num;
	printf("��� ��:");
	scanf("%d", &num);
	height = calloc(num, sizeof(int));

	printf("%d ��� Ű�� �Է��ϼ���\n",num);
	for (i = 0; i < num; i++)
	{
		printf("height[%d] : ",i);
		scanf("%d", &height[i]);
	}
	printf("%d���� Ű�� ���� %d�Դϴ�.", num, sumof(height, num));
	free(height);

	return 0;
}