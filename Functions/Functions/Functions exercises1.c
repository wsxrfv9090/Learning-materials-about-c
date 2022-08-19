//Reorder the string in the backwards order
//Code a function called "reverse_string(char* string)" with recursion
//Can't use library function.

//char reverse_string(char* str)
//{
//	if ()
//}
#include <stdio.h>
int main()
{
	char string[20] = { 0 };
	scanf_s("%s", string, 20);
	int size = sizeof string / sizeof string[0];
	printf("%d", size);
	//printf("%s", reverse_string(string));
	return 0;
}