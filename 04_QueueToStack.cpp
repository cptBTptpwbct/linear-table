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
//typedef struct Queue
//{
//	MyStack *stack1;
//	MyStack *stack2;
//}Myqueue;
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
//	return stack->Count==0?1:0;
//}
//void q_Push(Myqueue *queue,int val)
//{
//	Push(queue->stack1,val);
//}
//int q_Pop(Myqueue *queue)
//{
//	while(IsEmpty(queue->stack1)!=1)
//	{
//		Push(queue->stack2,Pop(queue->stack1));
//	}
//	int num = Pop(queue->stack2);
//	while(IsEmpty(queue->stack2)!=1)
//	{
//		Push(queue->stack1,Pop(queue->stack2));
//	}
//	return num;
//}
//void q_Init(Myqueue ** queue)
//{
//	*queue = (Myqueue *)malloc(sizeof(Myqueue));
//	(*queue)->stack1 = (MyStack *)malloc(sizeof(MyStack));
//	Init(&(*queue)->stack1 );
//	(*queue)->stack2 = (MyStack *)malloc(sizeof(MyStack));
//	Init(&(*queue)->stack2);
//}
//int main()
//{
//	Myqueue *queue = NULL;
//	q_Init(&queue);
//	q_Push(queue,2);
//	q_Push(queue,3);
//	q_Push(queue,4);
//	printf("%d\n",q_Pop(queue));
//	printf("%d\n",q_Pop(queue));
//	printf("%d\n",q_Pop(queue));
//	q_Push(queue,1);
//	//printf("%d\n",GetCount(stack));
//	system("pause");
//	return 0;
//}