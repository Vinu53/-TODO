// Ascii value
/*#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter a character;"<<endl;
    cin>>c;
    cout<<"the ascii value of c is : "<<int(c)<<endl;
    cout<<sizeof(c)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
for(int i=0;i<5;i++){
    cout<<"  "<<i;
}
cout<<endl;
} 
// pgm to sqroot of a number
#include<iostream>
#include<math.h>
using namespace std;
float sqroot(int n ){
    float x;
    x=pow(n,0.5);
    return x;
}
int main(){
    cout<<sqroot(4);
} 
// pgm to find cube using macros
#include<iostream>
using namespace std;
# define CUBE(x) (x*x*x)
int main(){

    cout<<"cube is "<<CUBE(2);
    return 0;
}
// pgm to check vowel or consonant
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char c,lc;
    string uc;
    cout<<"enter a charatarer :";
    cin>>c;
    lc=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    cout<<"enter a word:";
    cin>>uc;
    cout<<strlen(uc);
}
// pgm to check factorial of a number
#include<iostream>
using namespace std;
int main(){
    int fact=1;
    int n=4;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"factorial is:"<<fact;
}
// pgm to check prime number
#include<iostream>
using namespace std;
int main(){ 
    int n;
    int flag=1;
    cout<<"enter a number:";
    cin>>n;
    if (n==1)
    {
        cout<<"not prime";
    }
    else{
         for(int i=2;i<=n/2+1;i++){
            if (n%i==0){
                flag=0;
                break;}
            }
         }
        if (flag==1){
            cout<<"prime";}

        else{
            cout<<"not prime";}
} 
//pgm to print tables:
#include<iostream>
using namespace std;
int main(){
    int a=0,b=1;
    for(int i=1;i<=10;i++){
        cout<<2<<'*'<<i<<'='<<' '<<2*i<<endl;
    }
}
//
// pgm to find palindrome
#include<iostream>
using namespace std;
int main(){
    int rem,rev=0;
    int n=1211;
    int x=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (x==rev)
        cout<<"palindrome";
    else
        cout<<"not palindrome";
}
// pgm to find hcf of two numbers
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    int z;
    z=min(a,b);
    while(z>=1){
        if (a%z==0&& b%z==0){
            cout<<z;
            break;}
        else{
            z--;}
        }
    }
// pgm to find number raised to n

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int bn=1,pn=4;
    for(int i=1;i<=pn;i++){
        bn*=2;
    }
    cout<<bn;
}
// pgm to fing number of digits abd sum of digits
#include<iostream>
using namespace std;
int main(){
int rem,x=0,y=0;
int num=123;
while(num!=0){
    rem=num%10;
    x+=rem;
    y++;
    num/=10;
}
cout<<"the sum of digits is :"<<x<<endl;
cout<<"the  number of digits is: "<<y;
}
// pgm to print fibonacci numbers
#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c;
    int n=5;
    while(n>0){
        cout<<" "<<a;
        c=a+b;
        a=b;
        b=c;

        n--;
    }
}
// pgm to check whether it is armstrong or not
#include<iostream>
#include<math.h>
using namespace std;

void arm(int n,int b){
      int sum=0;
      int x,rem;
      x=n;
       while(n!=0){
        rem=n%10;
        sum+=pow(rem,b);
        n/=10;}
    if (sum==x){
        cout<<"it is armstong:"<<endl;

    }
    else{
        cout<<"it is not armstrong"<<endl;
    }
}

int main()
{
    int n=0;
    int b=0,rem;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n!=0){
        rem=n%10;
        b+=1;
        n/=10;
    }
  arm(n,b);

}
//pgm to check unique number or not
#include<iostream>
using namespace std;
int main(){
    int n,arr[100],rem,k=0,flag=1;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int x;
    x=n;
    while(n!=0){
        rem=n%10;
        arr[k]=rem;
        n=n/10;
        k++;
    }
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if (arr[i]==arr[j]){
                flag=0;
            }
        }
    }
    if (flag==1){
        cout<<"the number is unique";

    }
    else{
            cout<<"the number is not unique";
    }
}
//pgm to find the factors of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number whose factors have to be found out:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if (n%i==0){
            cout<<" "<<i;
        }
    }

}
// pgm to 




