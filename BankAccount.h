#ifndef BANK_SYSTEM
#define BANK_SYSTEM
#include <iostream>
#endif

class BankAccount {
    private:
        std::string m_accountHolder;
        int m_accountNumber;
        double m_balance;
    public:
        BankAccount() {m_accountHolder = "Unknown"; m_accountNumber = 0; m_balance = 0.0;}
       ~BankAccount() {std::cout << m_accountNumber << " has been destroyed." << std::endl;}
        BankAccount(std::string name, int accountNumber, double balance) : m_accountHolder(name), m_accountNumber(accountNumber),m_balance(balance) {}
        BankAccount(const BankAccount& other) = default;
        void deposit (double amount);
        bool withdraw(double amount);
        void display();
        int getAccountNumber() const {return m_accountNumber;}
        double getAccountBalance() const {return m_balance;}
};
