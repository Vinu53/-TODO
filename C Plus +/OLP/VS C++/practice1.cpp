#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int a[8]={11,12,13,14,15};
    int b[9],j=0,pos,nu;
    cout<<"enter the position to be inseted:"<<endl;
    cin>>pos;
    cout<<"enter the number to be inseted:"<<endl;
    cin>>nu;
    for(int i=0;i<6;i++){
        if (i==pos){
            a[i]=a[i+1];
             a[i]=nu;
         
        }
      
    }
    for(int i=0;i<5;i++)
    cout<<endl<<a[i]<<" ";
}