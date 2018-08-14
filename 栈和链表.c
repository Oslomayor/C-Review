/* 17:06, Auguest 14st, 2018 @ home Lihai */
/* 栈和链表 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int item;
	struct Node *next;
}node, *pnode;
/* node is equal to struct Node, pnode is equal to struct Node* */

/* 入栈操作 */
int push(int item, pnode *top)
{
	pnode temp = (pnode)malloc(sizeof(node));
	temp->item = item;
	temp->next = *top;
	*top = temp;
	return 1;
}
/* 出栈操作 */
int pop(pnode *top)
{
	if((*top)==NULL)
		return 0;
	pnode temp = *top;
	*top = (*top)->next;
	free(temp);
	return 1;
}

/* 遍历栈的内容 */
void output(pnode top)
{
    printf("********************\n");
    printf("now in stack:\n");
    while(top!=NULL)
    {
        printf("%d\n", top->item);
        top = top->next;
    }
    printf("********************\n");
}

int main()
{
	pnode top = NULL;
	char input_cache[20];
	
	push(8, &top);
	push(18, &top);
	push(28, &top);
	pop(&top);
	output(top);
	push(28, &top);
	output(top);
	while(1)
    {
        printf("cmd->");
        /* 用 gets() 获取一行命令，该函数自动剔除Enter */
        gets(input_cache);
        /* 用 strncmp() 解析字符串 */
        if(strncmp(input_cache,"pop",3)==0)
        {
            pop(&top);
            output(top);
        }
        else if(strncmp(input_cache,"push",4)==0)
        { 
            /* 提取push后面的数字,位于cahce[5] */
            /* 转字符串为整型数字 */
            int item;
            item = atoi(input_cache+5);
            push(item, &top);
            output(top);
        }
        else if(strcmp(input_cache,"clean",5)*strcmp(input_cache,"clr",5)*strcmp(input_cache,"cls",5)==0)
        {   /* 清屏 */
            system("cls");
        }
        else if(strncmp(input_cache,"help",4)==0)
        {
            printf("supported command:\n");
            printf("->push [number]\n");
            printf("->pop\n");
            printf("->cls\n");
            printf("->help\n");
        }
        else if(strcmp(input_cache,"")==0)
        {
            /* 执行空语句 */
            ;
        }
        else
        { 
            printf("This command is not supported yet!\n");
        }
    }
	system("pause");
	return 0;
}
