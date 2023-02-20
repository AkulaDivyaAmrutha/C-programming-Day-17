/*C program to given number is prime or not */
#include<stdio.h>
main()
{
	int n,i,c=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
    	if(n%i==0)
    	c++;
    	i++;
	}
	if(c==2)
	printf("PRIME");
	else
	printf("NOT PRIME");
}
