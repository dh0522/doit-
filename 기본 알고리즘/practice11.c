#include <stdio.h>

int main() {
	int input;
	scanf("%d", &input);

	int i = 1;
	int result = 0;

	while (1)
	{
		if (input / i != 0)
		{
			result++;
			i = i * 10;
		}
		else	break;
	}
	printf("�� ���� %d�ڸ� �Դϴ�.\n", result);
}