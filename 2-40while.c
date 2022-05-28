#include <stdio.h>
int main() {
	int j, i = 1;
	while(i <= 9) {
		j = 8;
		while( j <= 9 ) {
			printf("%d*%d=%2d\t", j, i, j * i);
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}