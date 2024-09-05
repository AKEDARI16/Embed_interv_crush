


#include <stdio.h>





int main(void)
{
    int num = 10;
    int *ptr;
    ptr = &num;

    printf(" The address : %p \t %p, value : %d \n ",ptr, &num, num);

    printf("the incremented value is : %d \n ",++*ptr);

    printf("the incremented value is3 : %d \n ",*ptr++);

    printf("the incremented value is4 : %d \n ",num);

    printf("the incremented value is5 : %p \n ",&num);

    


    return 0;
}