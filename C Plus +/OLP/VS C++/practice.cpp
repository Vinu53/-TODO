/*
#include <iostream>
using namespace std;
class Employee{
private:
  string email;
  int age,salary,wt;
public:
    Employee(string email,int salary,int age, int wt){
        this->email=email;
         this->wt=wt;
        this->age=age;
       
        this->salary=salary;
    }
    void df(){
        cout<<"emplurr email id is:"<<email<<salary<<age<<wt;
    }


    
    

};
int main(){
 Employee e1=Employee("vinayakanna4@gmail.com",12000,12,60);
 e1.df();
 
}

/// 2 nd program
#include <iostream>
using namespace std;
class Employee{
private:
    string empname,equa,eadd,eemail,edes,epro,erew,edoj,edob;
    float eage,epho,enol;
public:
    Employee(string empname,string equa,string eadd,string eemail,string edes,string epro,string erew,string edoj,
             string edob,float epho,float enol,float eage)
    {
        this->edob=edob;
        this->epho=epho;
        this->eage=eage;
        this->empname=empname;
        this->equa=equa;
        this->eadd=eadd;
        this->eemail=eemail;
        this->edes=edes;
        this->epro=epro;
        this->erew=erew;
        this->enol=enol;
        this->edoj=edoj;
        }
    void display(){

    cout<<"the Emplyoee name is:"<<empname<<"  "<<"his age is: "<<eage<<" "<<"born on" <<edob<<","<<" "<<" his phone no is:"<<epho<< "  "<<
        "has completed:" <<equa<<"  "<<"has joined the company on:"<<edoj<< "  "<<"as"<<edes<< "  "<<"whose email address is:"<<
        eemail<<"  "<<"has been assigned to project named:"<<epro<<"   "<<"whose current address is :"<<eadd<<"  "<<
        "has been reawrded:"<<erew<<"  "<<"has number of leaves:"<<enol<<"  "<<endl;
    }
    
    void 
};
int main(){
Employee e1("vinayak","BE","hn 226","vinayakanna4@gmail.com","Trainee","jerson","NA","24/09/2021","19/04/2000",8904434882,12,21 );
e1.display();
}

/// 3 pgm

#include <iostream>
#include<cstring>
using namespace std;
class Employee{
private:
    string empname,equa,eadd,eemail,edes,epro,erew,edoj,edob;
    float eage,epho,enol,eid;
public:
     void setemp();
     void assid();
     void showemp();

};
void Employee::setemp(){
    cout<<"enter emplyoee name:";
    getline(cin,empname);
    cout<<"enter qualifivation:";
    cin>>equa;
    cout<<"enter email addresee:";
    cin>>eemail;

}
void Employee::assid(){
 cout<<"enter emp id:";
 cin>>eid;


}

void Employee::showemp(){

    cout<<empname<<equa<<eemail<<eid;

int main(){
Employee e1;
e1.setemp();
e1.showemp();
}

#include<iostream>
using namespace  std;
class fir{
     private:
     int a;
     public:
        virtual void s()=0;

};
class sec:public fir{
    public :
    int b;
    void s(){
       
        cout<<"enter value of b";
        cin>>b;
        
    }
    void ss(){
        cout<<"the empid is"<<b;
    }


};
int main(){
sec sc[3];
for(int i=0;i<3;i++){
    sc[i].s();}
for(int i=0;i<3;i++){
    sc[i].ss();
for(i=0;i<3;)
}


}
//// main 
#include <iostream>
#include<cstring>
using namespace std;
class Employee{
private:
    string empname,equa,eadd,eemail,edes,epro,erew,edoj,edob,id;
    float eage,epho,enol,eid;
public:
    void setemp();
    void showemp();
    virtual void assempid()=0;
    virtual void calsal()=0;
    virtual void asspro()=0;
    virtual void leavebalance()=0;
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
cout<<endl<<empname<<"\t"<<equa<<"\t"<<eemail;
}
class tcs:public Employee{
        public:
     string id,pro;
     float sal=0,lb=0;

     void assempid(){
        cout<<"enter emplyoee id:";
        cin>>id;
     }
     void calsal(){
     cout<<"Enter the salary amount:";
        cin>>sal;
     }
     void asspro(){
        cout<<"enter the project allocated:";
        cin>>pro;
     }
     void leavebalance(){
         cout<<"enter the leave balance:";
         cin>>lb;
     }

     void dis(){
        setemp();
        assempid();
        calsal();
        asspro();
        leavebalance();
        }
    void diss(){
    showemp();
    cout<<"\t"<<id<<"\t"<<sal<<"\t"<<pro<<"\t"<<lb;
    }

};
class xyz:public Employee{
    private:
     string id,pro;
     float sal,lb,exp;
    public:
     void assempid(){
        cout<<"enter emplyoee id:";
        cin>>id;
     }
     void calsal(){
     cout<<"Enter the salary amount:";
        cin>>sal;
     }
     void asspro(){
        cout<<"enter the project domain:";
        cin>>pro;
     }
     void leavebalance(){
         cout<<"enter the leave balance:";
         cin>>lb;
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
    cout<<"\t"<<id<<"\t"<<sal<<"\t"<<pro<<"\t"<<lb;
    }

    void calexp(){
    cout<<"enter expeince :";
    cin>>exp;
    cout<<"the experince is :"<<exp;
    }

};

int main(){
   /* xyz t1[3];
    for(int i=0;i<=1;i++){

    t1[i].dis();}

    for(int i=0;i<=1;i++){

    t1[i].diss();} 
    xyz x;
    x.calexp();


} */
#include<iostream>
#include<fstream>
using namespace std;
class stu{

    private:
    int age,rollno;
    public:
    stu(int a, int b){
        age=a;
        rollno=b;

    }
    void get(){

    cout<<age<<"  "<<rollno;
    }
};
int main(){
    stu s(3,4);
    ofstream o1("stu.txt");

    //s.get()
    o1<<s.get;
    o1.close();

   }




    