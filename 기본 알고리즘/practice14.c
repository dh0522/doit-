#include <stdio.h>

int main() {
	int i, j;
	int input;
	printf("사각형을 출력합니다.\n");
	printf("입력할 수 : ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++) {
		for (j = 1; j <= input; j++)
			printf("*");
		printf("\n");
	}
}