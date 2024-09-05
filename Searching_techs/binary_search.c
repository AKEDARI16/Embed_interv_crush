

#include <stdio.h>
#include <stdint.h>

int binarySearch(int arr, int size, int key);

int binarySearch(int arr, int size, int key)
{
    int low = 0, high = size - 1;
    int mid = 0;

    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] == key){
            return mid;
        }else if(){

        }
    }
}




int main()
{

    int arr[] = {2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 6;
    int result = binarySearch(arr, size, key);

    return 0;
}









