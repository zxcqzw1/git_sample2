#include　<iostream>

int sum(int, int);

int main()
{
    std::cout << "git training" << std::endl; 
    int a = 5;
    int b = 4;    
    std::cout << sum(a,b) << std::endl;
    
    int sum(int a, int b)
    {
        return a * b;
    }

    return 0;
}