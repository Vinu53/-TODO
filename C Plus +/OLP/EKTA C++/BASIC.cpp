/*
1) pgm to find cube using macros
2) pgm to find armstong numbers from a given array


7) prime number of given times


macro is a segment of a code which is replaced by the value of macro
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
4) pgm to delete substring from string
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "helloworld";
    string su = "wor";
    size_t found = s.find(su); // Find the position of 'su' in 's'

    if (found != string::npos)
    {
        s.erase(found, su.length()); // Erase the 'su' substring
        cout << s << endl;
    }
    else
    {
        cout << "Substring not found in the string." << endl;
    }

    return 0;
}

5) pgm to print only desired part
#include <iostream>
#include<cstring>
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
6) mystery number
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

*/

//pgm to print unique or remove duplicated terms:
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "hello world";
    string x = "";
    for(int i=0;i<s.length();i++)
    {
        int c= 0;
        for(int j=0;j<s.length();j++)
        {
            if(s[i] == s[j])
            {
                c+=1;
            }
        }
        if (c==1)
        {
            x+=s[i];
        }
    }
    cout<<x;
    
}


