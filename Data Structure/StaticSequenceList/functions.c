#include "structures.h"

#include <limits.h>
#include <stdlib.h>
#include <time.h> 

#define STRING_LENGTH 10

char* generateRandomString(size_t length) {
	char* string = malloc((length + 1) * sizeof(char));
	//Allocating space for the string, keep in mind that later in the main function, you have to free it.
	if (string == NULL) {
		return NULL;
		//Checking if the allocation was successful.
	}
	char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	//Be aware that the charset array also contains a terminator '\0',hence the '+1' and '-1'.
	size_t charsetSize = sizeof(charset) - 1; 
	for (size_t i = 0; i < length; i++) {
		size_t index = rand() % charsetSize;
		//This part ensures that index will only go through from 0 to charsetSize - 1.
		string[i] = charset[index];
	}
	string[length] = '\0'; 
	//Adding the terminator at the end.
	return string;
}

int generateRandomInt() {
	int rand1 = rand();
	int rand2 = rand();
	int randomInt = rand1 | (rand2 << 16); 
	// Combine two values to potentially cover a wider range
	//Shifting rand2 to the left for 16 bits, and then use OR operator to combine them together, so potentiaolly
	//by using this, I fill the interger space which is 32 bits long.
	//On my machine, an interger stores 32 bits at most, so I did this, to generate a random interger.
	//And notice that this is signed interger, which means the minimum is -2^31, the maximum is 2^31 - 1
	return randomInt;
}

void printElementType(StaticSeqList *List) {
	if (List->size > List->capacity || List->array == NULL) {
		printf("Something is wrong in printElementType function.\n");
		exit(1);
		//Here should implement the full exit error status code later
	}
	for (size_t i = 0; i < List->size; i++) {
		printf("Number in ElementType place %zu: %d\n", i, List->array[i].number);
		printf("String in ElementType place %zu: %s\n", i, List->array[i].string);
		printf("Boolean in ElementType place %zu: %s\n", i, List->array[i].isUsed ? "true" : "false");
	}
	printf("List Size is: %zu\n", List->size);
	printf("List Capacity is: %zu\n", List->capacity);
}

void InitList(StaticSeqList *List, size_t initialCapa) {
	List->array = (ElementType*)malloc(initialCapa * sizeof(ElementType));
	if (List->array == NULL) {
		fprintf(stderr, "Memory allocation failed in InitList function\n");
		exit(1);
	}
	List->size = 0;
	List->capacity = initialCapa;
	for (size_t i = 0; i <= List->capacity - 1; i++) {
		List->array[i].number = 0;
		List->array[i].string = "Initial Value";
		List->array[i].isUsed = false;
	}
}

size_t Length(StaticSeqList* L) {
	size_t len = 0;
	for (size_t i = 0; i < L->capacity - 1; i++) {
		if (L->array[i].isUsed != false)
			len++;
		else
			break;
	}
	return len;
}

void ListInsert(StaticSeqList* ListPtr, size_t posi, int num, char* string) {
	if (posi > ListPtr->size) {
		printf("'i' in function ListInsert is invalid.\n");
		return;
	}
	if (ListPtr->size + 1 > ListPtr->capacity) {
		printf("List is full, can't add anymore Element.\n");
		return;
	}
	ElementType e;
	e.isUsed = true;
	e.number = num;
	e.string = string;
	for (size_t i = ListPtr->size; i > posi; i--)
		ListPtr->array[i] = ListPtr->array[i - 1];
	ListPtr->array[posi] = e;
	ListPtr->size++;
}

bool IfEqual(ElementType a, ElementType b) {
	if (a.number == b.number && a.string == b.string && a.isUsed == b.isUsed)
		return true;
	else
		return false;
}

bool IfNumEqual(ElementType a, ElementType b) {
	if (a.number == b.number)
		return true;
	return false;
}

//bool IfStringEqual(ElementType a, char* string) {
//	if ()
//}
//
//size_t LocateElem(StaticSeqList* ListPtr, ElementType e) {
//
//}
//
//size_t LocateNum(StaticSeqList* ListPtr, int num) {
//
//}