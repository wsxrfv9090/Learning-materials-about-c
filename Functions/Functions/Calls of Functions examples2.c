#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Code a function that can determine if a year is leap year


int LeapyearDEFINE(int x)
{
	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
		return 1;
	return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++);
	{
		if (LeapyearDEFINE(year) == 1)
		{
			printf("%d ", year);
		}
	}
	return 0;
}