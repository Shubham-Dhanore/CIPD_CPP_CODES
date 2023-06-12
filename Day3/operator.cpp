#include <iostream>

const int row = 3;

const int coloumn = 3;

class matrix

{

public:
    int arr[row][coloumn];

    matrix()

    {

        int x = 10;

        for (int i = 0; i < row; i++)

        {

            for (int j = 0; j < coloumn; j++)

            {

                arr[i][j] = x;

                x++;
            }
        }
    }

    int *operator[](int i)

    {

        return arr[i];
    }
};

int main()

{

    matrix m1;

    std::cout << m1[0][1];
}
