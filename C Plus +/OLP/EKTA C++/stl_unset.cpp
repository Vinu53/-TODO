#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // declaring set for storing string data-type
    unordered_set <string> stringSet ;
 
    // inserting various string, same string will be stored
    // once in set
 
    stringSet.insert("code") ;
    stringSet.insert("in") ;
    stringSet.insert("c++") ;
    stringSet.insert("is") ;
    stringSet.insert("fast") ;
 
    string key = "slow" ;
 
    //  find returns end iterator if key is not found,
    //  else it returns iterator to that key
 
    if (stringSet.find(key) == stringSet.end())
        cout << key << " not found" << endl << endl ;
    else
        cout << "Found " << key << endl << endl ;
 
    key = "c++";
    if (stringSet.find(key) == stringSet.end())
        cout << key << " not found\n" ;
    else
        cout << "Found " << key << endl ;
 
    // now iterating over whole set and printing its
    // content
    cout << "\nAll elements : ";
    unordered_set<string> :: iterator itr;
    for (itr = stringSet.begin(); itr != stringSet.end(); itr++)
        cout << (*itr) << endl;
}
// CPP program to illustrate the
// unordered_set::bucket_size() function
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{

	unordered_set<int> sampleSet;

	// to store number of buckets
	int bucketCount;

	// Inserting elements
	sampleSet.insert(5);
	sampleSet.insert(10);
	sampleSet.insert(15);
	sampleSet.insert(20);
	sampleSet.insert(25);
	sampleSet.insert(25);
	sampleSet.insert(26);
    sampleSet.insert(27);

	bucketCount = sampleSet.bucket_count();
	cout << "sampleSet has " << bucketCount << " buckets\n";

	// displaying number of elements in bucket numbered 1
	cout << "Bucket number 3 contains "
		<< sampleSet.bucket_size(3) << " elements";

	return 0;
}
    
    // Merge both lists
    sample3 = merge(sample1, sample2);
      // copy assignment 
    sample1 = sample3;

    
    // prints the size of arr1
    cout << "size of arr1:" << arr1.size();
  