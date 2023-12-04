#include<iostream>
#include <fstream>  
using namespace std;  
int main () {  
  string srg;  
  ifstream f;
  f.open("gg.txt");  
  while ( f )  
    {  
        getline(cin,srg);

      cout << srg <<endl;  
    }  
    f.close();  
   
  return 0;  
}