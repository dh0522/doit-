#include <stdio.h>
#include "IntStack.h"

int main(void) {
	IntStack s;
	if (Initialize(&s, 64) == -1) {
		puts("스택 생성에 실패하였습니다.");
		return 1;
	}
	while (1) {
		int menu, x;
		printf("현재 데이터 수 : %d / %d \n", Size(&s), Capacity(&s));
		printf("(1)푸쉬 (2)팝 (3)피크 (4)출력 (0)종료: ");
		scanf("%d", &menu);

		if (menu == 0)	break;
		switch (menu) {
		case 1://푸쉬
			printf("데이터:");
			scanf("%d", &x);
			if (Push(&s, x) == -1)
				puts("푸쉬에 실패하셨습니다.\n");
			break;
		case 2://팝
			if (Pop(&s, &x) == -1)
				puts("팝에 실패하셨습니다.\n");
			else
				printf("팝 데이터는 %d입니다.\n", x);
			break;
		case 3://피크
			if (Peek(&s, &x) == -1)
				puts("피크에 실패하셨습니다.\n");
			else
				printf("피크 데이터는 %d입니다.\n", x);
			break;
		case 4:
			Print(&s);
			break;
		}
	}
	Terminate(&s);
	return 0;
}