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
	int n;//���?
	printf("�� �� �ﰢ���Դϱ�? ");
	scanf("%d", &n);
	triangleLB(n);
}