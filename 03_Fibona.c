//#include<stdio.h>
//#include<stdlib.h>
//int f(int n)
//{
//	if(n==2) return 1;
//	if(n==1) return 1;
//	return f(n-1)+f(n-2);
//}
//int f2(int n)
//{
//	int p1 = 1;
//	int p2 = 1;
//	int p3;
//	int i;
//	if(n==2) return 1;
//	if(n==1) return 1;
//	for(i=3;i<=n;i++)
//	{
//		p3 = p1+p2;
//		p1 = p2;
//		p2 = p3;
//	}
//	return p3;
//}
//int main()
//{
//	printf("%d\n",f2(46));
//	system("pause");
//	return 0;
//}