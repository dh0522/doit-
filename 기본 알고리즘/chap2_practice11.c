#include <stdio.h>
int mdays[][12] = {
	{31,28,31,30,31,30,31,31,30,31,30,31},
	{31,29,31,30,31,30,31,31,30,31,30,31}
};
int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}
int dayofyear(int y, int m, int d)
{
	//d=days;
	while (--m)
		d = d + mdays[isleap(y)][m - 1];
	return d;
}
int main() {
	int year, month, day;
	int retry;
	do {
		printf("년:");
		scanf("%d", &year);
		printf("월:");
		scanf("%d", &month);
		printf("일:");
		scanf("%d", &day);
		printf("%d년의 %d일째입니다.\n", year, dayofyear(year, month, day));
	} while (retry == 1);

}