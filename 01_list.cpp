//#include<iostream>
//using namespace std;
//struct  Node
//{
//	int val;
//	struct Node *pNext;
//};
//void add(Node **head)
//{
//	if(head == NULL) return ;
//	Node *pTail = NULL;
//	Node *pTemp = NULL;
//	int nNum;
//	cout<<"请输入数据"<<endl;
//	cin>>nNum;
//	while(nNum!=0)
//	{
//		pTemp = new Node();
//		pTemp->val = nNum;
//		pTemp->pNext = NULL;
//		if(*head==NULL)
//		{
//			
//			*head = pTemp;
//		}
//		else
//		{
//			pTail->pNext = pTemp;
//		}
//		pTail = pTemp;
//		cout<<"请输入数据"<<endl;
//		cin>>nNum;
//	}
//}
//void PrintList(Node *head)
//{
//	while(head)
//	{
//		cout<<head->val<<" ";
//		head = head->pNext;
//	}
//	cout<<endl;
//}
//void ReversePrint(Node *pNode)
//{
//	if(pNode == NULL)
//	{
//		return ;
//	}
//	else
//	{ 
//		ReversePrint(pNode->pNext);
//		cout<<pNode->val<<" ";
//	}
//}
//void Reverse(Node **head)
//{
//	if(head==NULL) return ;
//	Node *p1 = NULL;
//	Node *p2 = NULL;
//	Node *p3 = *head;
//	while(p3)
//	{
//		p2 = p3;
//		p3 = p3->pNext;
//		p2->pNext = p1;
//		p1 = p2;
//	}
//	*head = p2;
//}
//int main()
//{
//	Node *head = NULL;
//	add(&head);
//	PrintList(head);
//	ReversePrint(head);
//	cout<<"\n";
//	Reverse(&head);
//	PrintList(head);
//	system("pause");
//	return 0;
//}
