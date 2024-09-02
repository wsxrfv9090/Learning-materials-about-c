#include "functions.h"
#include "structures.h"
#include "stdlib.h"
#define STRING_LENGTH 10

int main() {
	StaticSeqList List;
	InitList(&List, 10);
	List.size = Length(&List);
	for (int i = 0; i < List.capacity; i++)
		ListInsert(&List, i, generateRandomInt(), generateRandomString(STRING_LENGTH));
	printElementType(&List);
	return 0;
}