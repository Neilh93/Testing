#include <stdio.h>
char line [100];
int celsius;
int fahrenheit;

int main()
{
	printf("Enter the degrees in Celsius you wish to convert to fahrenheit: ");
	
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%d", &celsius);
	
	fahrenheit = celsius * 9/5 + 32;
	printf(" The temperature in Fahrenheit is: %d\n", fahrenheit);
	
	return(0);
}
