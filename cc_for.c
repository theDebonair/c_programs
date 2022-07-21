// same program as cc_while.c but with "for" loop

#include <stdio.h>

int main() {
	long double count;

	for(count = 0; getchar() != EOF; ++count)
		;	// null statement because grammatical rules of C require that a for statement mt have a body. This isolated semicolon will do the work.
	printf("%.0Lf", count);

	return 0;
}
