#include <stdio.h>
extern int add(int x, int y); //�ٸ� �ҽ�����(test1.c)�� ����� �Լ�
extern int Num; //�ٸ��ҽ����� (test1.c)�� ����� ����

int main() {
	int a = 10;
	int b = 10;
	printf("%d\n", add(a, b)); //�Լ� add()�� ȣ�� �� ���

	return 0;
}