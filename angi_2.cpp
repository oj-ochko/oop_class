#include<iostream>
#include<math.h>
#include<map>
using namespace std;
void findHighest(int numbers[100])
{
    int max{numbers[0]};
    for (int i = 0; i < 100; i++)
    {
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    cout << "highest: " << max << endl;
}
void findLowest(int numbers[100])
{
    int min{numbers[0]};
    for (int i = 0; i < 100; i++)
    {
        if (numbers[i] < min){
            min = numbers[i];
        }
    }
    cout << "Lowest: "<< min << endl;
}
void findAverage(int numbers[100])
{
    int total{0};
    for (int i = 0; i < 100; i++)
    {
        total += numbers[i];
    }
    cout << "average: "<<total / 100 << endl;
}
void countEven(int numbers[100])
{
    int total{0};
    for (int i = 0; i < 100; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            total++;
        }
    }
    cout << "even numbers: " << total << endl;
}
void countOdd(int numbers[100])
{
    int total{0};
    for (int i = 0; i < 100; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            total++;
        }
    }
    cout << "odd numbers: " << total << endl;
}
void mostFrequent(int numbers[100])
{
    map<int, int> theMap;
    for (int i = 0; i < 100; i++){
        theMap[numbers[i]]++;
    }

    int max_count = 0, res = -1;
    for (auto i : theMap) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
    cout << "most repeated: "<<res << endl;
}
int main()
{
    int numbers[100];
    srand((unsigned) time(NULL));
    for (int i = 0; i < 100; i++)
    {
        numbers[i] = rand() % 101;
        cout << numbers[i] << " ";
    }
    cout << endl;
    findHighest(numbers);
    findLowest(numbers);
    findAverage(numbers);
    countEven(numbers);
    countOdd(numbers);    
    mostFrequent(numbers);
}
