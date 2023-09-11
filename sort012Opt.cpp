// Dutch National Flag Algorithm (3 Variable)

#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int * sort012opt(int *arr, int n){
int l=0,m=0;
int r=n-1;
while(m<=r){
if(arr[m]==0) {
int temp=arr[l];
arr[l]=arr[m];
arr[m]=temp;
m++,l++;
} else if(arr[m]==1) m++;
else {
int temp=arr[m];
arr[m]=arr[r];
arr[r]=temp;
r--,m++;
}
}
return arr;
}

void printarray(int *arr,int n){
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
}
int main(){
int arr[]={1,0,2,1,1,0,1};
int size=sizeof(arr)/sizeof(int);
int* ansar = sort012opt(arr,size);
printarray(ansar,size);
return 0;
}