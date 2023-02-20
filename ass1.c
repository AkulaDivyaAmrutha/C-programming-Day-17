/*C program to find lowest among n numbers*/
#include<stdio.h>
main()
{
	int n,ele,i,l;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		scanf("%d",&ele);
		if(i==1)
		l=ele;
		if(ele<l)
		l=ele;
	    i++;
	}
	printf("\nLowest=%d",l);
}
