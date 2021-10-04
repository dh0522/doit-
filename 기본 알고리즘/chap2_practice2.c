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
	printf("사람 수:");
	scanf("%d", &num);
	height = calloc(num, sizeof(int));

	printf("%d 사람 키를 입력하세요\n",num);
	for (i = 0; i < num; i++)
	{
		printf("height[%d] : ",i);
		scanf("%d", &height[i]);
	}
	printf("%d명의 키의 합은 %d입니다.", num, sumof(height, num));
	free(height);

	return 0;
}