#include <stdio.h>
#include <stdlib.h>
int long_cmp(const long* a, const long* b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}
int main() {
	int i, nx, ky;
	long* x;
	long* p;
	puts("bsearch�Լ��� ����Ͽ� �˻�");
	printf("��� ����:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(long));
	puts("������������ �Է��ϼ���.");
	for (i = 0; i < nx; i++)
	{
		printf("x[%ld]:", i);
		scanf("%ld", &x[i]);
	}
	printf("�˻���: ");
	scanf("%d", &ky);

	p = bsearch(&ky, x, nx, sizeof(int), (int(*)(const void*, const void*))long_cmp);
	printf("%d�� x[%d]�� �ֽ��ϴ�.", ky, (int)(p - x));
	free(x);
	return 0;
}