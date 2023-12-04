//largest elelmnt in an array 
#include <iostream>
using namespace std;

int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}
int main()
{
    int arr[] = {10, 324, 45, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest in given array is "
         << largest(arr, n);
    return 0;
}
//pgm to ascend the numbers
#include <iostream>
using namespace std;
 
int main()
{
    int arr[100];
    int size, i, j, temp;
 
    // Reading the size of the array
    cout<<"Enter size of array: ";
    cin>>size;
 
    //Reading elements of array
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    //Sorting an array in ascending order
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Printing the sorted array in ascending order
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}
//pgm to pass an array to function
#include<iostream>
using namespace std;
void pass(int[],int);

int main()
{
    int a[]={1,2,3,4,5};

    pass(a,5);

    return 0;
}

void pass(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<b[i]<<"\n";
    }
}
//pgm to acess array elements using pointer
#include <iostream>
using namespace std;

int main()
{
   int a[100],n,i;
   cout<<"Enter size of Array :: ";
    cin>>n;
    cout<<"\nEnter elements to the array :: \n";

    for(i=0;i<n;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: ";
        cin>>a[i];
    }

   cout << "Accessing Elements through Pointers are :: \n";
   for(int i = 0; i < n; ++i)
   {
       cout << endl << *(a + i);
   }

    cout<<"\n";

   return 0;
}
// pgm to insert element at specified location
#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int arr[8]={11,12,13,14,15};
    int b[9],j=0,pos,nu;
    cout<<"enter the position to be inseted:"<<endl;
    cin>>pos;
    cout<<"enter the number to be inseted:"<<endl;
    cin>>nu;
    int i=0;
    for(int i=5;i>=pos;i--)
    {
        arr[i+1] = arr[i];
    }
        arr[pos] = nu;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

} pgm to find 
