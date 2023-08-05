#include<iostream>
using namespace std;
void sort012(int a[],int size){
    int arr[3]={0,0,0};
    for(int i=0;i<size;i++){
        if(a[i]==0) arr[0]+=1;
        else if(a[i]==1) arr[1]+=1;
        if(a[i]==2) arr[2]+=1;
    }
    for(int i=0;i<size;i++){
        if(arr[0]>0){
            a[i]=0;
            arr[0]--;
        }
        else if(arr[1]>0){
            a[i]=1;
            arr[1]--;
        } 
        else
            a[i]=2;
    }
}

void printarray(int* a,int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int arr[]={1,1,2,0,2,1};
    sort012(arr,6);
    printarray(arr,6);
}