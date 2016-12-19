//#include<stdio.h>
//#include<stdlib.h>
//typedef struct  Node
//{
//	int val;
//	struct Node *pNext;
//}Mylist;
//typedef struct Quene
//{
//	Mylist *top;
//	Mylist *tail;
//	int Count;
//}MyQueue;
//void q_Push(MyQueue *queue,int val)
//{
//	Mylist *node = NULL;
//	if(queue==NULL )
//	{
//		printf("队列不存在！！！！！！！\n");
//		return ;
//	}
//	 node = (Mylist*)malloc(sizeof(Mylist));
//	node->pNext = NULL;
//	node->val = val;
//	if(queue->top==NULL) 
//		queue->top = node;
//	else 
//		queue->tail->pNext = node;
//	queue->tail = node;
//	queue->Count++;
//}
//int q_Pop(MyQueue *queue)
//{
//	Mylist *pTemp = NULL;
//	int nNum ;
//	if(queue == NULL )
//	{
//		printf("栈不存在！！！！！！！\n");
//		return -1;
//	}
//	 nNum = queue->top->val;
//	pTemp = queue->top;
//	queue->top = queue->top->pNext;
//	delete pTemp;
//	queue->Count--;
//	pTemp = NULL;
//	if(queue->Count==0)
//		queue->tail = NULL;
//	return nNum;
//}
//void q_Init(MyQueue **queue)
//{
//	if(queue == NULL) return ;
//	*queue = (MyQueue *)malloc(sizeof(MyQueue));
//	(*queue)->top = NULL;
//	(*queue)->tail = NULL;
//	(*queue)->Count = 0;
//}
//void q_Clear(MyQueue *queue)
//{
//	if(queue == NULL) return ;
//	q_Pop(queue);
//}
//void q_Destory(MyQueue **queue)
//{
//	if(queue == NULL) return ;
//	q_Clear(*queue);
//	free(*queue);
//	*queue = NULL;
//}
//Mylist *q_GetTop(MyQueue *queue)
//{
//	if(queue == NULL) 
//	{
//		printf("栈不存在！！！！！！！\n");
//		return NULL;
//	}
//	return queue->top;
//}
//int q_GetCount(MyQueue *queue)
//{
//	if(queue == NULL) return -1;
//	return queue->Count;
//}
//int q_IsEmpty(MyQueue *queue)
//{
//	if(queue == NULL) return -1;
//	return queue->Count==0?1:0;
//}
//int main()
//{
//	MyQueue *queue = (MyQueue *)malloc(sizeof(MyQueue));
//	q_Init(&queue);
//	q_Push(queue,1);
//	q_Push(queue,3);
//	q_Push(queue,2);
//	printf("%d\n",q_Pop(queue));
//	printf("%d\n",q_Pop(queue));
//	printf("%d\n",q_Pop(queue));
//	printf("%d\n",q_IsEmpty(queue));
//	system("pause");
//	return 0;
//}