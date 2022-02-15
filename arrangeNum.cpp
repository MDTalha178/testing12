#include<iostream>
using namespace std;

void updateNum(int *arr, int n){
    for(int i=0; i<n; i++){
        int start=0;
        int end= n-1;
        
        int temp=1;
        while(start<=end){
            if(temp%2==1){
                arr[start]=temp;
                temp++;
                start++;
            }
            else{
                arr[end]=temp;
                temp++;
                end--;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    updateNum(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}