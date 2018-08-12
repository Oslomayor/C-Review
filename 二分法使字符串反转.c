/* 二分法实现字符串反转 */

#include <stdio.h>

/* 入口参数： 字符串地址，左下标，右下标*/
/* 返回参数： 无                        */
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
