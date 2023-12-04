//pgm to find the no of times occurence of a string
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    char ch[50];
    char c;
    int i,count=0;
    cout<<"enter a string:"<<endl;
    cin.getline(ch,50);
    cout<<"enter a chra to be found:"<<endl;
    cin>>c; 
    for(i=0;ch[i]!='\0';i++){
        if (ch[i]==c){
        count++;}
    }
    if (count==0){
        cout<<"no charater is present";
    }
    else{
        cout<<"the count is:"<<count;
    }
}
// pgm to find length of a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,lg=0;
    char ch[50];
    cout<<"enter a string:"<<endl;
    cin.getline(ch,50);
    for(i=0;ch[i]!='\0';i++)
        {
            if (ch[i]==' '){
            continue;
        }
        else{
            lg++;
        }

    }
    cout<<"the length is:"<<lg;
}
// pgm to find length
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string st="geeks for geeks";
    cout<<st.size()<<endl;
    cout<<st.length()<<endl;
    //cout<<strlen(st)<<endl; // this wont work all strings fn's work only for chararcter array not string
    char s[50]="geeks for geeks";
    cout<<strlen(s);
}
// replacing words in string
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[50]="geeks for geeks";
    char b[40]="ggg";
    string st="geeks for geeks";
    string stt="ggggg";
    int x;
    x=st.length();
    for(int i=1;i<=x;i++){
        if (i%3==0){
            cout<<'$';}

    else{
        cout<<st[i];}
    }
}
// pgm to compare two strings withut strcmp
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
     char str1[50],str2[50],i=0,j=0,flag=0;

     cout<<"\nEnter first string :: ";
     gets(str1);

     cout<<"\nEnter Second string :: ";
     gets(str2);

      while(str1[i]!='\0')
      {
        i++;
      }
      while(str2[j]!='\0')
      {
        j++;
      }
     if(i!=j)
     {
        flag=0;
     }
     else
     {
         for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
         {
             if(str1[i]==str2[j])
             {
                flag=1;
             }
         }
     }
     if(flag==0)
     {
        cout<<"\nStrings are not equal.\n";
     }
     else
     {
        cout<<"\nStrings are equal.\n";
     }

      return 0;
}
// compare two strings using strcmp
#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str1[50], str2[50];
    cout<<"Enter string 1 : ";
    gets(str1);
    cout<<"Enter string 2 : ";
    gets(str2);
    if(strcmp(str1, str2)==0)
        cout << "Strings are equal!";
    else
        cout << "Strings are not equal.";
    return 0;
}
//pgm to grab first elelment of a each word in a  string
#include<iostream>
#include<cstring>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s,t;
    string y;
    int z;
    cout<<"enter a string:";
    getline(cin,s);
   // cout<<"the string is:"<<s;
    stringstream X(s);
    while(getline(X,t,' ')){
            cout<<t[0]<<endl;

       }
}
// pgm to reverse a string without strrev
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[90];
    int i,x;
    cout<<"enter a string:";
    gets(a);
    x=strlen(a);
    for(i=x;i>=0;i--){
        cout<<a[i];
    }
}
// pgm to take input continuosly
#include <iostream>  
#include <cstring>  
using namespace std;  
int main ()  
{  
  char key[] = "mango";  
  char buffer[50];  
  do {  
     cout<<"What is my favourite fruit? ";  
     cin>>buffer;  
  } while (strcmp (key,buffer) != 0);  
 cout<<"Answer is correct!!"<<endl;  
  return 0;  
} 
//pgm to concatenate two strings
#include <cstring>  
using namespace std;  
int main()  
{  
    char key[25], buffer[25];  
    cout << "Enter the key string: ";  
    cin.getline(key, 25);  
    cout << "Enter the buffer string: ";  
     cin.getline(buffer, 25);  
    strcat(key, buffer);   
    cout << "Key = " << key << endl;  
    cout << "Buffer = " << buffer<<endl;  
    return 0;  
}
//pgm to copy
#include <iostream>  
#include <cstring>  
using namespace std;  
int main()  
{  
    char key[25], buffer[25];  
    cout << "Enter the key string: ";  
    cin.getline(key, 25);  
    strcpy(buffer, key);  
    cout << "Key = "<< key << endl;  
    cout << "Buffer = "<< buffer<<endl;  
    return 0;  
} 
// pgm to revese using strrev
#include<iostream>
#include<cstring>
using namespace std; 
int main() 
{ 
    char str[] ="Journal Dev reverse example"; 
    strrev(str);
    cout<<"\n"<<str; 
    return 0;
}
// pgm to coutn vowela conconants
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char line[150];
    int i,v,c,ch,d,s,o;
    o=v=c=ch=d=s=0;

    cout<<"\nEnter any String :: ";
    gets(line);

    for(i=0;line[i]!='\0';++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
            ++v;
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
            ++c;
        else if(line[i]>='0'&& line[i]<='9')
            ++d;
        else if (line[i]==' ')
            ++s;
    }
    cout<<"\nNumber of Vowels :: "<<v<<"\n";
    cout<<"\nNumber of Consonants :: "<<c<<"\n";
    cout<<"\nNumber of Digits :: "<<d<<"\n";
    cout<<"\nNumber of White spaces :: "<<s<<"\n";

    return 0;
}
// pgm to print only alphabes

