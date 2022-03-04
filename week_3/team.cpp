#include<iostream>
using namespace std;
int main(){

    int result{0};
    int problemSets;
    cout << "Enter problem amount: ";
    cin >> problemSets;
    int student1Answer[problemSets];
    int student2Answer[problemSets];
    int student3Answer[problemSets];
    cout << endl;

    for (int i = 0; i < problemSets; i++)
    {
        cin >> student1Answer[i];
        cout << endl;   
    }
    for (int i = 0; i < problemSets; i++)
    {
        cin >> student2Answer[i];   
        cout << endl;
    }
    for (int i = 0; i < problemSets; i++)
    {
        cin >> student3Answer[i];
        cout << endl;   
    }
    for (int i = 0; i < problemSets; i++)
    {
        int prevResult = result;
        if (student1Answer[i] != 0)
        {
            int ans{1};
            if (ans == student2Answer[i] || ans == student3Answer[i])
            {
                result++;
                i++;
            }
        }
    }
}
//https://codeforces.com/problemset/problem/231/A
//poor attempt at trying to solve the probplem
