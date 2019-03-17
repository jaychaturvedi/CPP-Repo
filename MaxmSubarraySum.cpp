#include <iostream>
using namespace std;

int main(){

int n;
int arr[100];
int maximumsum = 0;
int currentsum=0;
int mi=-1;
int mj=-1;
cout <<"Enter n : ";
cin >> n;
cout << " Enter n elements of array : ";
for(int i=0;i<n;i++){
    cin >> arr[i];
}

for (int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        currentsum = 0;
        for(int k=i; k<=j;k++){
                currentsum +=arr[k];
        }

        if(currentsum > maximumsum){
            maximumsum = currentsum;
            mi = i;
            mj = j;}
    }
}
cout << "Maximum sum is " << maximumsum <<endl << "For subarray ";
for(int k=mi; k<=mj;k++){
                cout << arr[k] << " ";
        }
return 0;
}
