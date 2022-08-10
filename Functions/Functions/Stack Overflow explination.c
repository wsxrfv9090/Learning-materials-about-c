

//void test(int n)
//{
//	if (n < 10000)
//		test(1 + n);
//}
//int main()
//{
//	test(1);
//	return 0;
//}

////RAM area is consist of three parts
////1.Stack area
////  is always used to store local variable/the formal parameter of functions
////2.Heap area
////  is used to distribute dynamic memory:malloc\free\realloc
////3.Static area
////  global variable\static variable
////
////the reason why stack overflow:
////in Stack area:
////1.go through the main function;
////  so system opens up a new stack frame space for main, and while its still in the
////  main function so that area is always there until the running of function is over
////
////2.go through the test function;
////  so the system opens up another independent stack frame space for the test function
////	  within the stack area
////
////...
////	when that goes for so many times, since the Stack area for functions are limited;
////  the Stack Overflow situation will happen.
////
////
