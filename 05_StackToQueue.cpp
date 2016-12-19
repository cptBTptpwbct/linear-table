#include<stdio.h>
#include<stdlib.h>
typedef struct  Node
{
	int val;
	struct Node *pNext;
}Mylist;
typedef struct Quene
{
	Mylist *top;
	Mylist *tail;
	int Count;
}MyQueue;
typedef struct Stack
{
	MyQueue *queue1;
	MyQueue *queue2;
}Mystack;
void q_Push(MyQueue *queue,int val)
{
	Mylist *node = NULL;
	if(queue==NULL )
	{
		printf("队列不存在！！！！！！！\n");
		return ;
	}
	 node = (Mylist*)malloc(sizeof(Mylist));
	node->pNext = NULL;
	node->val = val;
	if(queue->top==NULL) 
		queue->top = node;
	else 
		queue->tail->pNext = node;
	queue->tail = node;
	queue->Count++;
}
int q_Pop(MyQueue *queue)
{
	Mylist *pTemp = NULL;
	int nNum ;
	if(queue == NULL || queue->top==NULL)
	{
		printf("栈不存在！！！！！！！");
		return -1;
	}
	 nNum = queue->top->val;
	pTemp = queue->top;
	queue->top = queue->top->pNext;
	delete pTemp;
	queue->Count--;
	pTemp = NULL;
	if(queue->Count==0)
		queue->tail = NULL;
	return nNum;
}
void q_Init(MyQueue **queue)
{
	if(queue == NULL) return ;
	*queue = (MyQueue *)malloc(sizeof(MyQueue));
	(*queue)->top = NULL;
	(*queue)->tail = NULL;
	(*queue)->Count = 0;
}
void q_Clear(MyQueue *queue)
{
	if(queue == NULL) return ;
	q_Pop(queue);
}
void q_Destory(MyQueue **queue)
{
	if(queue == NULL) return ;
	q_Clear(*queue);
	free(*queue);
	*queue = NULL;
}
Mylist *q_GetTop(MyQueue *queue)
{
	if(queue == NULL) 
	{
		printf("栈不存在！！！！！！！\n");
		return NULL;
	}
	return queue->top;
}
int q_GetCount(MyQueue *queue)
{
	if(queue == NULL) return -1;
	return queue->Count;
}
int q_IsEmpty(MyQueue *queue)
{
	if(queue == NULL) return -1;
	return queue->Count==0?1:0;
}
void s_Push(Mystack *stack, int val)
{
	if(q_IsEmpty (stack->queue1)==1)
	{
		q_Push(stack->queue2,val);
	}
	else
	{
		q_Push(stack->queue1,val);
	}
}
int s_Pop(Mystack *stack)
{
	int num;
	int length;
	if(q_IsEmpty (stack->queue1)==1)
	{
		length = stack->queue2->Count;
		for(int i=1;i<length;i++)
		{
			q_Push(stack->queue1,q_Pop(stack->queue2));
		}
		num = q_Pop(stack->queue2);
		return num;
	}
	else
	{
		length = stack->queue1->Count;
		for(int i=1;i<length;i++)
		{
			q_Push(stack->queue2,q_Pop(stack->queue1));
		}
		num = q_Pop(stack->queue1);
		return num;
	}
}
void s_Init(Mystack **stack)
{
	*stack = (Mystack *)malloc(sizeof(Mystack));
	(*stack )->queue1 = NULL;
	q_Init(&(*stack )->queue1 );
	(*stack )->queue2 = NULL;
	q_Init(&(*stack )->queue2);
}
int main()
{
	Mystack *stack = NULL;
	s_Init(&stack);
	s_Push(stack,1);
	s_Push(stack,2);
	printf("%d\n",s_Pop(stack));
	s_Push(stack,3);
	printf("%d\n",s_Pop(stack));
	printf("%d\n",s_Pop(stack));
	printf("%d\n",s_Pop(stack));
	system("pause");
	return 0;
}