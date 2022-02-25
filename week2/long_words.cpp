#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int times;
    cout << "Enter word amount: ";
    cin >> times;// how many words am i gonna convert
    cout << endl;
    string words[times]; //storage for the words to convert
    //adding the words to the list
    for (int i = 0; i < times; i++)
    {
        cout << "enter word: ";
        cin >> words[i];
    }
    //converting the words into shorter versions from the words list
    for (int i = 0; i < times; i++)
    {
        string word = words[i];
        cout << word[0] << word.length()-2 << word[word.length()-1] << endl;
    }
    
}
