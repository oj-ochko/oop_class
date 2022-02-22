#include<iostream>
using namespace std;
void checkPalindrome(int n)
{
    int temp = n;
    int reverse = 0;
    while (n != 0)
    {
        reverse = (reverse * 10) +(n % 10);
        n /= 10;
    }
    if(temp == reverse)
    cout << "True" << endl;
}
void decToHex(int n)
{
    char hexaDeciNum[100];
    int i = 0;
    while (n > 0) {
        int temp = 0;
 
        temp = n % 16;
 
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
 
        n /= 16;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << hexaDeciNum[j];
    }
    cout << endl;
}
void decToOctal(int n)
{
    int i = 0;
    int octalNum[100];
    while (n > 0) 
    {
        octalNum[i] = n % 8;
        n /= 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << octalNum[j];
    }
    cout << endl;
}
void oronCounter(int n)
{
    int i = 0;
    while(n > 0)
    {
        n /= 10;
        i++;
    }
    cout << i << endl;
}
void decToBinary(int n)
{
    int i = 0;
    int binaryNum[100];
    while (n > 0) 
    {
        binaryNum[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
    cout << endl;
}
int main()
{
    int input;
    cout << "enter number: ";
    cin >> input;
    decToBinary(input);
    oronCounter(input);
    decToOctal(input);
    decToHex(input);
    checkPalindrome(input);
}
