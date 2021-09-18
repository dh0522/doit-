#include <stdio.h>

int min4(int a, int b, int c, int d) {
	int mini;
	mini = a;
	if (mini > b)	mini = b;
	if (mini > c)	mini = c;
	if (mini > d)	mini = d;
	return mini;
}
int main() {
	int a, b, c, d;
	int min;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	min = min4(a, b, c, d);

	printf("네개의 숫자 중 가장 작은 값은 %d입니다.\n", min);
}