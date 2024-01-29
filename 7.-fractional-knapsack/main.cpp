#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//struct item defines each item in the knapsack
struct Item{            
    int weight;         //the weight of each item
    int value;          //the value of each item
    double density;     //value per unit item
};

void manualSort(vector<Item> &item){
    int n = item.size();
    for (int i=0; i<n-1; ++i){
        for (int j=0; j<n-i-1; ++j){
            if (item[j].density<item[j+1].density){
                
                Item temp = item[j];
                item[j] = item[j+1];
                item[j+1] = temp;
            }
        }
    }
}

/*//comparison function to sort items ased on their density
bool compare(Item a , Item b){
    return a.density>b.density;     
}*/

//calculates max value that can be obtained through fractional knapsack algorithm
double franctionalKnapsack(vector<Item> item, int W)    //vector of item structs
{   
    /* instead of predefined function we will use manualSort
    sort(item.begin(), item.end(), compare);    //predefined function for sorting elements in a container based on its range*/
    manualSort(item);
    
    double totalValue = 0.0;
    int remainingWeight = W;
    
    for (int i=0; i<item.size(); ++i){
        //if item fits entiely
        if (remainingWeight >= item[i].weight){
            totalValue += item[i].value;            //values are added to calculate final sum
            remainingWeight -= item[i].weight;      //remaining weight is reduced till 0
        }
        //last item which will be taken fractionally
        else{
            totalValue += (double) remainingWeight / item[i].weight * item[i].value;
            break;
        }
    }
    
    return totalValue;
}

int main()
{
    int n, W;
    cout<<"Enter the number of items:";
    cin>>n;
    
    vector<Item> item(n);
    cout<<"Enter the weight and value of each item:"<<endl;
    
    //taking inputs for Item vector from the user
    for (int i=0; i<n; ++i){
        cin>>item[i].weight >> item[i].value;
        item[i].density = (double) item[i].value/item[i].weight;
    }
    
    cout<<"Enter the capacity of the knapsack:";
    cin>>W;
    
    //returning output
    double maxValue = franctionalKnapsack(item, W);
    cout<<"The maximum value that can be obtained using fractional knapsack is:"<<maxValue<<endl;
    
    return 0;
}