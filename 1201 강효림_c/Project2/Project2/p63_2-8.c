#include <stdio.h>
void static_ex();  //1. �Լ� static_ex()�� ��������
int i = 1;
int main() {
	for (i; i <= 5; i++) //for�ݺ����� i<=5����  �ݺ�����
		static_ex();  //2. �Լ�static_ex()�� ȣ��
	return 0;
}
void static_ex() { //3.�Լ� static_ex()�� ����
	static int sum = 0; //4.��������(static)���
	sum = sum + 10; //5. sum ������ 10�� ���� ����
	printf(" % d�� sum ���� % d�̴�\n", i, sum);
}