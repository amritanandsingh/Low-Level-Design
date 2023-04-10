#include<iostream>
using namespace std;
class PaymentGateway {
public:
    virtual void process_payment(double amount) = 0;
};

class PayPalPaymentGateway : public PaymentGateway {
public:
    void process_payment(double amount) override {
        // Code to process payment via PayPal
    }
};

class PaymentProcessor {
public:
    PaymentProcessor(PaymentGateway& gateway) : gateway_(gateway) {}
    void process_payment(double amount) {
        gateway_.process_payment(amount);
    }
private:
    PaymentGateway& gateway_;
};

int main()
{
    return 0;
}