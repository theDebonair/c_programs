#include <stdio.h>

void main() {
	int fahr;
	
	// using for loop to print reverse of fahr to cel table
	for(fahr = 300; fahr>=0; fahr -= 20) {
		printf("%3d°\t%6.2f°\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
