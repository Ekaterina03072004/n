#include <stdio.h>

int ft_isalpha(int character) {
	int n;

	n = 0;
	if (character >= 65 && character <=90)
		n=1024;
	if (character >= 97 && character <=122)
		n=2;
		return n;
}		

