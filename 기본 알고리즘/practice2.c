#include <stdio.h>
int min3(int a, int b, int c) {
	int small;
	small = a;
	if (small > b)	small = b;
	if (small > c)	small = c;
	return small;
}

int main() {
	int a, b, c;
	int min;
	scanf("%d %d %d", &a, &b, &c);

	min = min3(a, b, c);
	printf("�� ���� �ּҰ��� %d�Դϴ�.\n", min);
}