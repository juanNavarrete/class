//
// Created by Juan C Navarrete on 2019-02-02.
//
#include "Account.h"
#include <string>


void Account::set_name(std::string n) {
    name = n;
}

std::string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if(balance - amount > 0){
        balance -= amount;
        return true;
    } else{
        return false;
    }
}