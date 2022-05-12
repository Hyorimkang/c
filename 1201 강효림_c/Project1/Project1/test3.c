#include <stdio.h>
int main() {
	int a;        //변수명 a,b를 선언
	int b;
	a = 5;     //변수에 값을 초기화
	b = 10;
	a = b;    //a변수의 저장값을 b변숫값으로 치환 저장
	printf("a값은 %d입니다.\n", a);   //변수 a의 값을 출력
	return 0;

}