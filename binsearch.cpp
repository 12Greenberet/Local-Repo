#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int target){
    int left = 0, right = n - 1;
    
    while(left<right){
        int mid = left + (right - left)/2;

        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return -1;
};

int main(){
    int arr[7] = {4,51,2,0,78,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    cout<<binary_search(arr, n, target)<<endl;
}