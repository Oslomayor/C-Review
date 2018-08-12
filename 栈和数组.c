/* Auguest 2nd, 2018 @ home Lihai */
/* 栈和数组 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int push(int stack[], int item, int *top)
{
	if(*top<MAX)
    {
		/* 自加自减的优先级大于指针 */
		(*top)++;
        stack[*top] = item;
    }
    else return -1;
    return *top;
    
}

void pop(int stack[], int *top)
{
	if(top>=0)
    { 
        stack[*top] = 0;
        (*top)--;
    }
    else return -1;
    return *top;
}

void output(int stack[], int *top)
{
	int topp;
	topp = *top;
    printf("********************\n");
    printf("data in stack:\n");
	while(topp>0)
	{
		printf("%d\n", stack[topp]);
        topp--;
    }
    printf("********************\n");
}

int main()
{
	int top = 0;
    int data[100]={0};
	char c,cache[10];
    
    while()
    {
		/* 如何使用sacnf 同时接收字符串和数字，比如说 "pop", "push 5" */
    }
    
	system("pause");
	return 0;
}
