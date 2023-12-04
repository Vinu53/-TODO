#include <iostream>
#include<cstring>
using namespace std;
class Employee{
private:
    string empname,equa,eadd,eemail,edes,epro,erew,edoj,edob,id;
    float eage,epho,enol,eid,no;
public:
    void setemp();
    void showemp();

   virtual void assempid()=0;
    virtual float calsal()=0;
    virtual void asspro()=0;
    virtual int leavebalance()=0;
};
void Employee::setemp(){
    cout<<"enter employee name:";
    cin>>empname;
    cout<<"enter qualification:";
    cin>>equa;
    cout<<"enter age:";
    cin>>eage;
}

void Employee::showemp(){
cout<<endl<<empname<<"\t"<<equa<<"\t"<<eage;
}
class abc:public Employee{
        public:
     string id,pro;
     float sal,lb=0,perday,lbb;

     void assempid(){
        cout<<"enter emplyoee id:";
        cin>>id;
     }
     float calsal(){
     cout<<"Enter the salary per day:  ";
     cin>>perday;
     sal=perday*30;
     return sal;
     }
     void asspro(){
        cout<<"enter the project allocated:";
        cin>>pro;
     }
     int leavebalance(){
         int z=12;
         cout<<"enter how many leaves:";
         cin>>lb;
         lbb=z-lb;
         return lbb;
     }

     string find(){
         return id;
     }

     string term(){
        return id;
     }

     void dis(){
        setemp();
        assempid();
        calsal();
        asspro();
        leavebalance();
        cout<<endl;
        }
    void diss(){
    showemp();
    cout<<"\t"<<id<<"\t"<<sal<<"\t"<<pro<<"\t"<<lbb;
    }

};

class xyz:public Employee{
    private:
     string id,pro;
     float sal,lb,exp,lbb,pd;
    public:
     void assempid(){
        cout<<"enter emplyoee id:";
        cin>>id;
     }
     float calsal(){
     cout<<"Enter the salary amount per day:";
        cin>>pd;
        sal=pd*30;
        return sal;
     }
     void asspro(){
        cout<<"enter the project domain:";
        cin>>pro;
     }
     int leavebalance(){
         int y=12;
         cout<<"enter how many leaves:";
         cin>>lb;
         lbb=y-lb;
         return lbb;
     }

      string find(){
         return id;
     }

     string term(){
        return id;
     }
     void dis(){
        setemp();
        assempid();
        calsal();
        asspro();
        leavebalance();
        cout<<endl;
        }
    void diss(){

    showemp();
    cout<<"\t"<<id<<"\t"<<sal<<"\t"<<pro<<"\t"<<lbb;
    }

    void calexp(){
    cout<<"enter expeince :";
    cin>>exp;
    cout<<"the experince is :"<<exp;
    }

};

class myexception1{
};
class myexception2{
};

int main(){

    abc e[3];
    int j;
    for(int i=0;i<=1;i++)
        e[i].dis();
    cout<<"Ename"<<"\t"<<"Qual"<<"\t"<<"age"<<"\t"<<"ID"<<"\t"<<"salary"<<"\t"<<"project"<<"\t"<<"leaves"<<"\t"<<endl;
    for(int i=0;i<=1;i++)
        e[i].diss();
    cout<<endl;
    string findi,ter;
    cout<<endl;
    cout<<"enter employee id  whose details u want to print: ";
    cin>>findi;
    for(j=0;j<=1;j++){
        if(e[j].find()==findi){
            e[j].showemp();
            break;
            }
        }
    if (j==2){
        cout<<"emplyoee not found:";
    }
    cout<<endl;
    cout<<"enter employee id whom u want to terminate:";
    cin>>ter;
    for(int i=0;i<=1;i++){
        if (e[i].term()==ter)
            continue;
        else
            e[i].showemp();}

    try{
        throw myexception1();
    }
     catch (myexception1 t) {

            cout << endl<<"Caught exception "
                 << "of My Exception one"
                 << "class." << endl;
        }


    xyz x[3];
    int k;
    for(int i=0;i<=1;i++)
        x[i].dis();
    cout<<"Ename"<<"\t"<<"Qual"<<"\t"<<"age"<<"\t"<<"ID"<<"\t"<<"salary"<<"\t"<<"project"<<"\t"<<"leaves"<<"\t"<<endl;
    for(int i=0;i<=1;i++)
        x[i].diss();
    cout<<endl;
    string findit,terr;
    cout<<endl;
    cout<<"enter employee id  whose details u want to print: ";
    cin>>findit;
    for(k=0;k<=1;k++){
        if(x[k].find()==findit){
            x[k].showemp();
            break;
            }
        }
    if (k==2){
        cout<<"emplyoee not found:";
    }
    cout<<endl;
    cout<<"enter employee id whom u want to terminate:";
    cin>>terr;
    for(int i=0;i<=1;i++){
        if (x[i].term()==terr)
            continue;
        else
            x[i].showemp();}

    try{
        throw myexception2();
        
    }
     catch (myexception2 t) {

            cout << endl<<"Caught exception "
                 << "of My Exception class"
                 << "two" << endl;
        }
}

