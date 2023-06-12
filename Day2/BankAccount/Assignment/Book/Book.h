#include <iostream>
#include <string>

class Books
{
private:
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
