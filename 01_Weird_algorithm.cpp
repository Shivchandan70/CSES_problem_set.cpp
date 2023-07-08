#include<iostream>
using namespace std;
void fun(int x){
    while(x!=1){
        cout<<x<<" ";
         if(x%2==0)
         x=x/2;
         else{
             x=3*x+1;
         }
    }

}
int main(){
int n;
cout<<"enter number\n";
cin>>n;
fun(3);
}