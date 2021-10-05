#include <stdio.h>

int card_conv(unsigned x, int n, char d[])
{
	int num = 0;//�ڸ��� 
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
	int dno;//��ȯ �� �ڸ��� 
	char no[560];
	int retry;
	printf("10������ ��� ��ȯ�մϴ�.\n");
	do {
		printf("��ȯ�ϴ� ���� �ƴ� ����: ");
		scanf("%d", &input);
		do {
			printf("� ������ ��ȯ�ұ��? (2-36): ");
			scanf("%d", &kisoo);
		} while (kisoo < 2 || kisoo>36);

		dno = card_conv(input, kisoo, no);

		int i;
		for (i = 0; i < dno; i++)
		{

			printf("%c", no[i]);
		}
		printf("�Դϴ�.");
		printf("�ٽ� �ѹ� �� �ұ��? (yes =1 or no =0) : ");
		scanf("%d", &retry);
	} while (retry == 1);
}