0) to insert elemnt at the end (ny default it will be added at end)



#include<iostream>
using namespace std;
int main()
{
    int arr[6], i, elem;
    cout<<"Enter 5 Array Elements: ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";    /// 0 1 2 3 4 5 ele to be added is : 34 --> 1 2 3 4 5 34
    cin>>elem;
    arr[i] = elem;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<6; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}

pgm to insert elemnt at particular loction

#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, pos, tot;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    cout<<"At What Position ? ";
    cin>>pos;
    for(i=tot; i>=pos; i--)
        arr[i+1] = arr[i];
    arr[i] = elem;
    tot++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}





1) pgm to remove duplicates from an array; to print only distinc elements: // wrong
#include<iostream>
using namespace std;

int main()
{
    int arr[100], size, isUnique;
    int i, j, k;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<size; i++)
    {
        int flag=1;
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<arr[i]<<" ";
        }
    }
}
2)pgm to find repetitive element in an array;
 #include<iostream>
using namespace std;
int main()
{
    int arr[100], size, isUnique;
    int i, j;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<size; i++)
    {
        //int flag=1;
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){     // 1 2 3 2 1 o/p->> 1 2 
            cout<<arr[j]<<" ";
            }
        }
        }
}
3)pgm to print unique elemnes from an array;
#include<iostream>
using namespace std;
int main()
{
    int arr[100], size;
    int i, j;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<size; i++)
    {
        for(j=0;j<size;j++){
            if(arr[i]==arr[j]&& i!=j){
                break;
            }
        }
        if(j==size)
            cout<<arr[i]<<" ";
        }
}
4) pgm to count the no of occurences in  an array
#include <iostream>
using namespace std;
 
int main()
{
    int arr[100], frequency[100];
    int i, j, count, num;
    cout<<"Enter size of array: ";
    cin>>num;
    cout<<"Enter elements in array: ";
    for(i=0; i<num; i++)
    {
       cin>>arr[i];
        frequency[i] = -1;
    }
 
     for(i=0; i<num; i++)
    {
        count = 1;
        for(j=i+1; j<num; j++)
        {
       if(arr[i]==arr[j])
            {
                count++;//Make sure not to count frequency of same element again
                frequency[j] = 0;
            }
        }
 
        //If frequency of current element is not counted
        if(frequency[i] != 0)
        {
            frequency[i] = count;
        }
    }
 
    //Print frequency of each element
    cout<<"\nFrequency of all elements of array : \n";
    for(i=0; i<num; i++)
    {
      if(frequency[i] != 0)
        {
            cout<<arr[i]<<" occurs "<<frequency[i]<<" times\n";
        }
    }
    return 0;
}   


// pgm to delete at paticular location

#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, pos, size;
    cout<<"Enter the Size for Array: ";
    cin>>size;
    cout<<"Enter "<<size<<" Array Elements: ";
    for(i=0; i<size; i++)
        cin>>arr[i];
    cout<<"At What Position elemeht to be deleted? ";
    cin>>pos;
    for(int i=pos;i<size;i++)
    {
        arr[i] = arr[i+1];
    }
    for(int i=0;i<size-1;i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}