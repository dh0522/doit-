#include <stdio.h>
int med13(int a, int b, int c) {
	if (a >= b)
	{
		if (b >= c)	return b;
		else if (a <= c)	return a;
		else return c;
	}
	else if (c <= a)	return a;
	else if (b > c)	return c;
	else return b;
}

int main() {
	int a, b, c;
	int med;
	scanf("%d %d %d", &a, &b, &c);
	med = med13(a, b, c);
	printf("중앙값은 %d입니다.\n", med);

}