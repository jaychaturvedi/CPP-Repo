#include <iostream>

using namespace std;
//Pivot is the lowest element in the array.
int find_pivot(int* arr,int start,int last)//binary search is implemented to find the pivot.
{
    int mid;
    if(arr[start]<arr[last])
        return 0;
    while(start<=last){
        mid = (start+last)/2;
        if(arr[mid]>arr[mid+1])
        {
            return mid+1;
        }
        if(arr[start] <= arr[mid])
        {
            start = mid+1;
        }
        else{
            last = mid -1;
        }
    }
}

int main(){
    int arr[] = {6,7,8,9,1,2,3,4,5};
    int arrlength = sizeof(arr)/sizeof(arr[0]);
    cout << "the pivot is at "<<find_pivot(arr,0,arrlength-1);
    return 0;
}
