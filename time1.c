#include <stdio.h>

char line [50];
int hours;
int minutes;
int totalMinutes;

int main()
{
	printf("Enter the number of hours and minutes: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &hours, &minutes);
	
	totalMinutes = (hours * 60) + minutes;
	printf("%d h and %d min is : %d minutes\n", hours ,minutes, totalMinutes);
	
	return(0);
}
