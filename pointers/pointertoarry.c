
#include <stdio.h>
#include <stdlib.h>

int *createAnArray(int size)
{
    int *ptr;
    ptr = (int*)malloc(size*sizeof(int));
    
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element  of the arr : ",i+1);
        scanf("%d",&ptr[i]);
        //ptr[i] = i+1;
    }
    return ptr;
}
int *sendAnArray(int *arr,int size)
{
    for (int i = 0; i < size; i++)
    {
      printf("now : %d\t",arr[i]); 
    }

}
int main()
{
    int *arr;
    int size = 5;
    arr = createAnArray(5);
    for (int i = 0; i < 5; i++)
    {
      printf("%d\t",arr[i]); 
    }
    sendAnArray(arr,size);
    return 0;
}





