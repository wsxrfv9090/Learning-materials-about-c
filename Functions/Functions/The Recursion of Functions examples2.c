////Code a function to culculate the length of string without establishing a temporary variable
////this is how we normally culculate it:
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1); /* here(str + 1) means the the character behind the first character of str*/
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}