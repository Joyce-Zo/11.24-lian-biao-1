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

void SLtPushBack(SLT* phead, SLTDataType x)
{
	//	урн╡╫з╣Ц
	SLT* newcode = (SLT*)malloc(sizeof(SLTDataType));
	newcode->data = x;
	newcode->next = NULL;

	SLT* tail = phead;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = newcode;
}