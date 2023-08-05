#include<iostream>
using namespace std;
void movenegative(int *a,int start,int size){
    int end=size-1;
    while(start<end){
        if(a[start]<0 && a[end]<0){
            start++;
        }
        else if(a[start]>0 && a[end]<0){
            swap(a[start],a[end]);
            start++,end--;
        } 
        else if(a[start]<0 && a[end]>0) {
            start++; end--;
        }
        else {
            end--;            
        }
    }
    
}

void printarray(int* a,int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int arr[]={1,-1,-1,-1,-1,-1,-2};
    movenegative(arr,0,7);
    printarray(arr,7);
    return 0;
}