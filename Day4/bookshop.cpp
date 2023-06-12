#include <iostream>
#include <cstring>

class BookShop
{
    std::string *author_name;
    std::string *title;
    int *price;
    std::string *publisher;
    int *stock_position;
    int size;

public:
    BookShop()
    {
        size = 3;
        author_name = new std::string[size];
        title = new std::string[size];
        price = new int[size];
        publisher = new std::string[size];
        stock_position = new int[size];

        author_name[0] = "s";
        title[0] = "y";
        price[0] = 300;
        publisher[0] = "Mc Gram";
        stock_position[0] = 2;

        author_name[1] = "Let us C";
        title[1] = "Yashwant";
        price[1] = 200;
        publisher[1] = "Navneet";
        stock_position[1] = 7;

        author_name[2] = "Let us java";
        title[2] = "Yashjavaa";
        price[2] = 100;
        publisher[2] = "Mc Gramer";
        stock_position[2] = 6;
    }

    void Searchbook()
    {
        std::string title1;
        std::string author_name1;
        std::cout << "Hello Sir/Madam, which Book you want" << std::endl;
        std::cout << "Please enter the title of the Book you want: " << std::endl;
        std::cin >> title1;
        std::cout << "Please enter the author of the Book you want: " << std::endl;
        std::cin >> author_name1;

        for (int i = 0; i < size; i++)
        {
            if ((title[i] == title1) && (author_name[i] == author_name1))
            {
                int copies_no, no_of_Books;
                std::cout << "The requested book is available" << std::endl;
                std::cout << "Author: " << author_name[i] << ", Title: " << title[i] << ", Price: " << price[i] << ", Publisher: " << publisher[i] << ", Stock Position: " << stock_position[i] << std::endl;
                std::cout << "Enter the number of copies required: " << std::endl;
                std::cin >> copies_no;

                if (copies_no <= stock_position[i])
                {
                    std::cout << "How many books do you want: " << std::endl;
                    std::cin >> no_of_Books;
                    std::cout << "Total price: " << (no_of_Books * price[i]) << std::endl;
                }
                else
                {
                    std::cout << "Requested copies are not in stock" << std::endl;
                }
                return; // Exit the function once the book is found
            }
        }

        std::cout << "The requested book is not available" << std::endl;
    }
};

int main()
{
    BookShop b1;
    b1.Searchbook();

    return 0;
}
