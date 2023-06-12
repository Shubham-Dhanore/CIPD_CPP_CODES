#include <iostream>
#include <string>

class Books
{
    int Book_no;
    std::string Book_Name;
    int quantity;
    float price;

    static int b_n;
    static int count;

public:
    Books()
    {
        b_n++;
        Book_no = b_n;
        Book_Name = "null";
        quantity = 0;
        price = 00.00;
        count++;
    }

    Books(std::string bname, int q, char p) : Book_Name(bname), quantity(q), price(p)
    {
        b_n++;
        Book_no = b_n;
        count++;
    }

    void show() const;

    static void printCount();

    int GetBookNo() const { return Book_no; }
    void setBookNo(int bookNo) { Book_no = bookNo; }

    std::string GetBookName() const { return Book_Name; }
    void setBook_Name(const std::string &bookName) { Book_Name = bookName; }

    int getQuntity() const { return quantity; }
    void setQuntity(int quntity_) { quantity = quntity_; }

    float getPrice() const { return price; }
    void setPrice(float price_) { price = price_; }
};