#include "BankAccount.h"
#define BANK_SYSTEM
#ifndef BANK_SYSTEM
#include <iostream>
#endif

class BankSystem {
        std::vector<BankAccount*> accounts;
    public:
        BankSystem() {};
       ~BankSystem();
    public:
        void addAccount(const std::string& name, int accountNumber, double initialBalance);
        BankAccount* findAccount(int accountNumber);
        void transferFunds(int senderAcc, int receiverAcc, double amount);
        void displayAllAccounts();
};