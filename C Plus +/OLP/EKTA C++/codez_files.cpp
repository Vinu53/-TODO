//1st program


#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  string srg;  
  //ofstream f("ggg.txt");    // or f.open("ggg.txt",ios::app) 
    ofstream f;
    f.open("gg.txt",ios::app);
  //cout<<"emter data that needs to be transfeered to file:";
  f<<"this is first "<<endl;
  f<<"and it continues:"<<endl;
  f.close();
  ifstream i;
  
  i.open("gg.txt");
  string s;
  while(getline(i,s)){
     
      cout<<s<<endl;
      
      
    }    
  
} /*
2// pgm
#include<iostream>        
#include<fstream>
using namespace std;
int main(){
    fstream FileName;               
    FileName.open("FileName", ios::out);    
    if (!FileName){                 
        cout<<"Error while creating the file";    
    }
    else{
        cout<<"File created successfully";    
        FileName.close();           
    }
    return 0;
} */