#include <stdio.h>

void triangleRB(int n) {
	int i, j;
	int second = n;

	for (i = 1; i <= n; i++) {

		for (j = n - i; j >= 1; j--)
			printf(" ");

		for (j = 1; j <= i; j++)
			printf("*");

		printf("\n");

	}


}

int main(void) {
	int n;//���?
	printf("�� �� �ﰢ���Դϱ�? ");
	scanf("%d", &n);
	triangleRB(n);
}