#include <stdio.h>

void spira(int n) {

	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)	printf(" ");

		for (j = 1; j <= 2 * i - 1; j++)	printf("*");
		printf("\n");
	}


}
int main() {
	int input;
	printf("���? : ");
	scanf("%d", &input);
	spira(input);
}