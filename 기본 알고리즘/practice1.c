#include <stdio.h>

int max4(int a, int b, int c, int d) {
	 
	int big;
	big = a;
	if (b > big)	big = b;
	if (c > big)	big = c;
	if (d > big)	big = d;
	return big;


}


int main() {
	int a, b, c, d;
	int max;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	max = max4(a, b, c, d);
	printf("네 값중 최대값은 %d입니다.\n", max);
}