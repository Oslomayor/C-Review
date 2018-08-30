# 海康威视C语言考题解析

### 1.执行下述 main 函数后，输出结果是多少（） 

```C
int main()
{
    int i = 10;
    switch(i)
    {
        case 9: i++;
        case 10: i++;
        case 11: i++;
        default i++;
    }
    printf("result i = %d\n",i);
}
```

##### A. 10

##### B. 11

##### C. 12

##### D.13

### 2. 下面的程序在64位Linux系统环境中的输出结果是（） 

```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[] = "hikvision";
    char *p = str;
    int n = 100;
    printf("%u,%u,%u,%u\n",sizeof(str),sizeof(p),sizeof(*p),sizeof(n));
}
```
##### A. 10,8,9,4

##### B. 9,4,9,4

##### C. 9,8,9,4

##### D. 10,8,1,4

### 3. 数值 0xdeadbeef 在小端字节序处理器的存储器中的存储方式是（）

##### A. XX00: dead XX04: beef

##### B. XX00: efbe XX04: adde

##### C. XX00: beef XX04: dead

##### D. XX00: adde XX04: efbe

### 4. 若下面代码的 test 指针的值为 0x12345678，则 test_p[1] 的值是（）

```c
char test[8] = {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08};
int *test_p = (int *)test;
```

##### A. 0x1234567C

##### B. 0x12345679

##### C. 0x12345678

##### D. 0x1234567A

### 5. 下面程序的输出结果是（）

```C
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, innt *b)
{
    int *t;
    t = a;
    a = b;
    b = t;
}
main()
{
    int x = 1,y = 2;
    int *p = &x, *q = &y;
    swap(p,q);
    printf("%d %d\n",*p,*q);
}
```

##### A. 1 2

##### B. 2 1

##### C. 2 2 

##### D. 1 1

### 6. 下面程序的输出结果是（）

```C
#include <stdio.h>
#include <stdlib.h>
struct country
{
    int idx;
    char name[30];
}list[5] = {1,"China",2,"USA",3,"Russia",4,"England",5,"France"};
int main()
{
    int i;
    for(i=1;i<5;i=i+2)
    {
        printf("%d%c",list[i].idx,list[i].name[0]);
    }
}
```

##### A. 1C2U

##### B. 3U4E

##### C. 1C3U

##### D. 2U4E

### 7. 定义 int a = (3 != 2); 则 a 的值是多少（）

##### A. 2

##### B. 1

##### C. 3

##### D. 0

### 8. 执行语句 a = 30+20%3*2; 请问 a 的值是多少（）

##### A. 4

##### B. 64

##### C. 34

##### D. 32

### 9. （多选）在 func() 函数中申请的 static 型变量 V 有下述哪些特性（）

##### A. V存在于 func() 被调用的期间

##### B. V能被整个程序使用

##### C. V仅能被 func() 使用

##### D. V存在于整个程序的执行过程

### 10. （多选）关于链表，正确的选项有（）

##### A. 在运行时可以动态添加

##### B. 查找元素不需要顺序查找

##### C. 物理空间不连续，空间开销更大

##### D. 可在任意节点插入元素

### 11. （多选）以下关于进程和线程的描述，正确的有（）

##### A. 进程有独立的地址空间，而线程没有

##### B. 进程切换比线程的开销小

##### C. 线程是程序执行的最小单位

##### D. 每个线程拥有自己的堆栈和局部变量
