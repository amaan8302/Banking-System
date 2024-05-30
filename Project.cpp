#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class bank
{
    char name[100], add[100], y[100];
    int balance;

public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};
void bank ::open_account() // presolution operator
{
    cout << "Enter Full Name :- ";
    cin.ignore(); // to clear buffer
    cin.getline(name, 100);
    cout << "Enter your address :- ";
    cin.ignore(); // to clear buffer
    cin.getline(add, 100);
    cout << "Type of account you are interested in (saving or current):- ";
    cin >> y;
    cout << "Enter the amount you want to deposit :- ";
    cin >> balance;
    cout << "Your account has been created";
}
void bank::deposit_money()
{
    int amount;
    cout << "Enter the amount you want to deposit: ";
    cin >> amount;
    balance += amount;
    cout << "Amount deposited successfully. Your new balance is: " << balance << endl;
}
void bank ::display_account()
{
    cout << "Name you entered is :- " << name << endl;
    cout << "Address you entered is :- " << add << endl;
    cout << "Type of account you selected :- " << y << endl;
    cout << "Amount you have in your new bank account :- " << balance << endl;
}
void bank ::withdraw_money()
{
    float amount;
    cout << endl
         << "Withdraw\n";
    cout << "Enter amount you want yo withdraw : ";
    cin >> amount;
    balance -= amount;
    cout << "Total balance left in your account is : " << balance << endl;
}
int main()
{
    int ch;
    char x;
    bank obj;
    do
    {
        cout << "1) Open Account" << endl;
        cout << "2) Deposite Money\n";
        cout << "3) Withdraw\n";
        cout << "4) Display Account \n";
        cout << "5) Exit\n";
        cout << "Select any one option from the above : \n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "1) open account\n";
            obj.open_account();
            break;
        case 2:
            cout << "2) Deposite money\n";
            obj.deposit_money();
            break;
        case 3:
            cout << "3) Withdraw Money\n";
            obj.withdraw_money();
            break;
        case 4:
            cout << "4) Display Account\n";
            obj.display_account();
            break;
        case 5:
            if (ch == 5)
            {
                cout << "Thankyou Visit again";
                exit(1);
            }
        default:
            cout << "This is an invalid entry try again\n";
        }
        cout << "\n If you want to try again press 'Y'\n";
        cout << "If you want to exit press 'N'";
        cin >> x;
        if (x == 'n' || x == 'N')
        {
            cout << "Thankyou Visit again";
            exit(0);
        }
    }
    // cout << endl;
    while (x == 'y' || x == 'Y');
}