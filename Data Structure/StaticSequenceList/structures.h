#pragma once
#include <stdio.h>
#include <stdbool.h>

typedef struct {
	int number;
	char* string;
	bool isUsed;
}ElementType;


typedef struct {
	ElementType* array;
	size_t size;
	size_t capacity;
}StaticSeqList;