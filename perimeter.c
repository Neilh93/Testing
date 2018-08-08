#include <stdio.h>

char line [50];
float length;
float width;
float perimeter;

int main()
{
	printf("Enter the length and width of the Rectangle: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f %f", &length, &width);

	perimeter = 2*(length+width);
	printf("The perimeter is: %f\n", perimeter);
	
	return(0);
}
