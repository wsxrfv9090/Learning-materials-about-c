#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//运算操作符：+ - * / %


//移位操作符：<<左移，>>右移，移的是二进制位，会实际上改变数值，但是a本身值不变，除非移完了之后再赋给a本身
//例子：
//int main()
//{
//	int a = 1;
//	int b = a << 2;
//	printf("%d\n", b);
//	return 0;
//}
// 
// 


//位操作符：& ^ |
//& 按位与(并),只有都为1才为真，例：011并101，结果得001
//| 按位或(或），两个只要有一个1就为真，例：011或101，结果得111
//^ 按位异或（计算规律：对应的二进制位相同，则为0，不同，则为1），例：011异或101，结果得110
//int main()
//{
//	int a = 3;//二进制011
//	int b = 5;//二进制101
//	int c = a & b;
//
//	printf("%d\n", c);
//	return 0;
//}

//赋值操作符：= 复合赋值符：+= -= *= /= &= ^= |= >>= <<=
//int main()
//{
//	int a = 10;
//	a = 20;
//	a = a + 10;
//	a += 10;
//	a -= 20;
//	a &= 2;
//	a = a & 2;
//
//	return 0;
//}


//单目操作符
// c语言中表示真假，0为假，非0都是真
// 操作对象的数目
//单目操作符：!逻辑反操作、、-负号、、+正号、、&取地址符、、sizeof(可以看数组大小，元素个数，字符串长度）
//            ~对一个数的二进制按位取反、、--前置、后置--、、++前置、后置++、、
//            *间接访问操作符（解引用操作符）
//            （类型）：强制类型转换，放在数据前面
//                      例如：int a =(int) 3.14
// //int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a))//sizeof计算的是变量/类型所占空间的大小，单位是字节
//	return 0;
//}】
//sizeof:可以看出一个数组的大小，也可以看出一个数组内元素的大小----通过数组的大小除以单个元素的大小
//       例：priitf("%d\n",sizeof(arr)/sizeof(arr[0])) 
//   ~：按位取反，取二进制码的反码，整数原码反码补码都一样，负数：原码  符号位不变，按位取反得到反码   反码加一 得到补码
//      所以~0=-1
//      正数三码相同
//      负数在内存中存储的时候存储的是二进制的补码，打印（printf）的是原码
// 
//   --/++：前后置不同。后置：先使用，再++；前置：先++，再使用
//双目操作符：
//三目操作符：





//关系操作符：>,>=,<<=,（不等于）!=,(等于）==


//逻辑操作符：&&（并且），||
//
int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;//a为真，b为真，c才为真，所以此时c为1,1为真，0为假
	printf("c=%d\n",c);
	return 0;
}


//（也叫三目操作符）条件操作符：exp1？exp2：exp3如果表达式一为真，则执行表达式二，如果为假，则执行表达式三，最后结果为整个运算符的结果


//例子：
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int max = 0;
//    
//    max = (a > b ? a : b);
//    printf("max=%d\n", max);
//    return 0;
//}


//逗号表达式：exp1,exp2,exp3,...expN
             

//下标引用、函数调用和结构成员：[]   ()    .    ->
//例子：
//int main()
//{
//    int arr[10] = { 0 };
//    arr[4];[]----下标引用操作符
//    return 0;
//}



//常见关键字：auto break case char const continue default do double else enum extern float for goto if int long register
//            return short signed sizeof static struct switch typedef union unsigned viod volatile while

//break循环中停滞循环，语句中
//const常量
// continue循环中
// extern 引入外部符号
// for for循环
// goto goto循环
// if if语句
// register ：把某些东西放到寄存器里去，register int a = 10;建议把a定义成寄存器变量
//            计算机存储数据：1，硬盘
//                            2，内存
//                            3，寄存器
//                            4，高速缓存
//                  速度依次提高，但是能储存的量逐渐减少，造价增加 
// 
// 
// signed ：int定义的变量是有符号的，是signed int的简写。
// unsigned int：无符号的
// static：可以加在局部变量前，变成一个静态的局部变量
// struct：结构体关键字
// switch
// typedef：类型定义-类型重定义；例：unsigned int num = 20;    typedef unsigned int u_int;相当于是别名，以后u_int就=undigned int
// union：联合体/
// static：见static的演示.c
// volatile
// while：
//