#include <stdio.h>
int main() {
	int h, n;
	int i, j;
	printf("���簢���� ����մϴ�.\n");
	printf("���� : ");
	scanf("%d", &h);
	printf("�ʺ� : ");
	scanf("%d", &n);

	for (i = 1; i <= h; i++) {
		for (j = 1; j <= n; j++)
			printf("*");
		printf("\n");
	}
}