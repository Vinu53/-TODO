
#include<iostream>
using namespace std;
int add(int a, int b,int c){
    return a+b+c;
}
int main()
{
    cout<<add(2,3,5);
    return 0;
}
// pgm to calculate avg
#include<iostream>
using namespace std;
int main()
{
    int age;
    int total=0;
    int numberofpeopleenterd=0;
    cout<<"enter age or enter -1 to quit"<<endl;
    cin>>age;
    while(age!=-1){
        total=total+age;
        numberofpeopleenterd++;
        cout<<"enter next age or -1 to quit"<<endl;
        cin>>age;

    }
    cout<<"no of peple entered: "<<numberofpeopleenterd<<endl;
    cout<<"avg age is "<<total/numberofpeopleenterd<<endl;
    return 0;
}
// 4) simple program
#include<iostream>
using namespace std;
int main()
{
    int age=23;
    int money=4000;
    if (age>21 && money>450){
        cout<<"you are allowed"<<endl;
    }
}
// genetate random numbers
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    srand(40);
    for(int i=1;i<10;i++){
        cout<<rand()<<endl;
    }
}
#include<iostream>

using namespace std;
int main(){
    int nu;
    for(int i=0;i<3;i++){
        cout<<"enter a number:";
        cin>>nu;
        for (int j=0;j<nu;j++){
            cout<<"$";
    
            
        }
    }
} 

#include<iostream>

using namespace std;
int main(){
    int x,y;
    int fc=0;
    x=15;
    y=2;
    for(int i=2;i<=x/2+1;i++){
        if (x%i==0){
            fc+=1;
        }
    }
    cout<<"the count is: "<<fc;
}







