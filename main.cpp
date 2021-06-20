#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {2, 3, 4, 5};
    int i;
    std::cout << "Mang array la: " << arr << std::endl;
    std::cout << "Dia chi mang array la: " << &arr << std::endl;
    std::cout << "Dia chi phan tu array 0 la: " << &arr[0] << std::endl;
    return 0;
}