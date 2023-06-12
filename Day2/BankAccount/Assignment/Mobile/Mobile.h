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