/* �ݹ�ʵ���ַ�����ת */

#include <stdio.h>

/* ��ڲ����� �ַ�����ַ�����±꣬���±�*/
/* ���ز����� ��                        */
void reverse(char s[], int left, int right)
{
	if(left == right)	return;
    else{
		char c;
        int i;
        c = s[left];
        for(i=left;i<=right-1;i++)
			s[i] = s[i+1];
        s[right] = c;
        reverse(s, left, right-1);
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
