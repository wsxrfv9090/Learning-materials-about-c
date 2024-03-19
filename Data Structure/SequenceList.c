//   9 basic functions for sequence list.
//1. InitList(&L)
//		Initiate an empty sequence list L.
//2. Length(L)
//		Get the length of sequence list L.
//3. LocateElem(L,e)
//		Return the subscript of data e in the sequence list L.
//4. GetElem(L,i)
//		Return the data e, from i position in the sequence list L.
//5. ListInsert(&L,i,e)
//		Insert a data e in the position of i of sequence list L.
//6. ListDelete(&L,i,&e)
//		Delete the data in the i position and return e data to the function.
//7. PrintList(L)
//		Print from top all the element data.
//8. Empty(L)
//		Return TRUE if sequence list L is empty, otherwise return FALSE.
//9. DestroyList(&L)
//		Delete all the memory that's allocated to sequence list L.

//For Static sequence list and Dynamic sequence list
//should also have a function:
//   IfFull(L) 
//		to find out if the sequence list is full and avoid futher issues.


#include <stdio.h>
#include <string.h>

//Defining Sequence List, both static and dynamic.

//Element type, changable, and should contain the data wanted to store in each single sequence list unit.
typedef struct {
	int data;
}ElemType;

//Static Sequence List Defining.
#define StaMaxSize 50//define the max size of the static sequence list.
typedef struct {
	ElemType data[StaMaxSize];//Data type defining
	int length;//Current sqlist length
}StaticSqList;//This struct is named StaticSqList, and can be used to initialize like this: 
//											StaticSqList L = { {{2},{2},{7},{4},{5} },5 };
//					This means that L is a StaticSqList type of struct, and it now contains 2,2,7,4,5 in the data array
//					And it has the attribute of length of 5.

//Dynamic Sequence List Defining.
#define InitSize 100//Initially size 100.
typedef struct {
	ElemType* data;//Data type, ElemType.Pointing to a specific array that's dynamically allocated, and can be changed since here its just a pointer.
	int DyMaxSize, length;//Defining a DyMaxSize can prevent the list goes to big, its an upper limit of the dynamic sequence list.
}DynamicSqList;


void InitStaSqList(StaticSqList* L) {
	memset(L->data, -2, sizeof(L->data)); //Set all bytes in the array to be -1,which is 11111111, and every int will show as 11111111 * 4 which is -1.
	//memset all bytes to be -2, four int should be: '-16843010'
	L->length = 0;
}//Initializing a Static Sequence List

int FindLength(StaticSqList L) {
	return L.length;
	//int len = 0;
	//int i = 0;
	//while (L.data[i].data != -16843010) {
	//	len++;
	//	i++;
	//}
	//return len;
}



int main() {
	StaticSqList L;
	InitStaSqList(&L);
	int length = -1;
	printf("length: %d\n", length);
	length = FindLength(L);
	printf("length: %d\n", length);
	return 0;
}