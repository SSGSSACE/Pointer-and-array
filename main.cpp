#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {2, 3, 4, 5};
    std::cout << "Mang array la: " << arr << std::endl;
    std::cout << "Dia chi mang array la: " << &arr << std::endl;
    return 0;
}