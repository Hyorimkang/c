#include <stdio.h>
int main() {
	int se, num;
	printf("출입증 순서는? \n");
	printf("출입증 번호는? \n");
	scanf_s("%d%d", &se, &num);
	
	if (se<=5)
		if (num >= 0)
			printf("입장 가능\n");
		else
			printf("입장 불가능");
	else
		printf("잘못입력하셨습니다.");
	return 0;
}