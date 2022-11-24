#include"SList.h"

void SLtPrint(SLT* phead)
{
	SLT* cur = phead;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

void SLtPushBack(SLT** pphead, SLTDataType x)
{
	//	��β�ڵ�
	SLT* newnode = (SLT*)malloc(sizeof(SLTDataType));
	newnode->data = x;
	newnode->next = NULL; 

	if (*pphead == NULL)
	{
		*pphead = newnode;	// ������
	}
	else
	{
		SLT* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}