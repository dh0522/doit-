#include <stdio.h>

int main() {
	int i, n;
	int prime[500];
	int ptr = 0;//ÀÌ¹Ì ¾òÀº ¼Ò¼öÀÇ °³¼ö
	unsigned long counter = 0;//³ª´°¼À È½¼ö
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
	printf("³ª´°¼ÀÀ» ½ÇÇàÇÑ È½¼ö : %lu\n", counter);
}