
#include <stdio.h>
#include <stdlib.h>


void fun1(int num);
int fun2(int num);

void fun1(int num)
{
    if(num > 0){
    printf(" the num is : %d \n",num);
    fun1(num - 1);
    }
}

int fun2(int num)
{
    if(num > 0){
    return fun2(num-1)+num;
    //fun1(num - 2);
    //printf(" the fun2num is : %d \n",num);
    
    }
    return 0;
}

int main()
{
   // fun1(4);
    int a = 5;
    fun2(a);
    printf(" the fun2 num is is : %d \n",a);
    return 0;
}


