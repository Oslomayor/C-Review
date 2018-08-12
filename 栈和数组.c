/* 19:42, Auguest 2nd, 2018 @ home Lihai */
/* 栈和数组 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

/* 出栈操作 */
int push(int stack[], int item, int *top)
{
    if(*top<MAX)
    {
        /* 自加的优先级大于指针 */
        (*top)++;
        stack[*top] = item;
    }
    else return -1;
    return *top;
    
}

/* 入栈操作 */
void pop(int stack[], int *top)
{
    if(top>=0)
    { 
        stack[*top] = 0;
        /* 自减的优先级大于指针 */
        (*top)--;
    }
    else return -1;
    return *top;
}

/* 显示栈的内容 */
void output(int stack[], int *top)
{
    int topp;
    topp = *top;
    printf("********************\n");
    printf("now in stack:\n");
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
    char cache[20];
    int para;
    
    while(1)
    {
        printf("cmd->");
        /* 用 gets() 获取一行命令，该函数自动剔除Enter */
        gets(cache);
        /* 用 strncmp() 解析字符串 */
        if(strncmp(cache,"pop",3)==0)
        {
            pop(data, &top);
            output(data, &top);
        }
        else if(strncmp(cache,"push",4)==0)
        { 
            char temp[15];
            /* 提取push后面的数字 */
            strcpy(temp, (cache+5));
            /* 转字符串为整型数字 */
            para = atoi(temp);
            push(data, para, &top);
            output(data, &top);
        }
        else if(strcmp(cache,"clean",5)*strcmp(cache,"clr",5)*strcmp(cache,"cls",5)==0)
        {     /* 清屏 */
            system("cls");
        }
        else
        { 
            printf("This command is not supported yet!\n");
        }
    }
    
    return 0;
}
