#include <iostream>

int **readMatrix(int m, int n)

{

    int **matrix = new int *[m];

    for (int i = 0; i < m; ++i)

    {

        matrix[i] = new int[n];

        for (int j = 0; j < n; ++j)

        {

            std::cin >> matrix[i][j];
        }
    }

    return matrix;
}

void pritntMatrix(int **matrix, int m, int n)

{

    for (int i = 0; i < m; ++i)

    {

        for (int j = 0; j < n; ++j)

        {

            std::cout << matrix[i][j] << " ";
        }

        std::cout << "\n";
    }
}

void deletematrix(int **matrix, int m)

{

    for (int i = 0; i < m; ++i)

    {

        delete[] matrix;
    }
}

int main()

{

    int m, n;

    std::cout << "Enter the value of m\n";

    std::cin >> m;

    std::cout << "Enter the value of n\n";

    std::cin >> n;

    int **matrix = readMatrix(m, n);

    pritntMatrix(matrix, m, n);

    deletematrix(matrix, m);

    return 0;
}