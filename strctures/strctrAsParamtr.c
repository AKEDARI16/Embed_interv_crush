

#include <stdio.h>
#include <stdlib.h>

struct sqar{
    int len;
    int brdth;
}sr;

void changeStructValue(struct sqar sr);
void StrctValuesByRefernce(struct sqar *sr);

void changeStructValue(struct sqar sr)
{
    sr.brdth = 5;
    sr.len = 6;
    printf(" Here The length and brdth are: %d , %d\n",sr.len,sr.brdth);
}

void StrctValuesByRefernce(struct sqar *sr)
{
    sr->brdth = 7;
    sr->len = 9;
    printf(" refernce Here The length and brdth are: %d , %d\n",sr->len,sr->brdth);
}

void findArea(struct sqar sr)
{
    int area = sr.len * sr.brdth;
    printf(" The are of the square is : %d",area);
}

int main(void)
{
    sr.len = 20;
    sr.brdth = 10;
    printf(" The length and brdth are: %d , %d\n",sr.len,sr.brdth);

     // Allocate memory for the pointer
    struct sqar *ptr = (struct sqar *)malloc(sizeof(struct sqar));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    ptr->len = 11;
    ptr->brdth = 22;
    printf(" The length and brdth are: %d , %d\n",ptr->len,ptr->brdth);

    printf(" The length and brdth are: %d , %d\n",sr.len,sr.brdth);
    changeStructValue(sr);

    StrctValuesByRefernce(&sr);
    printf(" iiiThe length and brdth are: %d , %d\n",sr.len,sr.brdth);

    StrctValuesByRefernce(ptr);
    printf(" yuThe length and brdth are: %d , %d\n",ptr->len,ptr->brdth);

    findArea(sr);
    free(ptr);
    return 0;
}



