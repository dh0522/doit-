#include <stdio.h>

int card_conv(unsigned x, int n, char d[])
{
	int num = 0;//자릿수 
	char dchar[] = { "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	if (x == 0)	d[num++] = dchar[0];
	else
	{
		while (x)
		{
			printf("%2d|%7d  -- %c\n", n, x, dchar[x % n]);
			printf("  +--------\n");

			d[num++] = dchar[x % n];
			x = x / n;
		}
		printf("%12d\n", x / n);
	}
	int tmp;
	int i;
	for (i = 0; i < num / 2; i++)
	{
		tmp = d[i];
		d[i] = d[num - i - 1];
		d[num - i - 1] = tmp;
	}
	return num;
}
int main() {
	unsigned input;
	int kisoo;
	int dno;//변환 후 자릿수 
	char no[560];
	int retry;
	printf("10진수를 기수 변환합니다.\n");
	do {
		printf("변환하는 음이 아닌 정수: ");
		scanf("%d", &input);
		do {
			printf("어떤 진수로 변환할까요? (2-36): ");
			scanf("%d", &kisoo);
		} while (kisoo < 2 || kisoo>36);

		dno = card_conv(input, kisoo, no);

		int i;
		for (i = 0; i < dno; i++)
		{

			printf("%c", no[i]);
		}
		printf("입니다.");
		printf("다시 한번 더 할까요? (yes =1 or no =0) : ");
		scanf("%d", &retry);
	} while (retry == 1);
}