#include<iostream>

class product
{
    int product_no;
    double price;
    std::string pname;

public:
    product()
    {
        product_no = 123;
        price = 145;
        pname = "Laptop";
    }
    product(int p_no, double pr):product_no(p_no),price(pr)
    {

    }
    product(int p_no, double pr,std::string pnm):product_no(p_no),price(pr),pname(pnm)
    {
        
    }
    void show()
    {
        std::cout<<product_no<<" "<<price<<pname<<std::endl;
    }

    int productNo() const { return product_no; }
    void setProductNo(int productNo) { product_no = productNo; }

    double getPrice() const { return price; }
    void setPrice(double price_) { price = price_; }

    std::string getPname() const { return pname; }
    void setPname(const std::string &pname_) { pname = pname_; }
};

void fun()//global function
{
    product p3;
    std::cout<<"\nProduct number ="<<p3.productNo()<<p3.getPrice()<<p3.getPname();
}

int main(){
    product *p = new product;
    p->show();
    product p1;
    p1.show();
    product p2(2011,700);
    p2.show();

    delete p;
    product parr[3];

    product *ptr = new product[3] {product(11,200),product(12,300),product(13,500)};
    for(int i = 0; i < 3; i++){
        ptr[i].show();

    for(int i = 0; i< 3; i++){
        delete ptr;
    }
        delete [] ptr;
    }
    
    return 0;
}