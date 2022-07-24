//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////在一个有序数组中，查找具体的某个数字k。编写int binsearch(int x,int v[],int n）；功能：在[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10 };
//	int k = 7;
//	int az = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = az - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		//fatal error: I used elements for subscript culculation, that's something that I'll have to BE CAREFUL ABOUT
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("element found.under the subscript of %d\nthe element is arr[%d]=%d", mid, mid, arr[mid]);
//			break;
//		}
//	}
//	if (left>right)
//		printf("required elements does not exist\n");
//	return 0;
//}