#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[89];
    cout<<"enter a string:";
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        if (s[i]>='a'&&s[i]<='z'||s[i]==' '){
            cout<<s[i];
        }
        else{
            continue;
        }
}    }
// pgm to lexographical order
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many Strings u want to Sort :: ";
    cin>>n;
    string str[n], temp;

    cout << "\nEnter [ "<<n<<" ] Strings Below :: " << endl;

    for(int i = 0; i < n; i++)
    {
        cout<<"\nEnter [ "<<i+1<<" ] String :: ";
        cin>>str[i];
    }

    for(int i = 0; i < n-1; ++i)
       for( int j = i+1; j < n; ++j)
       {
          if(str[i] > str[j])
          {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
          }
    }

    cout << "\nAfter Sorting [ "<<n<<" ] Strings in lexicographical order :: \n" << endl;

    for(int i = 0; i < n; ++i)
    {
       cout << str[i] << endl;
    }

    return 0;
}
// pgm to convert lowercase to uppercase
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
      char str[50],str1[50];
      int i;
      cout<<"\nEnter any String in Lowercase :: ";
      gets(str);

      strcpy(str1,str);

      for(i=0;i<=strlen(str);i++)
      {
            if(str[i]>=97 && str[i]<=122)
            {
            str[i]=str[i]-32;
            }
      }
      cout<<"\nThe String [ "<<str1<<" ] in Uppercase = [ "<<str<<" ]\n";

     return 0;
}
//pgm to remive spaces
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char str[80],str1[80];
        int i=0, len, j;
        cout<<"\nEnter any string :: ";
        gets(str);
        int x;
        x=strlen(str);
        for(i=0;i<=x;i++){
            if (str[i]==' '){
                continue;
            }
            else{
                cout<<str[i];
            }
        }
}
//   C++ Program to Count Number of Words in a String  

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char strs[100], countw=0, strw[15], i;
        cout<<"\nEnter any string :: ";
        gets(strs);

        int len=strlen(strs);

        for(i=0; i<len; i++)
        {
                if(strs[i]==' ')
                {
                        countw++;
                }
        }
        cout<<"\nTotal Number of Words in a String is :: "<<countw+1<<"\n";

        return 0;
}
// pgm to find substr, only works with strings
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    string s1 = "Geeks";
    string r = s1.substr(1, 3);
    cout << "String is: " << r;
    return 0;
}
// pgm to find snustr
#include <string.h>
#include <iostream>
using namespace std;
  
int main()
{
    // Take any string
    string s = "dog:cat";
  
    // Find position of ':' using find()
    int pos = s.find(":");
  
    // Copy substring after pos
    string sub = s.substr(pos + 1);
  
    // prints the result
    cout << "String is: " << sub;
  
    return 0;
}
// gm to relace
#include<iostream>  
using namespace std;  
int  main()  
{  
string str1 = "This is C language";  
string str2 = "C++";  
cout << "Before replacement, string is :"<<str1<<'\n';  
str1.replace(8,1,str2);   
cout << "After replacement, string is :"<<str1<<'\n';  
return 0;  
} 
//pgm to convert upper all first words
#include<iostream>
using namespace std;

int main()
{

    int i;
    char a[30];
    cout<<"\nEnter any string :: ";
    gets(a);
    cout<<"\n";

     if(islower(a[0]))
     a[0]=toupper(a[0]);

     for(i=0;a[i]!='\0';++i)
     {
            if(a[i]==' ')
                if(islower(a[i+1]))
                    a[i+1]=toupper(a[i+1]);
     }

        cout<<"\nUpdated New String is :: "<<a<<"\n";

        return 0;
    }
//pgm to reverse three given strings
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    char a[3][50];
    int i,j,k,len;
    cout<<"\nEnter 3 strings: \n";

    for(i=0;i<3;i++)
    {
        cout<<"\nEnter [ "<<i+1<<" ] String :: ";
        gets(a[i]);
    }

    cout<<"\nThe Array of Original Strings :: \n";

    for(i=0;i<3;i++)
    {
        cout<<"\n"<<a[i]<<" \n";
    }

    cout<<"\nThe Array of Reversed Strings :: \n";

    for(i=0;i<3;i++)
    {
        cout<<"\n";
        len=strlen(a[i]);
        for(j=0,k=len-1;k>=0;j++,k--)
        {
            cout<<a[i][k];
        }
        cout<<" \n";
    }

    return 0;
}
// 







