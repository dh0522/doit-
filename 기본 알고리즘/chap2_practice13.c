#include <stdio.h>

typedef struct {
	int y;
	int m;
	int d;
}Date;

static int mdays[2][12] = {
			{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
			{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};
int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}
Date DateOf(int y, int m, int d)
{
	Date temp;

	temp.y = y;
	temp.m = m;
	temp.d = d;

	return temp;

}

Date After(Date x, int n)
{

	x.d = x.d + n;
	while (x.d > mdays[isleap(x.y)][x.m - 1])
	{
		x.d = x.d - mdays[isleap(x.y)][x.m - 1];
		x.m++;
		if (x.m > 12)
		{
			x.y++;
			x.m = 1;
		}
	}
	return x;
}
Date Before(Date x, int n)
{
	x.d = x.d - n;
	while (x.d < 1)
	{
		x.d = mdays[isleap(x.y)][x.m - 1] + x.d;
		x.m--;
		if (x.m == 0)	x.m = 12;
	}
	return x;
}
int Print(Date x)
{
	int y, m, d;
	y = x.y;
	m = x.m;
	d = x.d;

	printf("%d년 %d월 %d일\n", y, m, d);
}
int main() {
	int year, month, day;
	int n;
	Date x;
	printf("날짜를 입력하세요.\n");
	printf("년 : ");	scanf("%d", &year);
	printf("월: ");		scanf("%d", &month);
	printf("일 : ");	scanf("%d", &day);

	x = DateOf(year, month, day);

	printf("며칠  앞 뒤? "); scanf("%d", &n);

	printf("%d일 뒤의 날짜:", n);	Print(After(x, n));	printf("\n");
	printf("%d일 뒤의 날짜:", n);	Print(Before(x, n));	printf("\n");

}