#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector = {0, 1, 2, 3, 4, 5};
    
    //Accessing elements
    
    int element = myVector[2];      //accessing element at 2nd index
    cout<<"Value at second index is:"<<element<<endl;
    cout<<"Value at 5th index:"<<myVector[5]<<endl;       //directly printing any element
    
    int front = myVector.front();           //accessing front index
    cout<<"Value at front index:"<<front<<endl;
    
    int back = myVector.back();             //accessing back index
    cout<<"Value at back index:"<<back<<endl;
    

    return 0;
}