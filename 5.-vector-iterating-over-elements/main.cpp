#include <iostream>
#include <vector>
using namespace std;

//vector: iterating over elements

void printVector1(const vector<int> &vect){
    for (int i: vect){                          //using range based for loop                      
        cout<<i<<" ";                           //i directly represents element of vector
    }
    cout<<endl;
}

void printVector2(const vector<int> &vect){                     //using iterators
    for (auto it = vect.begin(); it != vect.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"Enter size of the vector:";
    cin>>size;
    
    /*vector<int> myVector(size);           //if we define size for vector, we can use simple for loop for user input
    cout<<"Enter elements of vector:";      //without having size, its like accessing the non-existing vector elements
    for (int i=0; i<size; ++i){             //iterating with simple for loop with the help of size
        cin>>myVector[i];
    }*/
    
    vector<int> myVector;
    cout<<"Enter elements of vector:";
    for (int i=0; i<size; ++i){
        int element;
        cin>>element;
        myVector.push_back(element);            //inserting elements int vector with pudh_back method
    }
    
    cout<<"Printing vector with range based for loop:";
    printVector1(myVector);
    
    cout<<"Printing vector with iterator based for loop:";
    printVector2(myVector);
    
    return 0;
}
