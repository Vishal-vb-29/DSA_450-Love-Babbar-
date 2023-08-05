#include<iostream>
#include<limits.h>
#include<array>
using namespace std;
int findMax(int *a,int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}

int findMin(int *a,int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(a[i]<min) min=a[i];
    }
    return min;
}
int main(){
    int arr[]={5,1,2,9,6,7,-5,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int large=findMax(arr,size);
    cout<<"Largest element is : "<<large<<endl;
    int small=findMin(arr,size);
    cout<<"Smallest element is : "<<small;
    return 0; 
}