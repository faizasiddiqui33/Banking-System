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


/*****************************************************************************************************************************
Module Name: Customer Class Constructor
Description: Customer Class Constructor that intializes members for setting the values of data fields to the current value in pointer object
    @param name: for passing customer's name as string data type
    @param address: for passing customer's address as string data type
    @param age: for passing customer's age as short data type. It will most likely be between 0-100
    @param telephone_number: for passing telephone number of customer as long long data type of 64 bits
    @param customer_number: for passing Customer Type in the form of number 1-for Senior, 2-for Adult, 3-for Student
*****************************************************************************************************************************/
    Customer(string name, string address, short age, long long telephone_number, int customer_number)
    {
        ///pointer value of current object get assigned with customer name
        this->name = name;
        ///pointer value of current object get assigned with customer address
        this->address = address;
        ///pointer value of current object get assigned with customer age
        this->age = age;
        ///pointer value of current object get assigned with telephone number
        this->telephone_number = telephone_number;
        ///pointer value of current object get assigned with customer type number
        this->customer_number = customer_number;
    }


/*****************************************************************************************************************************
Module Name: Setter Function for setting Customer's Name
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Purpose: For setting Customer's Name
Description: Set customer's name to the current value in pointer object (if not initialized by Constructor)
    @param name: for passing customer's name as string data type
    @return null
*****************************************************************************************************************************/
    void setName(string name)
    {
        ///pointer value of current object get assigned with customer name
        this->name = name;
    }



/*****************************************************************************************************************************
Module Name: Setter Function for setting Customer's Address
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Purpose: For setting Customer's Address
Description: Set customer's address to the current value in pointer object 
    @param address: for passing customer's address as string data type
    @return null
*****************************************************************************************************************************/
    void setAddress(string address)
    {
        ///pointer value of current object get assigned with customer address
        this->address = address;
    }


/*****************************************************************************************************************************
Module Name: Setter Function for Setting Customer's Age
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Purpose: For setting Customer's Age
Description: Sets customer's age to the current value in pointer object
    @param address: for passing Customer's Age as short data type because it will be most likely between 0-100
    @return null
*****************************************************************************************************************************/
    void setAge(short age)
    {
        ///pointer value of current object get assigned with customer age
        this->age = age;
    }


/*****************************************************************************************************************************
Module Name: Setter Function for setting Customer's Telephone Number
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Purpose: For setting Customer's Telephone Number
Description: Set customer's telephone number to the current value in pointer object 
    @param telephone_number: for passing Customer Telephone Number as long long data type for 64 bits
    @return null
*****************************************************************************************************************************/
    void setTelephoneNumber(long long telephone_number)
    {
        ///pointer value of current object get assigned with telephone number
        this->telephone_number = telephone_number;
    }



/*****************************************************************************************************************************
Module Name: Setter Function for setting Customer's Type Number
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Purpose: For setting Customer's Type Number
Description: Set Customer Type Number to the current value in pointer object if not initialized by Constructor
    @param customer_number: For passing Customer Type Number as integer data type: 1-Senior, 2-Adult, 3-Adult
    @return null
*****************************************************************************************************************************/
    void setCustomerNumber(int customer_number)
    {
        ///pointer value of current object get assigned with customer's type number
        this->customer_number = customer_number;
    }


/*****************************************************************************************************************************
Module Name: Accessor(Getter) Function for getting Customer's Name
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Purpose: For getting Customer's Name
Description: Gets Customer's name / Returns Customer's name when the function is called
    @param: None
    @return Customer name of string data type is returned
*****************************************************************************************************************************/
    string get_customer()
    {
        ///returns the pointer value of current object that is customer's name of string type
        return this->name;
    }


/*****************************************************************************************************************************
Module Name: Accessor(Getter) Function for getting Customer's Address
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Purpose: For getting Customer's Address
Description: Gets Customer's Address / Returns Customer's address when the function is called
    @param: None
    @return Customer address of string data type is returned
*****************************************************************************************************************************/
    string getAddress()
    {
        ///returns the pointer value of current object that is customer's address of string type
        return this->address;
    }


/*****************************************************************************************************************************
Module Name: Accessor(Getter) Function for getting Customer's Age
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Purpose: For getting Customer's Age
Description: Gets Customer's Age / Returns Customer's age when the function is called
    @param: None
    @return Customer age of short data type is returned
*****************************************************************************************************************************/
    short getAge()
    {
        ///returns the pointer value of current object that is customer's age of string type
        return this->age;
    }


/*****************************************************************************************************************************
Module Name: Accessor(Getter) Function for Customer's Telephone Number
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Purpose: For getting Customer's Telephone Number
Description: Gets Customer's Telephone Number / Returns Customer's Telephone Number when the function is called
    @param: None
    @return Customer Telephone Number of long long data type of 64 bits is returned
*****************************************************************************************************************************/
    long long getTelephoneNumber()
    {
        ///returns the pointer value of current object that is customer's Telephone Number of long long data type
        return this->telephone_number;
    }


/*****************************************************************************************************************************
Module Name: Accessor(Getter) Function for getting Customer's Type Number
Author: Faiza Fatma Siddiqui
Date Created/Modified: 01.11.2021
Purpose: For getting Customer's Type Number
Description: Gets Customer's Type Number / Returns Customer's Type Number when the function is called
    @param: None
    @return Customer's Type Number of string data type is returned
*****************************************************************************************************************************/
    int getCustomerNumber()
    {
        ///returns the pointer value of current object that is Customer's Type Number of integer data type
        return this->customer_number;
    }
};




/********MAIN MAIN MAIN***************/

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