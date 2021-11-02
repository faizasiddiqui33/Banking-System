/*****************************************************************************************************************************
Module Name: Banking System
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Student ID: 200473896
Purpose: CS 700 - Software Development Fundamentals - Assignment 3 
Description: 
- This program is a Banking System, a user-friendly program that:
- Creates a bank account by asking the customer's name, customer's age, customer's address and customer's phone number. 
    - It also makes 3 types of Customers -> Senior, Adult, Student
    - It makes 2 types of Accounts: Checkings & Savings Account
- This program Deposits an amount in a bank account
- This program takes Withdrawal from a bank account
- This program checks balance in the bank account
*****************************************************************************************************************************/

/// This file includes all standard libraries
#include <bits/stdc++.h>

/// tells the compiler to make all the names in the predefined standard library available to our program
using namespace std;

/*****************************************************************************************************************************
    Module Name: Class Customer
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: Class for accessor and modifier functions of data fields
*****************************************************************************************************************************/
//Customer Class:
class Customer
{
    ///public section of Customer Class
public:
    ///for storing customer name
    string name;
    ///for storing customer address
    string address;
    ///for storing customer age
    short age;
    ///for storing customer telephone number
    long long telephone_number;
    ///for storing customer type in the form of number 1-for Senior, 2-for Adult, 3-for Student
    int customer_number;

    //Default Constructor:
    Customer() {}

}


/*****************************************************************************************************************************
Module Name: Setter Function for setting Customer's Name
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Purpose: CS 700 - Software Development Fundamentals - Assignment 3
Description: Set customer's name to the current value in pointer object (if not initialized by Constructor)
    @param name: for passing customer's name as string data type
    @return null
*****************************************************************************************************************************/
int main()
{
    Bank bank;
    int choice;
    double amount;
    float fees = 0;
    int accountType;
    int accountNumber;
    string date;
    bool found;
    do
    {
        try
        {
            cout << "\n\n\tEnter:\n\t 1 -- Add Account \n\t 2 -- Make Deposit \n\t 3 -- Make Withdrawal\n\t 4 -- Account Details \n\n\t Press any other key to Exit! \n\t >>  ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                bank.add_account();
                break;
         
            case 2:
                cout << "\tEnter Account Number : >> ";
                cin >> accountNumber;
                cout << "\tEnter the deposit Amount : >> $";
                cin >> amount;
                cout << "\tEnter the Date of Transaction(dd/mm/yyyy) : >> ";
                cin >> date;
                bank.make_deposit(amount, accountNumber, date, fees = fees);
                break;

            case 3:
                cout << "\tEnter Account Number : >> ";
                cin >> accountNumber;
                cout << "\tEnter the WithDrawal Amount : >> $";
                cin >> amount;
                cout << "\tEnter the Date of Transaction(mm-dd-yyyy) : >> ";
                cin >> date;
                bank.make_withdrawal(amount, accountNumber, date, fees = fees);
                break;

            case 4:
                cout << "\tEnter Account Number : >> ";
                cin >> accountNumber;
                found = bank.get_Account_number(accountNumber);
                break;

            default:
                choice = 5;
            }
        }
        catch (exception &x)
        {
            cout << "\t--------------------SOMETHING WENT WRONG! PLEASE TRY AGAIN! ----------" << endl;
            choice = 5;
        }
    } while (choice != 5);
    return 0;
}