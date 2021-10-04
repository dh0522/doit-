//Q1 키의 최솟값 구하기

#include <stdio.h>
#include <stdlib.h>
int min(const int a[], int n)
{
	//n명의 키들=a[] 
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

	printf("사람 수 :");
	scanf("%d", &num);
	height = calloc(num, sizeof(int));

	printf("%d 사람의 키를 입력하세요.\n", num);
	for (i = 0; i < num; i++)
	{
		printf("height[%d]:", i);
		scanf("%d", &height[i]);
	}
	printf("최솟값은 %d입니다.\n", min(height, num));
	free(height);
	return 0;

}