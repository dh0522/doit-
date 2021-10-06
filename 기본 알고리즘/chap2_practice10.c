#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void shuffle(int a[], int n)
{
	int i, j;
	int tmp;
	srand(time(NULL));
	for (i = n - 1; i > 0; i--)
	{
		j = rand() % (i + 1);
		if (i != j)
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
}
int main() {
	int i;
	int* x;
	int nx;//요솟수

	printf("요소갯수 : ");
	scanf("%d", &nx);

	x = calloc(nx, sizeof(int));
	printf("%d개의 정수를 입력하세요.\n");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = ", i);
		scanf("%d", &x[i]);
	}
	shuffle(x, nx);

	printf("요소가 모두 뒤섞였습니다.\n");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]=%d\n", i, x[i]);
	}
	free(x);
}