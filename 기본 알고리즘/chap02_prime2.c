#include <stdio.h>

int main() {
	int i, n;
	int prime[500];
	int ptr = 0;//이미 얻은 소수의 개수
	unsigned long counter = 0;//나눗셈 횟수
	prime[ptr++] = 2;//prime[0]=2;
	for (n = 3; n <= 1000; n += 2)
	{
		for (i = 1; i < ptr; i++)
		{
			counter++;
			if (n % prime[i] == 0)	break;
		}
		if (ptr == i)
			prime[ptr++] = n;
	}
	for (i = 0; i < ptr; i++)	printf("%d\n", prime[i]);
	printf("나눗셈을 실행한 횟수 : %lu\n", counter);
}