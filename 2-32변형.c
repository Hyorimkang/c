#include <stdio.h>
int main() {
	int color;
	printf("출입증 색깔은? \n");
	scanf_s("%d", &color);
	if (color <= 10)
		printf("노란색-A방 \n");
	else if (color <= 20)
		printf("파란색-B방 \n");
	else if (color <= 30)
		printf("빨간색-C방 \n");
	else
		printf("잘못입력하셨습니다.");
	return 0;
}