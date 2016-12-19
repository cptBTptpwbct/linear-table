//#include<stdio.h>
//#include<stdlib.h>
//typedef struct  Node
//{
//	int val;
//	struct Node *pNext;
//}Mylist;
//typedef struct Statck
//{
//	Mylist *top;
//	int Count;
//}MyStack;
//void Push(MyStack *stack,int val)
//{
//	Mylist *node = NULL;
//	if(stack==NULL )
//	{
//		printf("栈不存在！！！！！！！\n");
//		return ;
//	}
//	 node = (Mylist*)malloc(sizeof(Mylist));
//	node->pNext = NULL;
//	node->val = val;
//	node->pNext = (stack->top);
//	stack->top = node;
//	stack->Count++;
//}
//int Pop(MyStack *stack)
//{
//	Mylist *pTemp = NULL;
//	int nNum ;
//	if(stack == NULL )
//	{
//		printf("栈不存在！！！！！！！\n");
//		return -1;
//	}
//	 nNum = stack->top->val;
//	pTemp = stack->top;
//	stack->top = stack->top->pNext;
//	delete pTemp;
//	stack->Count--;
//	pTemp = NULL;
//	return nNum;
//}
//void Init(MyStack **stack)
//{
//	if(stack == NULL) return ;
//	*stack = (MyStack *)malloc(sizeof(MyStack));
//	(*stack)->top = NULL;
//	(*stack)->Count = 0;
//}
//void Clear(Statck *stack)
//{
//	if(stack == NULL) return ;
//	Pop(stack);
//}
//void Destory(Statck **stack)
//{
//	if(stack == NULL) return ;
//	Clear(*stack);
//	free(*stack);
//	*stack = NULL;
//}
//Mylist *GetTop(Statck *stack)
//{
//	if(stack == NULL) 
//	{
//		printf("栈不存在！！！！！！！\n");
//		return NULL;
//	}
//	return stack->top;
//}
//int GetCount(Statck *stack)
//{
//	if(stack == NULL) return -1;
//	return stack->Count;
//}
//int IsEmpty(Statck *stack)
//{
//	if(stack == NULL) return -1;
//	return stack->Count==0?0:1;
//}
//int main()
//{
//	MyStack *stack = (MyStack *)malloc(sizeof(MyStack));
//	Init(&stack);
//	Push(stack,1);
//	Push(stack,2);
//	printf("%d\n",Pop(stack));
//	printf("%d\n",GetCount(stack));
//	system("pause");
//	return 0;
//}