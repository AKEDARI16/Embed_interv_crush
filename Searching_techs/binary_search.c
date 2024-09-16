

#include <stdio.h>
#include <stdint.h>

int binarySearch(int *arr, int size, int key);

int binarySearch(int *arr, int size, int key)
{
    int low = 0, high = size - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == key){
            return mid;
        }else if(key > arr[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
}

int main()
{
    int arr[] = {2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 8;
    int result = binarySearch(arr, size, key);
    printf(" the index of the key is : %d\n",result);
    return 0;
}









