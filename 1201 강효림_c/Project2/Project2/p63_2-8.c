#include <stdio.h>
void static_ex();  //1. 함수 static_ex()의 원형선언
int i = 1;
int main() {
	for (i; i <= 5; i++) //for반복문을 i<=5까지  반복수행
		static_ex();  //2. 함수static_ex()의 호출
	return 0;
}
void static_ex() { //3.함수 static_ex()의 정의
	static int sum = 0; //4.정적변수(static)사용
	sum = sum + 10; //5. sum 변수에 10을 합해 대입
	printf(" % d번 sum 값은 % d이다\n", i, sum);
}