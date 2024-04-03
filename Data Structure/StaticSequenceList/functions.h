#pragma once
#include "structures.h"

char* generateRandomString(size_t length);

int generateRandomInt();

void InitList(StaticSeqList* List, size_t initialCapa);

void printElementType(StaticSeqList* List);

size_t Length(StaticSeqList L);

void ListInsert(StaticSeqList* ListPtr, size_t posi, int num, char* string);