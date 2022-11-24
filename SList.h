#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include<stdlib.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLT;

void SLtPrint(SLT*phead);
void SLtPushBack(SLT** pphead, SLTDataType x);