#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int> &vecto){
    for (auto it = vecto.begin(); it != vecto.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"Enter size of an vector:";
    cin>>size;
    
    vector<int> myVector;
    cout<<"Enter vector elements:";
    for (int i = 0; i<size; ++i){
        int element;
        cin>>element;
        myVector.push_back(element);
    }
    
    cout<<"Before clear:";
    printVector(myVector);
    
    myVector.clear();
    cout<<"After clear:";
    printVector(myVector);
    
    myVector.resize(7);
    cout<<"Enter new elements:";
    for (int i=0; i<7; ++i){
        cin>>myVector[i];
    }
    
    cout<<"After resize:";
    printVector(myVector);
    
    return 0;
}