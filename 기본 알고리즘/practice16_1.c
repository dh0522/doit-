#include <stdio.h>

void triangleLU(int n) {
	int i, j;
	int second = n;
	for (i = 1; i <= n; i++) {
		for (j = second; j >= 1; j--)
			printf("*");
		printf("\n");
		second--;
	}


}

int main(void) {
	int n;//���?
	printf("�� �� �ﰢ���Դϱ�? ");
	scanf("%d", &n);
	triangleLU(n);
}