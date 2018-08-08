#include <stdio.h>

char line [50];
int radius;
const float PI = 3.1415927;
float volume;

int main()
{
	printf("Enter the radius of the Sphere: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &radius);

	volume = (4.0/3.0) * PI * (radius * radius * radius);
	printf(" The volume is: %f\n", volume);
	
	return(0);
}
