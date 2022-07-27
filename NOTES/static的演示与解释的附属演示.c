//#define _CRT_SECURE_NO_WARNINGS
////（static） int g_val = 2020;//static加在全局变量前会限制全局变量的作用域，此时变量g_val在原演示中不能使用，
////                        让静态的全局变量只能在自己的源文件内部使用，除了源文件就没办法使用了
//
//
//（static） int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
////若要在其他源文件中用需要声明