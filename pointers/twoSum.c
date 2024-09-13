

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void twodiff(int *arr, int size, int target);
void twoadd(int *arr, int size, int target);

void twodiff(int *arr, int size, int target)
{
   
    int left = 0;
    int right = 1;
    int result ;
    bool pairfound = false;
    while (right < size)
    {
        result = arr[right] - arr[left];

        if(result ==  target)
        {
            printf(" the indexes are : %d \t :%d\n",arr[right],arr[left]);
            left++;
            right = left + 1;
            pairfound = true;
        }
        else if(result < target)
        {
            right++;
        }else{
            left++;
            if(left == right)
            {
                right++;
            }
        }
       
    }
    if(!pairfound)
    printf("\n  No pair found \n");
}

void twoadd(int *arr, int size, int target)
{
    int left = 0;
    int right = 1;
    int result ;
    bool pairfound = false;
    printf(" the size is : %d \n",size);
    while (right < size)
    {
    result = arr[right] + arr[left];
    if(right < size && left < size){
        if(result ==  target)
        {
            printf(" the values are : %d \t :%d\n",arr[right],arr[left]);
            left++;
            right = left + 1;
            pairfound = true;
        }
        else if(result < target)
        {
            printf(" The inder of right is : %d \t value :%d\n",right,arr[right]);
            right++;
        }else{
            left++;
            if(left == size)
            {

                break;
            }
            printf(" The indexl of left is : %d \t %d\n",left , arr[left]);
        }
    }
       
    }
    if(!pairfound)
    printf("\n  No pair found \n");
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13,19, 20, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetDiff = 20;
    //twodiff(arr,size,targetDiff);
    printf("\n after diff\n");
    twoadd(arr, size, targetDiff);

    return 0;
}


