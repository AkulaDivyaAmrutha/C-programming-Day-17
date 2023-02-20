/*C program to find 2 highest number*/
#include<stdio.h>
main()
{
int n,ele,h1,h2,i;
scanf("%d",&n);
i=1;
while(i<=n)
{
	scanf("%d",&ele);
	if(ele>h1)
	{
	h2=h1;
	h1=ele;
    }
	if((ele>h2)&&(ele<h1))
	h2=ele;
    i++;
}
printf("\nSecond Highest=%d",h2);	
}
