# include <stdio.h>
#include<math.h>
int main() {
	int a, rem, sum = 0;;
	scanf("%d", &a);
	while (a--) {

		int num;
		scanf("%d", &num);
		while(n!=0) {
			rem = num % 10;
			sum = sum * 10 + rem;
			num = num / 10;
		}
		printf("%d\n", sum);
		sum = 0;

		}
	return 0;

	}

