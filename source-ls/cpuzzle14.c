#include <stdio.h>
#define PrintInt(expr) printf("%s : %d\n",#expr,(expr))
int FiveTimes(int a)  
{
    int t;
    //t = a<<2 + a;
    t = (a<<2) + a;
    return t;
}
 
int main()  
{
    int a = 1, b = 2,c = 3;
    PrintInt(FiveTimes(a));
    PrintInt(FiveTimes(b));
    PrintInt(FiveTimes(c));
    return 0;
}

#if 0
本题的问题在于函数FiveTimes中的表达式“t = a<<2 + a;”，对于a<<2这个位操作，优先级要比加法要低，所以这个表达式就成了“t = a << (2+a)”，于是我们就得不到我们想要的值。该程序修正如下：
int FiveTimes(int a)  
{
    int t;
    t = (a<<2) + a;
    return t;
}
#endif
