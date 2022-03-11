#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int> myVector){
    for (int item : myVector)
    {
        cout << item << " ";
    }
    cout << endl;
    
}

int main(){
    vector<int> myList{2,5,2,3,5,6,7,8};
    myList.push_back(9);
    printVector(myList);
    myList.pop_back();
    printVector(myList);
    myList.insert(myList.begin() + 1, 99);
    printVector(myList);
    myList.erase(myList.begin() + 1, myList.begin() + 4);
    printVector(myList);
}
