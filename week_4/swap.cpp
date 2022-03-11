#include<iostream>

void swap(int &a, int &b){
    int temp{a};
    a = b;
    b = temp;
}
int main()
{
    int a{2};
    int b{5};

    std::cout << "a=" << a << " adress: " << &a << std::endl;
    std::cout << "b=" << b << " adress: " << &b <<std::endl;

    swap(a, b);

    std::cout << "a=" << a << " adress: " <<  &a <<std::endl;
    std::cout << "b=" << b << " adress: " <<  &b <<std::endl;

    
}
