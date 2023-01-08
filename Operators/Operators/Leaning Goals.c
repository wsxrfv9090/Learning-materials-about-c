#include <stdio.h>

//Different kinds of operators in c:
//1. Arithmetic Operators;
//   +	-	*	/	%

//int main()
//{
//	float a = 3 / 5.0;//Have to have at least one float.
//  float a = 3.0f / 5.0f;//Perfect way of doing it.
//	printf("%f", a);
//	return 0;
//}
// 
//int main()
//{
//	int a = 7 % 3;
//	printf("%d\n", a);//The '%' have to have both integers as numbers.
//	return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2. Shift Operators;
//	 <<		>>
// 
//int main()
//{
//	int a = 2;
//	int b = a << 1;//Shift in Binary.
//	//so first 32 digits binary code:00000......010;
//	//and if you shift left for 1 digit
//	//it becomes 000000......0100;
//	//left fisrt digit will be discard
//	//right first digit will be filled with 0
//	printf("b = %d\n", b);
//	return 0;
//}
// 
//int main()
//{
//	int a = 10;
//	int b = a >> 1;
//	//first 00000......01010;
//	//after the operator it became 000......00101;(Only if it's positive number)
//	//1. Arithmatic Right Shift
//	//   Discard the right digits, and fill the original symble number for the original number.
//	//2. Logic Right Shift
//	//   Discard the right digits, and fill the right with 0.
//  //In this editor(VS Studio 2022) it uses Arithmatic Right Shift.
//	printf("b = %d\n", b);
//	return 0;
//}
// 
// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3. Digit Operators;
//   &: Bitwise and
//   |: Bitwise or
//   ^: Bitwise XOR (exclusive or)
//   ALERT: Their operates have to be integers
//   Their usage:
//   Challenge: Switch two integers' value, without using the third veriable.
//Flawed solution;
//if the number is too big, will cause stack overflow.
//int main()
//{
//	int a = 244;
//	int b = 245;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//}
// Best solution;
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	printf("a = %d, b = %d\n", a, b);
//	a = a ^ b;//110
//	b = a ^ b;//011
//	a = a ^ b;//101
// //a ^ a = 0;
// //0 ^ a = a;
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}
// //////////////////////////////////////////////
//int main()
//{
//	int a = 3;//00000000000000000000000000000011
//	int b = 5;//00000000000000000000000000000101
//	int c = a & b;//00000000000000000000000000000001
//	//As long as one of the two Bitwise and have a 0, the outcome will be 0; only if two of them are both 1, outcome will be 1
//	printf("%d\n", c);
//	return 0;
//}
// /////////////////////////////////////////////////
//int main()
//{
//	int a = 3;//00000000000000000000000000000011
//	int b = 5;//00000000000000000000000000000101
//	int c = a | b;////00000000000000000000000000000111
//	//As long as one of the two Bitwise and have a 1, the outcome will be 1; only if two of them are both 0, outcome will be 0
//	printf("%d\n", c);
//	return 0;
//}
// /////////////////////////////////////////////////
//int main()
//{
//	int a = 3;//00000000000000000000000000000011
//	int b = 5;//00000000000000000000000000000101
//	int c = a ^ b;//00000000000000000000000000000110
//	//same digit, if they are the same, outcome is 1, if they are different out come is 0;
//	printf("%d\n", c);
//	return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4. Assignment Operators;
//5. Unary Operators;
//6. Relational Operators;
//7. Logic Operators;
//8. Conditional Operators;
//9. Comma Expression;
//10. Subscript Reference, Call for functions and Structure member;

