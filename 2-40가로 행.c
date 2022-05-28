#include <stdio.h>
int main() {
	int m, n = 8;
	printf("----------------\n");
		
	while (n <= 9) {
		m = 1;
		printf("\n");
		while (m <= 9) {
			printf("%d*%d=%2d\t",  n, m, n* m);
			m++;
			
		}
		
		n++;
	}

	return 0;
}