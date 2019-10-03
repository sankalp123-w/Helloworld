#include<stdio.h>
#include<process.h>
#include<conio.h>

void pop();
void push();
void peek();
void display();
int max=5;
int top=-1,stack[5];

int main()
{

	    printf("\n   Stack Menu   \n");
		printf("\n1.Push \n2.Pop \n3.Disply \n4.peek \n5.Exit");
	
	int ch;
	while(1)
	{   
		printf("\nEnter your choice(1-4):");
		scanf("%d",&ch);

		switch (ch)
		{
			case 1:push();
			       break;

			case 2:pop();
			       break;

			case 3:display();
			       break;

			case 4:peek();
				   break;

			case 5:
				exit(0);
				break;
				
			default: printf("\n Wrong choice");
				break;
		}

	}
	return 0;
	getch();
}

void push(){

	int val;
	if(top==max-1)
	{
	   printf("\nStack is full");
	}
	else
	{
	   printf("\nEnter a value you want to insert in stack:\n");
	   scanf("%d",&val);
	   top++;
	   stack[top]=val;
	}
}

void pop(){

	if(top==-1)
	{
		printf("\nStack is empty\n");
	}
	else
	{
		printf("Deleted element is %d",stack[top]);
		top--;
	}
}

void peek(){

	int i;
	if(top==-1)
	{
		printf("\nStack is empty\n");
	}
	else
	{
		printf("%d",stack[top]);
	}
}

void display(){

	int i;
	if(top==-1)
	{
		printf("\nStack is empty\n");
	}
	else
	{       printf("\nElements of Stack:\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
