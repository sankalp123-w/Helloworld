#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],i,j,temp,*ptr;

	clrscr();

	printf("enter elements of array\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("given array element is \n");
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("after sorting\n");
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
getch();
}