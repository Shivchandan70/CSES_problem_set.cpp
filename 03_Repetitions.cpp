#include<iostream>
#include<string.h>
using namespace std;
int Duplicate(string s){
    int a[26]={0};

    for(int i=0;i<s.length();i++){
        a[s[i]-65]++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
int main(){
 string s;
 cout<<"enter string\n";
 cin>>s;
cout<<Duplicate(s);
}