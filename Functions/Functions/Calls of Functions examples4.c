//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////Code a function that can record the times of the functions being called.
//
//
//void count(int* pc)
//{
//	(*pc)++;
//	printf("pc = %d\n", *pc);
//}
//int OrderedBinarySearch(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	int status = -1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//			right = mid - 1;
//		else if (a[mid] < k)
//			left = mid + 1;
//		else
//		{
//			status = mid;
//			break;
//		}
//	}
//	int c = 0;
//	count(&c);
//	return status;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9 };
//	int key = 0;
//	scanf("%d", &key);
//	int size = sizeof(arr) / sizeof(arr[0]);
//	OrderedBinarySearch(arr, key, size);
//	if (OrderedBinarySearch(arr, key, size) == -1)
//		printf("Element required does not exist");
//	else
//		printf("Element found. Under the Subscript of %d\nThe element is arr[%d]=%d", OrderedBinarySearch(arr, key, size), OrderedBinarySearch(arr, key, size), arr[OrderedBinarySearch(arr, key, size)]);
//	int c = 0;
//	count(&c);
//	printf("It's been called %d times", c);
//	return 0;
//}