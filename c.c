#include"SList.h"

//int main()
//{
//	int* p1 = malloc(sizeof(int) * 12);
//	int* p2 = realloc(p1, sizeof(int) * 22222222);
//	if (p1 = p2)
//		printf("=");
//	else
//		printf("!=");
//	return 0;
//}


void test1()
{
	SLT* plist = NULL;
	SLtPushBack(&plist, 1);
	SLtPushBack(&plist, 2);
	SLtPushBack(&plist, 3);
	SLtPushBack(&plist, 4);

	SLtPrint(plist);
}
int main()
{
	test1();
	return 0;
}