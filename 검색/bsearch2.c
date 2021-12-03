#include <stdio.h>
#include <stdlib.h>

int int_cmpr(const int* a, const int* b) {
	if (*a < *b)
		return 1;
	else if (*a > *b)
		return -1;
	else
		return 0;
}
int main() {
	int i, nx, ky;
	int* x;
	int* p;
	puts("bsearch함수를 사용하여 검색");
	printf("요소 개수:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	puts("내림차순으로 입력하세요.\n");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}
	printf("검색값:");
	scanf("%d", &ky);

	p = bsearch(&ky,
		x,
		nx,
		sizeof(int),
		(int(*)(const void*, const void*))int_cmpr
	);

	printf("%d는 x[%d]에 있습니다.", ky, (int)(p - x));
	free(x);

	return 0;
}