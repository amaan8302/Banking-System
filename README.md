
# Banking System C++ Project

This Banking System project is a simple console-based application implemented in C++. It allows users to perform basic banking operations such as creating accounts, viewing account details, depositing money, withdrawing money, and deleting accounts. The main objective of this project is to provide a fundamental understanding of how a banking system operates and how such a system can be implemented using C++.

# Features
Account Creation: Users can create a new account by providing necessary details like name, account number, and initial balance.

View Account Details: Users can view details of existing accounts by entering the account number.

Deposit Money: Users can deposit money into their accounts.
Withdraw Money: Users can withdraw money from their accounts, given they have sufficient balance.

Delete Account: Users can delete an account by providing the account number.

List All Accounts: Users can list all existing accounts with basic details.

# Project Structure
The project consists of the following files:

main.cpp: The main entry point of the application.

Bank.h: The header file containing the class definitions and function prototypes.

Bank.cpp: The implementation file for the class methods defined in Bank.h.

data.txt: A text file used to store account information persistently.


## Class Structure

```bash
   class Bank 
  {
    public:
      void createAccount();
      void viewAccount();
      void deposit();
      void withdraw();
      void deleteAccount();
      void listAccounts();

    private:
      std::string accountNumber;
      std::string name;
      double balance;

      void writeToFile();
      void readFromFile();
  };
 
```
## Getting Started

PREREQUISITES

1. C++ compiler (e.g., g++)

2. Text editor or IDE (e.g., Visual Studio Code, CLion)

INSTALLATION

1. Clone the repository:
```bash
  git clone https://github.com/amaan8302/Banking-System/tree/main
```
2. Navigate to the project directory:
```bash
  cd Banking-System-cpp
```
3. Compile the project:
```bash
  g++ main.cpp Bank.cpp -o Banking-System
```
4. Run the executable:
```bash
  ./BankingSystem
```

