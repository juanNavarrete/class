//
// Created by Juan C Navarrete on 2019-02-02.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>


class Account{
private:
    std::string name;
    double balance;
public:
    //methods
    void set_balance(double bal){balance = bal;};
    double get_balance(){return balance;};

    //methods will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);

};

#endif //UNTITLED_ACCOUNT_H
