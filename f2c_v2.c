#include <stdio.h>

// conversion of celcius values to fahrenheit(using float data type)
void main() {
	
	// variables declaration
	int diff, max;
	int cel;
	float fah;
	char ch = 248;	// to print Degree symbol
	
	// variables initialization
	diff = 20;
	max = 300;
	
	cel = 0;

	printf("A Celcius to Fahrenheit conversion table (upto 300 %cC:\n", ch);

	// loop to print incremented values
	while(cel <= max) {
		fah = ((9.0 / 5.0) * cel) + 32.0;
		printf("%3d\t%5.1f\n", cel, fah);
		cel += diff;	// cel incremented by 20
	}
}
