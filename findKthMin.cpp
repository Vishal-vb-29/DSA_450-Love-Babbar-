#include <iostream>
#include<algorithm>
using namespace std;
int findKthMin(int arr[],int l,int r,int k){
    sort(arr,arr+r+1);
    int j=k;
    for(int i=-1;i<=r;){
        i++;
        if(j==0) return arr[i-1];
        if(i>0 && arr[i]==arr[i-1]) continue;
        j--;
    }
}
int main(){
    int arr[]={1,2,2,5,4,8,9,7,7};
    int k=3;
    int kthelement = findKthMin(arr,0,8,3);
    cout<<"Element is : "<<kthelement;
}