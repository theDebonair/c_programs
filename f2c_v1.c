#include <stdio.h>

// conversion of fahrenheit values to celcius (using float data type)
void main() {
	
	// variables declaration
	int diff, max;
	int fah;
	float cel;
	
	// variables initialization
	diff = 20;
	max = 300;
	
	fah = 0;

	// loop to print incremented values
	while(fah <= max) {
		cel = (5.0 / 9.0) * (fah - 32.0);
		printf("%3d\t%3.2f\n", fah, cel);
		fah += diff;	// fah incremented by 20
	}
}
