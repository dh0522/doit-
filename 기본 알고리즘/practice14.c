#include <stdio.h>

int main() {
	int i, j;
	int input;
	printf("�簢���� ����մϴ�.\n");
	printf("�Է��� �� : ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++) {
		for (j = 1; j <= input; j++)
			printf("*");
		printf("\n");
	}
}