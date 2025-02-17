#include "BankAccount.h"

void BankAccount::deposit (double amount) {
    if(amount <= 0) return;
    m_balance += amount;
}

bool BankAccount::withdraw (double amount) {
    if (amount > m_balance) {
        std::cout << "Not enough funds" << std::endl;
        return false;
    }
    m_balance -= amount;
    std::cout << amount << " money withdrawn from account" << std::endl;
    return true;
}

void BankAccount::display () {
    std::cout << "Name: " << m_accountHolder << std::endl;
    std::cout << "Account number: " << m_accountNumber << std::endl;
    std::cout << "Balance: " << m_balance << std::endl;
}
