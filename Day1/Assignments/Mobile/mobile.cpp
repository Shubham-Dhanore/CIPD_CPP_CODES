#include <iostream>
#include <string>
class Mobile
{
    int Model_no;
    std::string Model_name;
    int sim_slot;
    float price;

public:
    Mobile()
    {
        Model_no = 00;
        Model_name = "null";
        sim_slot = 0;
        price = 00.00;
    }
    Mobile(int M_n, std::string mname, int s, char p) : Model_no(M_n), Model_name(mname), sim_slot(s), price(p){
     };
    void show()
    {
        std::cout << "Model NO:" << Model_no << std::endl;
        std::cout << "Model Name:" << Model_name << std::endl;
        std::cout << "Sim_slot" << sim_slot << std::endl;
        std::cout << "Price:" << price << std::endl;
        std::cout << std::endl;
    }
    int GetModelNo() const { return Model_no; }
    void setModelNo(int modelNo) { Model_no = modelNo; }
    std::string GetModelName() const { return Model_name; }
    void setModelName(const std::string &modelName) { Model_name = modelName; }
     int GetSimSlot() const { return sim_slot; }
    void setSimSlot(int simSlot) { sim_slot = simSlot; }
    float getPrice() const { return price; }
     void setPrice(float price_) { price = price_; }
};

void global_call()
{

    Mobile m5(9231, "Iphone", 2, 3667.51);
    std::cout << m5.GetModelNo() << std::endl;
    std::cout << m5.GetModelName() << std::endl;
    std::cout << m5.GetSimSlot() << std::endl;
    std::cout << m5.getPrice() << std::endl;
}

int main()

{
    Mobile m1;
    m1.show();
     Mobile m2(1753, "Iphone X", 1, 8888.44);
     m2.show();
     Mobile *m3 = new Mobile(5232, "Samsung", 2, 22344.66);
    m3->show();
    Mobile mtarr[3]{Mobile(4533, "Nokia", 2, 30000.00), Mobile(4342, "OnePlus 7TG", 2, 39000.00), Mobile(5234, "Iphone", 1, 122250.00)};
    for (Mobile i : mtarr)

    {
    i.show();
    }
    Mobile *mtptr = new Mobile[3]{Mobile(6324, "iphone 14", 2, 15577.88), Mobile(7234, "iphone 8plus ", 2, 23345.33), Mobile(8423, "Iphone 12 pro max", 2, 23423.64)};
    for (int i = 0; i < 3; i++)
    {
    mtptr[i].show();
    }
    global_call();
    for (int i = 0; i < 3; i++) 
    {
     delete[] mtptr;

    }
     delete m3;
 return 0; 
}