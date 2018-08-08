#include <stdio.h>

char line [50];
int kilometers;
float miles;
const float conversion = 0.6213712;

int main()
{
	printf("Enter the km/ph to convert to m/ph: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &kilometers);

	miles = kilometers*conversion;
	printf("%d km/ph is equal to: %f m/ph\n", kilometers ,miles);
	
	return(0);
}
