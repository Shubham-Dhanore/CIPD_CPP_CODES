#include <iostream>
#include <string>

class Books
{
    int Book_no;
    std::string Book_Name;
    int quantity;
    float price;

public:
    Books()
    {
        Book_no = 00;
        Book_Name = "null";
        quantity = 0;
        price = 00.00;
    }

    Books(int B_n, std::string bname, int q, char p) : Book_no(B_n), Book_Name(bname), quantity(q), price(p) {}

    void show()
    {
        std::cout << "Book No: " << Book_no << std::endl;
        std::cout << "Book Name: " << Book_Name << std::endl;
        std::cout << "Quantity: " << quantity << std::endl;
        std::cout << "Price: " << price << std::endl;
        std::cout << std::endl;
    }

    int GetBookNo() const { return Book_no; }
    void setBookNo(int bookNo) { Book_no = bookNo; }
    std::string GetBookName() const { return Book_Name; }
    void setBook_Name(const std::string &bookName) { Book_Name = bookName; }
    int getQuntity() const { return quantity; }
    void setQuntity(int quntity_) { quantity = quntity_; }
    float getPrice() const { return price; }
    void setPrice(float price_) { price = price_; }
};

void global_call()
{
    Books b5(9, "Gulliver’s Travels", 7, 334.51);
    std::cout << b5.GetBookNo() << std::endl;
    std::cout << b5.GetBookName() << std::endl;
    std::cout << b5.getQuntity() << std::endl;
    std::cout << b5.getPrice() << std::endl;
}

int main()
{
    Books b1;
    b1.show();

    Books b2(1, "The Adventures of Pinocchio", 2, 270.44);
    b2.show();

    Books *b3 = new Books(2, "", 5, 344.66);
    b3->show();

    Books btarr[3]{
        Books(3, "Jungle Book-I", 2, 300.00),
        Books(4, "Jungle Book-II", 2, 390.00),
        Books(5, "Jungle Book-III", 2, 250.00)};

    for (Books i : btarr)
    {
        i.show();
    }

    Books *btptr = new Books[3]{
        Books(6, "Lord of Rings-I", 5, 577.88),
        Books(7, "Lord of Rings-II", 8, 345.33),
        Books(8, "Lord of Rings-III", 2, 223.64)};

    for (int i = 0; i < 3; i++)
    {
        btptr[i].show();
    }

    global_call();

    for (int i = 0; i < 3; i++)
    {
        delete[] btptr;
    }

    delete b3;

    return 0;
}
