#include <iostream>
#include <string>

class Mobile
{
    int Model_no;
    std::string Model_name;
    int sim_slot;
    float price;

    static int mo_no;
    static int count;
    static int discount;

public:
    Mobile()
    {
        mo_no++;
        Model_no = mo_no;
        Model_name = "null";
        sim_slot = 0;
        price = 00.00;
    }

    Mobile(std::string mname, int s, char p) : Model_name(mname), sim_slot(s), price(p)
    {
        mo_no++;
        Model_no = mo_no;
    };

    void show() const;

    int GetModelNo() const { return Model_no; }
    void setModelNo(int modelNo) { Model_no = modelNo; }

    std::string GetModelName() const { return Model_name; }
    void setModelName(const std::string &modelName) { Model_name = modelName; }

    int GetSimSlot() const { return sim_slot; }
    void setSimSlot(int simSlot) { sim_slot = simSlot; }

    float getPrice() const { return price; }
    void setPrice(float price_) { price = price_ * discount / 100; }
};