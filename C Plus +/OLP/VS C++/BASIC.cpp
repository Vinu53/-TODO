1) pgm to find cube using macros
2) pgm to find armstong numbers from a given array
3)pgm to delete from an array whose index position is given
4) pgm to delete substring from string
5) pgm to print tonly desired part
6) mystery number
7) prime number of given times



1)#include<iostream>
using namespace std;
#define CUBE(x) (x*x*x)
int main()
{
    int n,cube;
    cout<<"Enter any positive number :: ";
    cin>>n;
        cube=CUBE(n);
cout<<"\nThe Cube of Entered Number [ "<<n<<" ] is :: [ "<<cube<<" ]\n";
    return 0;}

2)#include<iostream>
#include<cmath>
using namespace std;
bool armfind(int z){
    int f=z;
    int g=z;
    int rem,ll=0,res=0;
    while(z>0){
        rem=z%10;
        ll++;
        z=z/10; }
     while(f>0){
        rem=f%10;
        res+=pow(rem,ll);
        f=f/10;}
    cout<<res<<endl;
    if (res==g)
        return true;
    else
        return false;}
int main()
{
    int arr[]={1,153,12,11,13,21,1};
    int arm=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(armfind(arr[i])==true){
            arm++;}}
cout<<"the  number of armstrong numbers are:"<<arm;
return 0;
}

3)#include<iostream>
using namespace std;
int main()
{
   int i,a[50],no,pos,size;
    cout<<"Enter array size( Max:50 ) :: ";
    cin>>size;
        cout<<"\nEnter array elements :: \n";
        for(i=0; i<size; i++)
        {
                cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }

  cout<<"\nStored Data in Array :: \n\n";

  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }
cout<<"enter no to be deleted:"<<endl;
cin>>pos;
for(i=0;i<size;i++){

    if (a[i]==pos){
        a[i]=a[i+1];
    }
    else
        continue;
    }

for(i=0;i<size-1;i++){
    cout<<a[i]<<"\t";
  }
}
4)------------------------------------------------>>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char str[80],sub[80];
        int i=0, len, j=0,temp=0;
        cout<<"\nEnter any string :: ";
        gets(str);
        cout<<"enter ssub to dele:";
        gets(sub);
        len=strlen(str);
        for(i=0;i<len;i++){

            if(str[i]==sub[j]){
                while(str[i]==sub[j]){
                    i++;
                    j++;
                }
                if(sub[j]=='\0')
                    continue;}
            else
                cout<<str[i];}
            return 0;}
5->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include <iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

int main()
{
    string s,s1,str;
    int len=0;
    cout<<"enter a string:"<<endl;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
         len++ ;}
    if (len<2)
        cout<<s;
    s1=s.substr(0,2);
    cout<<s1+s1;
}
6)
#include <iostream>
using namespace std;
int main()

{
    int x;
    cout<<"enter value:"<<endl;
    cin>>x;
    for(int i=1;i<x;i++){
           int n=i;
             int rev=0,rem;
        while(n>0){
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }

    if(rev+i==x){
        cout<<rev<<"  "<<i;
        cout<<"done";
        break;}
}

}
7)#include <iostream>
using namespace std;
bool prime(int n){
    if (n<2)
        return 1;
    if (n>=2)
    for(int i=2;i<n/2+1;i++){
        if (n%i==0){
            return 0;
        }
        }
    return 1;
    }

int main(){
    int x=5;
    int c,d=0;
    for(int i=2;i>0;i++){
        if(prime(i)==1){
            c+=i;
            d++;}
    if (d==x){
        cout<<c;
        break;}

}}
 8) pgm to count only digits 
 string s="helloi33 hi3 ji3",l;
int c=0;
int k;
for(int i=0;s[i]!='\0';i++){
    if (isdigit(s[i])){
        l=s[i];
        k=stoi(l);
        c+=k;}
    else
        continue;
}
cout<<c;
}






