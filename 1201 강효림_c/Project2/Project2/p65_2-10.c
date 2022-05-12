#include <stdio.h>
int main(void) {
	register int i;//레지스터 변수 i선언
	int sum = 0;
	for (i = 1; i <= 10; i++)
		sum = sum + i; //레지스터 변수 i사용
	printf("1에서 10까지의 합=%d\n", sum); //출력
	return 0;
}