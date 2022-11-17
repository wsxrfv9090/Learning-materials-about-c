//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//
////the result shows that its storing is consistent
////the order is 1 1, 1 2, 1,3 , 1,4 , 2,1.....
////the reason why we can't omit the colume number:
////because it needs a determined number to know how to put the next row in the storage
////

//#include <stdio.h>
//int main()
//{
//	int arr[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}