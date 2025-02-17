#include "BankSystem.h"

void BankSystem::addAccount(const std::string& name, int accountNumber, double initialBalance) {
    BankAccount* newAccount = new BankAccount(name, accountNumber, initialBalance);
    accounts.push_back(newAccount);
    std::cout << accountNumber << " account added." << std::endl;
}

BankAccount* BankSystem::findAccount (int accountNumber) {
    for (BankAccount* ptr : accounts) {
        if(ptr -> getAccountNumber() == accountNumber) return ptr;
    }
    std::cout << accountNumber << " account does not exist." << std::endl;
    return nullptr;
}

void BankSystem::transferFunds(int senderAcc, int receiverAcc, double amount) {
    BankAccount* receiver;
    for (BankAccount* ptr : accounts) {
        if (ptr -> getAccountNumber() == senderAcc) {
            if(!ptr -> withdraw(amount)) {
                std::cout << "Transaction declined." << std::endl;
                return;
            }
        }
        if (ptr -> getAccountNumber() == receiverAcc) receiver = ptr;
    }
    receiver -> deposit(amount);
    std::cout << "The transaction is done." << std::endl;
}

void BankSystem::displayAllAccounts() {
    for (BankAccount* ptr : accounts) {
        ptr -> display();
    }
}

BankSystem::~BankSystem() {
    for (BankAccount* ptr : accounts) {
        delete ptr;
        ptr = nullptr;
    }
}
