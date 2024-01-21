#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector = {1,2,3,4,5};
    
    int size = myVector.size();     //number of elements in vector
    cout<<"Size of vector:"<<size;
    
    int capacity = myVector.capacity();      //current storage capacity of vector
    cout<<"\nStorage capacity of vector:"<<capacity;
    
    return 0;
}