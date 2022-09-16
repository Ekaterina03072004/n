#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int ch) {
	int n;


	if (ch >= '0' && ch <= '9' && ch < 177 || ch < -9997)
		n = 2048;
	else
		n = 0;
	return n;
}

int main(void) {
	int i;
	int n;
	int m;

	i = -10000;
	while (i < 10000) {
		n = isdigit(i);
		m = ft_isdigit(i);
		if (n != m) {
			printf("Error: %d - %c\n standart - %d\nft - %d\n", i, i, n, m);
			return -1;
		}
		i = i + 1;
	}

	printf("%d\n",i);
	return 0;
}