/* C语言不允许同名函数存在，如果要用C语言实现函数重载，需要使用函数指针来实现 */

#include<stdio.h>

void func_int(void* a) {
    printf("%d\n", *(int*)a);
}

void func_double(void* f) {
    printf("%f.2\n", *(double*)f);
}

typedef void (*ptr) (void* n);

void c_func(ptr p, void* para) {
    p(para);
}







#if 0
void func_int(void * a)
{
    printf("%d\n",*(int*)a);  //输出int类型，注意 void * 转化为int
}
 
void func_double(void * b)
{
    printf("%.2f\n",*(double*)b);
}
 
typedef void (*ptr)(void *);  //typedef申明一个函数指针
 
void c_func(ptr p,void *param)
{
     p(param);                //调用对应函数
}
#endif

int main()
{
    int a = 23;
    double b = 23.23;
    c_func(func_int,&a);
    c_func(func_double,&b);
    return 0;
}

