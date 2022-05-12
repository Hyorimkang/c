#include <stdio.h>
extern int add(int x, int y); //다른 소스파일(test1.c)에 선언된 함수
extern int Num; //다른소스파일 (test1.c)에 선언된 변수

int main() {
	int a = 10;
	int b = 10;
	printf("%d\n", add(a, b)); //함수 add()의 호출 및 출력

	return 0;
}