#include <stdio.h>

int main()
{
	int i, n;
	unsigned long counter = 0;
	for (n = 2; n <= 1000; n++)
	{
		for (i = 2; i < n; i++)
		{
			counter++;
			if (n % i == 0)	break;
		}
		if (n % i == 0)	printf("%d\n", n);
	}
	printf("�������� ������ Ƚ�� : %lu\n", counter);
}