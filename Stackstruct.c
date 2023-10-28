
//STACK structure
#include<stdio.h>
#define max 10
typedef struct stack
{
	int item[max];
	int top;
}stack;

void push(stack *st,int x)
{
	if(st->top==max-1)
	  printf("\n Stack is overflow\n");
	else
	{
		st->top=st->top+1;
		st->item[st->top]=x;
	}	
}
int empty(stack st)
{
	if(st.top==-1)
	  return 1;
	else
	  return 0; 
}

int pop(stack * st)
{
	int x;
	if(empty(*st))
	{
	  printf("\n Stack is underflow");
	  x=0;
	}
	else
	{
		x=st->item[st->top];
		st->top=st->top-1;
	}return x;	  
}
int  stacktop(stack st)
{
	if(!empty(st))
	  return(st.item[st.top]);
	else
	  return 0;
}

void display(stack st)
{
	int i;
	printf("\n stack elements are\n");
	for(i=st.top;i=0;i--)
	  printf("%d\n",st.item[i]);
	  
}
void main()
{
	int ch,item;
	struct stack st;
	st.top=-1;
	do
	{
		printf("\n 1.PUSH 2.POP 3.PEEP 4.EXIT\n");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n Enter elements to insert:");
			       scanf("%d",&item);
			       push(&st,item);
			       display(st);break;
			case 2:item=pop(&st);
			       if(item!=0)
			       printf("\n deleted elements are= %d",item);
			       display(st);break;
			case 3:item=stacktop(st);
			       if(item!=0)
			       printf("\n top item= %d",item);
			       display(st);break;
			case 4:printf("\n Thank you");
			       break;
			default:printf("\n INVALID CHOICE");
			        break;			 
		}
    }while(ch>=1 &&ch<=3);
}
	  
		
		
		
