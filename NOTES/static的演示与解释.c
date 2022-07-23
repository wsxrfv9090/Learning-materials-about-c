#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//static第一种用法
//void test()
//{
//	static int a = 1;//static的作用：不带static时输出结果是五个a=2，（会重新上去新建一个a），
//	                 //带static后输出结果是2，3，4，5，6。因为a是一个局部变量，出了test函数后a生命周期结束，
//	                 //static后a变成静态的局部变量，static修饰局部变量是，局部变量生命周期延长，
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static第二种用法
//int main()
//{
//	//附属演示中的定义在整个文件都可以用
//	//exturn---声明外部符号，在此文件中可以声明
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}





//static第三种用法
//static修饰函数改变了函数的链接属性

//extern int Add(int, int);//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//}