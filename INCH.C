#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
} d1, d2, sumOfDistances;

int main()
{
    clrscr();
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%d", &d1.inch);

    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%d", &d2.inch);


    sumOfDistances.feet = d1.feet+d2.feet;
    sumOfDistances.inch = d1.inch+d2.inch;

    // If inch is greater than 12, changing it to feet.

    if (sumOfDistances.inch>12)
    {
	sumOfDistances.inch = sumOfDistances.inch-12;
	++sumOfDistances.feet;
    }

    printf("\nSum of distances = %d\'%.1d\"",sumOfDistances.feet, sumOfDistances.inch);
    getch();
    return 0;
}