#include <iostream>

class array
{
    int ar1[3][3] = {{1, 2, 3},
                     {3, 2, 1},
                     {4, 6, 7}};

public:
    array operator+(const array &a1)
    {
        array obj;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                obj.ar1[i][j] = this->ar1[i][j] + a1.ar1[i][j];
            }
        }
        return obj;
    }

    void show()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << ar1[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
};

int main()
{
    array a1, a2, a3;
    a3 = a1 + a2;
    a3.show();
}
