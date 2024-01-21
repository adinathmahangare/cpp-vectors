#include <iostream>
#include <vector>
using namespace std;

//inserting and removing elements

void printVector(const vector<int> &anyvector){
    for(int element: anyvector){
        cout<<element<<" ";
    }
}

int main()
{
    vector<int> myVector;
    
    myVector = {23, 78, 89, 91, 41};
    cout<<"Initial vector:";
    printVector(myVector);
    
    myVector.push_back(45);         //adding element at the end
    
    myVector.push_back(87);
    
    cout<<"\nUpdated vector after pushback:";
    printVector(myVector);
    
    myVector.pop_back();            //removing the last element
    cout<<"\nUpdated vector after pop_back:";
    printVector(myVector);
    
    myVector.insert(myVector.begin()+2, 99);        //inserting 99 at 2nd index of the vector
    cout<<"\nUpdated vector after insert:";
    printVector(myVector);
    
    myVector.erase(myVector.begin()+3);             //erasing element at 3rd index
    cout<<"\nUpdated vector after erase:";
    printVector(myVector);
    
    
    return 0;
}