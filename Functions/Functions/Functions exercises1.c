//////Reorder the string in the backwards order
//////Code a function called "reverse_string(char* string)" with recursion
//////Can't use library function.
////
////NORMAL WAYS OF DOING IT
////#include <stdio.h>
////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
////void reverse_string(char* str)
////{
////	int left = 0;
////	int right = my_strlen(str) - 1;
////	while (left < right)
////	{
////		char tmp = str[left];
////		str[left] = str[right];
////		str[right] = tmp;
////		left++;
////		right--;
////	}
////}
////int main()
////{
////	char string[] = "abcdef";
////	reverse_string(string);
////	printf("%s", string);
////	return 0;
////}
////RECURSION WAYS OF DOING IT
////Can't quite understand the logic here, I'm going to leave it until I learned
////how to use pointers.
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	char tmp = *str;/* is the veriable tmp = the first element of str or all of it?*/
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//Can't understand this whole thing
//	*(str + len - 1) = '\0';//This either
//	if (my_strlen(str + 1) >= 2)//This either
//		reverse_string(str + 1);//This either
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}