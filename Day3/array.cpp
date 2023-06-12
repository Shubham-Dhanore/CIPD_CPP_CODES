#include<iostream>
int main()

{

    int *arr;

    int size;

    std::cout << "Enter the value of size\n";

    std::cin >> size;

    std::cout << "Creating an array of size " << size << "\n";

    arr = new int[size];

    for (int i = 0; i < size; i++)

    {

        std::cin >> arr[i];

        // std::cout<<"\n";
    }

    std::cout << "Dynamic allocation of memory for array is successful\n";

    for (int i = 0; i < size; i++)

    {

        std::cout << arr[i] << "\n";
    }

    delete arr;

    return 0;
}