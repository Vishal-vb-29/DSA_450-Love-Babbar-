#include <iostream>
#include <vector>
#include <array>
using namespace std;
void reversearray(int *a,int size){
    int left=0;
    int right=size-1;
    while(left<right){
        int temp=a[left];
        a[left]=a[right];
        a[right]=temp;
        right--,left++;
    }
}
void printarray(int* a,int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[]={5,4,8,9,6,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    reversearray(arr,n);
    printarray(arr,n);
    return 0;
}