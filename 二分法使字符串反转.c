/* ���ַ�ʵ���ַ�����ת */

#include <stdio.h>

/* ��ڲ����� �ַ�����ַ�����±꣬���±�*/
/* ���ز����� ��                        */
void reverse(char s[], int left, int right)
{
	int i;
    char c;
	for(i=0;i<=(right-left)/2;i++){
		c = s[right-i];
        s[right-i] = s[left+i];
        s[left+i] = c;
    }
}
 
int main()
{
	char s[10] = "abcdefghi";
    printf("%s\n",s);
    reverse(s,0,8);
    printf("%s\n",s);
	system("pause");
	return 0;
}
