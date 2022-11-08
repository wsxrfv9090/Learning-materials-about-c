//Frog jumping the stairs:
//The frog can only jump 1 or 2 stairs everytime.
//the question is how many ways of jumping for frog to jump over n stairs?


//for example there are only 5 stairs
#include <stdio.h>
//int count = 0;
//int culculate_top(int n)
//{
//	return n / 2 + 1;
//}
//int main()
//{
//	//starts from zero
//	int n = 5;
//	int most = n;
//	int least = culculate_top(5);
//	return 0;
//}

int mut(int x, int y)
{
	return (x * y);
}
int main()
{
	int i = 1;
	int i2 = 2;
	printf("%d", mut(i, i2));
	return 0;

}