#include <stdio.h> 
#define PrintInt(expr) printf("%s : %d\n",#expr,(expr))

int main()  
{
    int y = 100;
    int *p;
    p = malloc(sizeof(int));
    *p = 10;
    /* 注释出错了 */
    //y = y/*p; /*dividing y by *p */;
    y = y/(*p); /*dividing y by *p */;
    PrintInt(y);
    return 0;
}
