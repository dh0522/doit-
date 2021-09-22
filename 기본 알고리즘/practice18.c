#include<stdio.h>

void nrpira(int n)
{
	int i, j;
	int second;
	second = n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
			printf(" ");

		for (j = 1; j <= 2 * second - 1; j++)
		{
			printf("%d", i % 10);
		}
		second--;
		printf("\n");
	}
}

int main() {
	int input;
	printf("¸î´Ü?");
	scanf("%d", &input);
	nrpira(input);
}