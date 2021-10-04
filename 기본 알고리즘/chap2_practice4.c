#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int maxof(const int a[], int n)
{
	int i;
	int max;
	max = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > max)	max = a[i];
	}
	return max;
}
int main()
{
	int i;
	int number;
	int* height;

	srand(time(NULL));

	number = 5 + rand() % 16;
	printf("사람은 %d명이다.\n", number);
	height = calloc(number, sizeof(int));
	for (i = 0; i < number; i++)
	{
		height[i] = 100 + rand() % 90;
		printf("height[%d]=%d\n", i, height[i]);
	}
	printf("가장 키가 큰 사람은 %dcm이다.\n", maxof(height, number));
}