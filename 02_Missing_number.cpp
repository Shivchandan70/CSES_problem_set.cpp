#include<iostream>
#include<limits.h>
using namespace std;
int Missing(int a[],int n){
    int max=a[0];
    int min=a[0];
    int B[32768]={0};
    for(int i=0;i<n;i++){
        if(max<a[i])
        max=a[i];
        else if(min>a[i])
        min=a[i];
    }
    
    for(int i=0;i<n;i++){
        B[a[i]]++;
    }
        for(int i=min;i<max+1;i++){
            if(B[i]==0)
            return i;
        }
        return -1;
}
int main(){
int a[]={1,3,5,7,9,6,8,2};
int n=sizeof(a)/sizeof(a[0]);
cout<<Missing(a,n);
}