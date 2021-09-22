#include <stdio.h>

void triangleRU(int n) {
	int i, j, l;
	int second = n;

	for (i = 1; i <= n; i++) {

		for (j = 1; j < i - 1; j++)
			printf(" ");

		for (j = second; j >= 1; j--)
			printf("*");
		second--;

		printf("\n");

	}


}

int main(void) {
	int n;//몇단?
	printf("몇 단 삼각형입니까? ");
	scanf("%d", &n);
	triangleRU(n);
}