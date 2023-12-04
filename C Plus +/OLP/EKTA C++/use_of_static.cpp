// if we decalarea  variable as  static then it can be used by all the objects
#include <iostream>  
using namespace std;  
class Account {  
   public:  
       int accno; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       static float rateOfInterest;   
       Account(int accno, string name)   
        {    
             this->accno = accno;    
            this->name = name;    
        }    
       void display()    
        {    
            cout<<accno<< " "<<name<< " "<<rateOfInterest<<endl;   
        }    
};  
float Account::rateOfInterest=6.5;  
int main(void) {  
    Account a1 =Account(201, "Sanjay"); //creating an object of Employee   
    Account a2=Account(202, "Nakul"); //creating an object of Employee  
    a1.display();    
    a2.display();    
    return 0;  
}
// pgm to cohunt the objects
#include <iostream>
using namespace std;
class Account {
   public:
       int accno; //data member (also instance variable)
       string name;
       static int count;
       Account(int accno, string name)
        {
             this->accno = accno;
            this->name = name;
            count++;
        }
       void display()
        {
            cout<<accno<<" "<<name<<endl;
        }
};
int Account::count=0;
int main(void) {
    Account a1 =Account(201, "Sanjay"); //creating an object of Account
    Account a2=Account(202, "Nakul");
     Account a3=Account(203, "Ranjana");
    a1.display();
    a2.display();
    a3.display();
    cout<<"Total Objects are: "<<Account::count;
    return 0;
}
// basic stryucture example
#include <iostream>    
using namespace std;    
 struct Rectangle    {      
   int width, height;      
  Rectangle(int w, int h)      
    {      
        width = w;      
        height = h;      
    }      
  void areaOfRectangle() {       
    cout<<"Area of Rectangle is: "<<(width*height); }      
 };      
int main(void) {    
    struct Rectangle rec=Rectangle(4,6);    
    rec.areaOfRectangle();    
   return 0;    
}