#include <iostream>
#include <string>

class HealthPolicy {
private:
    double premium;
    std::string name_of_policy_holder;
    int waiting_period;

public:
    HealthPolicy() {
        premium = 2300;
        name_of_policy_holder = "shubham";
        waiting_period = 90;
    }

    HealthPolicy(double pr, std::string name, int wp) : premium(pr), name_of_policy_holder(name), waiting_period(wp) {}

    void show() {
        std::cout << "Name: " << name_of_policy_holder << "\n";
        std::cout << "Premium: " << premium << "\n";
        std::cout << "Waiting Period of INsurance is: " << waiting_period << "\n";
    }

    double getPremium() const { return premium; }
    void setPremium(double premium_) { premium = premium_; }

    std::string getNameOfPolicyHolder() const { return name_of_policy_holder; }
    void setNameOfPolicyHolder(const std::string &nameOfPolicyHolder) { name_of_policy_holder = nameOfPolicyHolder; }

    int getWaitingPeriod() const { return waiting_period; }
    void setWaitingPeriod(int waitingPeriod) { waiting_period = waitingPeriod; }
};

void fun() {
    HealthPolicy h4;
    h4.getPremium();
}

int main() {
    HealthPolicy h1, h2(5664, "Dhanore", 99);
    h1.show();
    h2.show();
    HealthPolicy *h3 = new HealthPolicy;
    h3->show();
    delete h3;
    return 0;
}
