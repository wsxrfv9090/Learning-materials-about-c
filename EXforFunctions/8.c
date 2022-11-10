#include "a.h"
#include <stdio.h>

int main()
{
	char are[] =  "0123456\0";
	TEST(are);
	printf("%s", are);
	return 0;
}