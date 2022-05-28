#include <stdio.h>
int main() {
	int color;
	printf("출입증 색깔은? (1:노란색 2:파란색 3:빨간색)\n");
	scanf_s("%d", &color);
	switch (color) {
	 case 1: printf("노란색: A방\n"); break;
	 case 2: printf("파란색 : B방\n"); break;
	 case 3: printf("빨간색 : C방\n"); break;
	 default:printf("다시 입력하세요.\n");

	}
	return 0;
}