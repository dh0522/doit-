#include <stdio.h>
int main() {
	int h, n;
	int i, j;
	printf("직사각형을 출력합니다.\n");
	printf("높이 : ");
	scanf("%d", &h);
	printf("너비 : ");
	scanf("%d", &n);

	for (i = 1; i <= h; i++) {
		for (j = 1; j <= n; j++)
			printf("*");
		printf("\n");
	}
}