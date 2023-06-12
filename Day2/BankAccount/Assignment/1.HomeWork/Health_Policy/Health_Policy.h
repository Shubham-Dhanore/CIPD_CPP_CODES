#include <iostream>
#include <string>

class H_policy
{
    int policy_id;
    std::string policy_holder_name;
    float amount;
    float premium;

    static int P_id;
    static int count;

public:
    H_policy()
    {
        P_id++;
        policy_id = P_id;
        policy_holder_name = "null";
        amount = 0.0;
        premium = 0.0;
        count++;
    }

    H_policy(std::string nm, float a, float p) : policy_holder_name(nm), amount(a), premium(p)
    {
        P_id++;
        policy_id = P_id;
        count++;
    }

    void show() const;
    static void printCount();

    int getPolicyId() const { return policy_id; }
    void setPolicyId(int policyId) { policy_id = policyId; }

    std::string getPolicyHolderName() const { return policy_holder_name; }
    void setPolicyHolderName(const std::string &policyHolderName) { policy_holder_name = policyHolderName; }

    float getAmount() const { return amount; }
    void setAmount(float amount_) { amount = amount_; }

    float getPremium() const { return premium; }
    void setPremium(float premium_) { premium = premium_; }
};