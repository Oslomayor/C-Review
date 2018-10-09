#include <stdio.h>

char *strA()
{   /* str是局部变量，函数退出后销毁，因此在主函数调用会输出乱码 */
    char str[] = "hello world";
    return str;
}

char *strB()
{
    /* str是指针变量，hello world 在编译时为常量，在主函数中调用会正常输出 */
    char *str = "hello world";
    return str;
}

char *strC()
{
    /* str是静态变量，函数退出后仍存在，因此在主函数调用正常输出 */
    static char str[] = "hello world";
    return str;
}

int main()
{
    printf("Call strA: %s\n",strA());
    printf("Call strB: %s\n",strB());
    printf("Call strC: %s\n",strC());
	  return 0;
}
