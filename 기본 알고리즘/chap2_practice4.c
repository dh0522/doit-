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
	printf("����� %d���̴�.\n", number);
	height = calloc(number, sizeof(int));
	for (i = 0; i < number; i++)
	{
		height[i] = 100 + rand() % 90;
		printf("height[%d]=%d\n", i, height[i]);
	}
	printf("���� Ű�� ū ����� %dcm�̴�.\n", maxof(height, number));
}