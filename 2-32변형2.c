#include <stdio.h>
int main() {
	int se, num;
	printf("������ ������? \n");
	printf("������ ��ȣ��? \n");
	scanf_s("%d%d", &se, &num);
	
	if (se<=5)
		if (num >= 0)
			printf("���� ����\n");
		else
			printf("���� �Ұ���");
	else
		printf("�߸��Է��ϼ̽��ϴ�.");
	return 0;
}