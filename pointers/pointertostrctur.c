

#include <stdio.h>
#include <stdlib.h>

struct recta{
    int bredth;
    int length;
}r1;




int main(void)
{
    struct recta r2;

    struct recta *p;
    p = &r2;
    p->bredth = 5;
    p->length = 6;

    
    printf("the breadth is : %d\n",p->bredth);

    printf(" th ebredth is : %d \n ",r2.bredth);

    printf(" th ebredth is : %d \n ",r2.length);

    p = (struct recta*)malloc(sizeof(struct recta));
    p->bredth = 7;
    p->length =8;

        
    printf("the breadth is : %d\n",p->bredth);

    printf(" th ebredth is : %d \n ",r2.bredth);

    printf(" th ebredth is : %d \n ",p->length);
    return 0;
}

