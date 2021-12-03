#include <stdio.h>
#include <stdlib.h>
int int_cmp(const int* a, const int* b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}
int main(void) {
	int i, nx, ky;
	int* x;
	int* p;
	puts("bsearch �Լ��� ����Ͽ� �˻� ");
	printf("��� ����:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	puts("������������ �Է��ϼ���.");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}
	printf("�˻���:");
	scanf("%d", &ky);
	p = bsearch(&ky,
		x,
		nx,
		sizeof(int),
		(int(*)(const void*, const void*)) int_cmp
	);
	if (p == NULL)
		printf("�˻��� �����߽��ϴ�.");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�.", ky, (int)(p - x));
	free(x);

	return 0;
}