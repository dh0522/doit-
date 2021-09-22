#include <stdio.h>

void triangleLB(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

}

int main(void) {
	int n;//몇단?
	printf("몇 단 삼각형입니까? ");
	scanf("%d", &n);
	triangleLB(n);
}