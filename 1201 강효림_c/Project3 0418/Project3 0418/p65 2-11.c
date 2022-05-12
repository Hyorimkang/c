#include <stdio.h>
const int var = 4; // 상수변수 var 선언과 초기화
int main(void)
{
	int i = 5, add = 0;
	add = i + var; // 상수 변수 var사용
	printf("add=%d\n", add); //출력
	return 0;
}
