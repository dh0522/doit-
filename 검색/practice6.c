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
	puts("bsearch함수를 사용하여 검색");
	printf("요소 개수:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(long));
	puts("오름차순으로 입력하세요.");
	for (i = 0; i < nx; i++)
	{
		printf("x[%ld]:", i);
		scanf("%ld", &x[i]);
	}
	printf("검색값: ");
	scanf("%d", &ky);

	p = bsearch(&ky, x, nx, sizeof(int), (int(*)(const void*, const void*))long_cmp);
	printf("%d는 x[%d]에 있습니다.", ky, (int)(p - x));
	free(x);
	return 0;
}