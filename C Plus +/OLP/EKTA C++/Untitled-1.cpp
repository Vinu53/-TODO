#include<iostream>
#include<cmath>
void takearrayb (int *arr)
{
  int sum=0;
  for(int i=0;i<4;i++)
  {
    sum+=*(arr+i);
  }
  std::cout<<sum;
}
using namespace std;  
int main () {  
 
 int a[] = {10,2,3,4};
 takearrayb(a);

}