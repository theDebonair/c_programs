// PG 20, 1.5.2 Char. Counting

#include <stdio.h>

int main() {
	long count;

	count = 0;
	while(getchar() != EOF)
		++count;

	printf("%ld\n", count);		// to invoke EOF in terminal, use Ctrl + D

	return 0;
}
