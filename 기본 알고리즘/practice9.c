#include <stdio.h>
int sumof(int a, int b) {
	int i, sum = 0;
	if (a > b)
	{
		for (i = b; i <= a; i++) {
			sum += i;
		}
	}
	else {
		for (i = a; i <= b; i++) {
			sum += i;
		}
	}
	return sum;

}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int sum;
	sum = sumof(a, b);
	printf("�� �� ������ ���� %d�Դϴ�.\n", sum);
}