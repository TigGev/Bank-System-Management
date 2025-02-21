#include "BankAccount.h"
#define BANK_SYSTEM
#ifndef BANK_SYSTEM
#include <iostream>
#endif

class BankSystem {
        std::vector<BankAccount*> accounts;
    public:
        BankSystem() = default; // ctor
       ~BankSystem(); // dtor
        BankSystem(const BankSystem& other); //copy ctor
        BankSystem(BankSystem&&); // move ctor
        BankSystem& operator= (BankSystem& other); //assign
        BankSystem& operator= (BankSystem&&); //move
    public:
        void addAccount(const std::string& name, int accountNumber, double initialBalance);
        BankAccount* findAccount(int accountNumber);
        void transferFunds(int senderAcc, int receiverAcc, double amount);
        void displayAllAccounts();
};