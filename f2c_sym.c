#include <stdio.h>

// using symbolic constants
#define LOWER 0
#define UPPER 300
#define STEP 20

void main() {
	for(int fahr = LOWER; fahr <= UPPER; fahr += STEP) printf("%3d°\t%6.2f°\n", fahr, (5.0/9.0)*(fahr-32.0));
}
