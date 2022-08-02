#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Code a function, that can search for integer kind in an ordered array use binary search

//int OrderedBinarySearch(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	int status = -1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < k)
//			right = mid - 1;
//		else if (a[mid] > k)
//			left = mid + 1;
//		else
//			status = mid;
//		break;
//	}
//	return status;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9 };
//	int key = 0;
//	scanf("%d", &key);
//	int size = sizeof(arr) / sizeof(arr[0]);
//	OrderedBinarySearch(arr, key,size);
//	if (OrderedBinarySearch(arr, key, size) == -1)
//		printf("Element required does not exist");
//	else
//		printf("Element found. Under the Subscript of %d\nThe element is arr[%d]=%d", OrderedBinarySearch(arr, key, size), OrderedBinarySearch(arr, key, size), arr[OrderedBinarySearch(arr, key, size)]);
//	return 0;
//}



//when calling for functions, and you are trying to import an array
// 
//you only import the address of the first element of the array
// 
//so the essence of formal paramater is actually a pointer instead of an array
//and it's the reason why the size of the arr beneath in the function is 1
//because the size of the pointer itself is actually 1 byte
// 
//way to fix this is above
// 
//When I only imported the address of the first element
// 
//I can still find all the other elements by printing arr[x]
// 
//It is still there, it's just that by default that the array got shortened
//in to one byte which is the address of the first element



//int OrderedBinarySearch(int arr[],int x)
//{
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = size - 1;
//	int status = -1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < x)
//			right = mid - 1;
//		else if (arr[mid] > x)
//			left = mid + 1;
//		else
//			status = mid;
//			break;
//	}
//	return status;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	OrderedBinarySearch(arr, k);
//	if (OrderedBinarySearch(arr, k) == -1)
//		printf("Element required does not exist");
//	else
//		printf("Element found. Under the Subscript of %d\nThe element is arr[%d]=%d", OrderedBinarySearch(arr, k), OrderedBinarySearch(arr, k), arr[OrderedBinarySearch(arr, k)]);
//	return 0;
//}