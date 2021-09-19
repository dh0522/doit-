#include <stdio.h>

int main(void) {
	int n;
	printf("정수를 입력하세요 : ");
	scanf("%d", &n);
	if (n > 0)	printf("이 정수는 양수 입니다.\n");
	else if (n < 0)	printf("이 정수는 음수 입니다.\n");
	else	printf("이 정수는 0 입니다.\n");

	return 0;
}