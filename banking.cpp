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
        @param telephone_number: for passing Customer's Telephone Number as long long data type for 64 bits
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
    Module Name: Customer Name Accessor(Getter) Function 
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
    Module Name: Customer Address Accessor(Getter) Function
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
    Module Name: Customer's Age Accessor(Getter) Function
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
    Module Name: Customer's Telephone Number Accessor(Getter) Function
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
    Module Name: Customer's Type Number Accessor(Getter) Function
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


/*****************************************************************************************************************************
    Module Name: Senior Class which is a subclass derived from super Class Customer
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For initializing data members
    Description: 
    To declare & initialize savings account's interest, checking's account interest, Cheque Charges and overdraft penalty charges
    To get customer name, address, age, telephone number and customer type number from Senior class, which is derived from Customer super class 
*****************************************************************************************************************************/
class Senior : public Customer
{
    ///public section of Senior Class
public:
    ///To declare & initialize savings account's interest price and set it as constant float: constexpr is a compile-time constant. It initializes SAVINGS_INTEREST at compile time.
    static constexpr float SAVINGS_INTEREST = 0.1;

    ///To declare & initialize checkings account's interest price and set it as constant float: constexpr is a compile-time constant. It initializes CHECK_INTEREST at compile time.
    static constexpr float CHECK_INTEREST = 0.05;

    ///To declare & initialize Cheque Charges and set it as constant float: constexpr is a compile-time constant. It initializes CHECK_CHARGE at compile time.
    static constexpr float CHECK_CHARGE = 0.01;

    ///To declare & initialize Overdraft penalty as constant float: constexpr is a compile-time constant. It initializes OVERDRAFT_PENALTY at compile time.
    static constexpr float OVERDRAFT_PENALTY = 0.001;

    ///Senior Class Default Constructor
    Senior() {}

/*****************************************************************************************************************************
    Module Name: Senior Class Constructor
    Purpose: For passing data members as arguments when an object of Senior class is created
    Description: Constructor of Class Senior
        @param name: for passing customer's name as string data type
        @param address: for passing customer's address as string data type
        @param age: for passing customer's age as short data type. It will most likely be between 0-100
        @param telephone_number: for passing telephone number of customer as long long data type of 64 bits
        @param customer_number: for passing Customer Type in the form of number 1-for Senior, 2-for Adult, 3-for Student
*****************************************************************************************************************************/
    Senior(string name, string address, short age, long long telephone_number, int customer_number) : Customer(name, address, age, telephone_number, customer_number)
    {
    }


/*****************************************************************************************************************************
    Module Name: Accessor(Getter) Function for getting Customer's Type for Senior Customer
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For passing Customer Type in the form of string "Senior"
    Description: Gets Customer's Type - Senior / Returns Customer's Type as Senior when the function is called
        @param: None
        @return Customer Type Number as Senior of string data type is returned
*****************************************************************************************************************************/
    string type()
    {
        ///Returns Customer's Type as Senior when the function is called
        return "SENIOR\n";
    }
};


/*****************************************************************************************************************************
    Module Name: Adult Class which is a subclass derived from super Class Customer
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For initializing data members
    Description: 
    To declare & initialize savings account's interest, checking's account interest, Cheque Charges and overdraft penalty charges
    To get customer name, address, age, telephone number and customer type number from Adult class, which is derived from Customer super class 
*****************************************************************************************************************************/
class Adult : public Customer
{
public:
    ///To declare & initialize savings account's interest and set it as constant float: constexpr is a compile-time constant. It initializes SAVINGS_INTEREST at compile time.
    static constexpr float SAVINGS_INTEREST = 0.2;

    ///To declare & initialize checkings account's interest and set it as constant float constexpr is a compile-time constant. It initializes CHECK_INTEREST at compile time.
    static constexpr float CHECK_INTEREST = 0.02;

    ///To declare & initialize checkings account's interest and set it as constant float constexpr is a compile-time constant. It initializes CHECK_CHARGE at compile time.
    static constexpr float CHECK_CHARGE = 0.05;

    ///To declare & initialize overdraft penalty and set it as constant float as constant float constexpr is a compile-time constant. It initializes OVERDRAFT_PENALTY at compile time.
    static constexpr float OVERDRAFT_PENALTY = 0.001;

    ///Default Constructor of Adult Class
    Adult() {}

/*****************************************************************************************************************************
    Module Name: Adult Class Constructor
    Purpose: For passing data members as arguments when an object of Adult class is created
    Description: Constructor of Class Adult
        @param name: for passing customer's name as string data type
        @param address: for passing customer's address as string data type
        @param age: for passing customer's age as short data type. It will most likely be between 0-100
        @param telephone_number: for passing telephone number of customer as long long data type of 64 bits
        @param customer_number: for passing Customer Type in the form of number 1-for Senior, 2-for Adult, 3-for Student
*****************************************************************************************************************************/
    Adult(string name, string address, short age, long long telephone_number, int customer_number) : Customer(name, address, age, telephone_number, customer_number)
    {
    }


/*****************************************************************************************************************************
    Module Name: Accessor(Getter) Function for getting Customer's Type for Adult Customer
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For passing Customer Type in the form of number 1-for Senior, 2-for Adult, 3-for Student
    Description: Gets Customer's Type - Adult / Returns Customer's Type as Adult when the function is called
        @param: None
        @return Customer Type "Adult": string data type is returned
*****************************************************************************************************************************/
    string type()
    {
        ///Returns Customer's Type as Adult when the function is called
        return "ADULT\n";
    }
};


/*****************************************************************************************************************************
    Module Name: Student Class which is a subclass derived from super Class Customer
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For initializing data members
    Description: 
    To declare & initialize savings account's interest, checking's account interest, Cheque Charges and overdraft penalty charges
    To get customer name, address, age, telephone number and customer type number from Student class, which is derived from Customer super class 
*****************************************************************************************************************************/
class Student : public Customer
{
public:
    ///To declare & initialize savings account's interest as constant float: constexpr is a compile-time constant. It initializes SAVINGS_INTEREST at compile time.
    static constexpr float SAVINGS_INTEREST = 0.01f; 

    ///To declare & initialize checkings account's interest as constant float constexpr is a compile-time constant. It initializes CHECK_INTEREST at compile time.
    static constexpr float CHECK_INTEREST = 0.005f;

    ///To declare & initialize checkings account's interest as constant float constexpr is a compile-time constant. It initializes CHECK_CHARGE at compile time.
    static constexpr float CHECK_CHARGE = 0.001f;

    ///To declare & initialize overdraft penalty as constant float as constant float constexpr is a compile-time constant. It initializes OVERDRAFT_PENALTY at compile time.
    static constexpr float OVERDRAFT_PENALTY = 0.001f;

    ///Default Constructor of Student Class
    Student()
    {
    }

/*****************************************************************************************************************************
    Module Name: Student Class Constructor
    Purpose: For passing data members as arguments when an object of Student class is created
    Description: Constructor of Class Student
        @param name: for passing customer's name as string data type
        @param address: for passing customer's address as string data type
        @param age: for passing customer's age as short data type. It will most likely be between 0-100
        @param telephone_number: for passing telephone number of customer as long long data type of 64 bits
        @param customer_number: for passing Customer Type in the form of number 1-for Senior, 2-for Adult, 3-for Student
*****************************************************************************************************************************/
    Student(string name, string address, short age, long long telephone_number, int customer_number) : Customer(name, address, age, telephone_number, customer_number)
    {
    }

/*****************************************************************************************************************************
    Module Name: Accessor(Getter) Function for getting Customer's Type for Student Customer
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For passing Customer Type in the form of string for "Student" type of Customer
    Description: Gets Customer's Type - Student / Returns Customer's Type as Student when the function is called
    @param: None
    @return Customer Type Number "Student" string data type is returned
*****************************************************************************************************************************/
    string type()
    {
        ///Returns Customer's Type as Student when the function is called
        return "STUDENT\n";
    }
};
//Customer Details End:


/*****************************************************************************************************************************
    Module Name: Class Transaction
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For Fetching Transaction Details
    Description: To process Transactions and declare variables needed for transaction
*****************************************************************************************************************************/
class Transaction
{
public:

    ///to store customer number type 1-For Senior, 2-Adult, 3-Student
    int customer_number;
    
    ///to store the type of transaction: Add Account, Deposit, Withdrawal, Check Account Details
    string transaction_type;
    
    ///to store the amount of withdraw or deposit if any
    double amount;
    
    ///to store the remaining balance
    double balance;
    
    ///to store the date of transaction
    string date;
    
    ///to store the fees of cheque or overpenalty
    float fees = 0;
    

/*****************************************************************************************************************************
    Module Name: Printing Transaction Details Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: Printing Transaction Details
    Description: To Print Transaction Details in a well-formatted fashion
*****************************************************************************************************************************/
    void to_string()
    {
        cout << "\n";
        ///To Print Transaction Details in a well-formatted fashion: Transaction Type, Date followed by Amount
        cout << "\t\t" << this->transaction_type << "\t" << this->date << "\t$" << this->amount << "\t" << endl;
    }


/*****************************************************************************************************************************
    Module Name: Process Transaction Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For Process Transaction Details
    Description: To Process Transaction Details by taking it from current pointer object
*****************************************************************************************************************************/
    void processTransactio(string transaction_type, double amount, string date, float fees, double balance)
    {
        ///returns the pointer value of current object that is transaction amount, fees of charge if any, data of transaction, type of transaction, current balance amount
        this->amount = amount;
        this->fees = fees;
        this->date = date;
        this->transaction_type = transaction_type;
        this->balance = balance;
    }
};


/*****************************************************************************************************************************
    Module Name: Class Account
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For performing all operations on Accounts like getting and setting of account's details
    Description: For getting and setting Account Details
*****************************************************************************************************************************/
class Account
{
public:
    Customer customer;
    
    /// if Senior Customer is passed:
    Senior senior;   
    
    /// if Adult Customer is passed:
    Adult adult;    

    // If Student Customer is passed:
    Student student; 

    ///for storing transaction count
    Transaction *trans[100];

    ///for storing balance in bank account
    double balance;

    ///for storing account number
    int account_number;

    ///For all transactions
    Transaction transactions[100];
    
    ///for indexing of transactionss
    int transactionIndex = 0;
    
    /// Customer Type Defines what type of customner is passed i.e Senoir , Adult or Student
    int customerType; 


/*****************************************************************************************************************************
    Module Name: Create Account Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: Function called when account is to be created to store the account number, balance and customer name
    Description: Takes input from user and saves it from the current value in pointer object in the required variable names (if not initialized by Constructor)
    @param account_number: for passing and saving account number as integer data type
    @param balance: for passing and saving account balance as double data type
    @param customer: for passing and saving customer details as Customer class object
    @return null
*****************************************************************************************************************************/
    void createAccount(int account_number, double balance, Customer customer)
    {
        ///returns the pointer value of current object that is account number, balance amount, and customer details
        this->account_number = account_number;
        this->balance = balance;
        this->customer = customer;
    }


/*****************************************************************************************************************************
    Module Name: Customer's Account Number - Setter Function 
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For setting Customer's Account Number
    Description: Set customer's Account Number to the current value in pointer object (if not initialized by Constructor)
        @param account_number: for passing customer's Account Number as integer data type
        @return null
*****************************************************************************************************************************/
    void setAccountNumber(int account_number)
    {
        ///assigns the value of current object to account_number variable
        this->account_number = account_number;
    }


/*****************************************************************************************************************************
    Module Name: Setter Function for setting Customer's Balance
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For setting Customer's Balance
    Description: Sets customer's Balance to the current value in pointer object (if not initialized by Constructor)
        @param account_number: for passing and storing customer's Account Balance as double data type
        @return null
*****************************************************************************************************************************/
    void set_balance(double balance)
    {
        ///assigns the value of current object to balance variable
        this->balance = balance;
    }


/*****************************************************************************************************************************
    Module Name: Setter Function for setting Customer Type - Senior 
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For Setting Senior Customer
    Description: For Setting Senior Customer current value in pointer object (if not initialized by Constructor)
    @param customer: an object of Senior Class for passing Senior customer details
    @return null
*****************************************************************************************************************************/
    void setSenior(Senior customer)
    {
        ///assigns the value of current object to Customer Type - Senior
        this->senior = customer;
    }


/*****************************************************************************************************************************
    Module Name: Setter Function for setting Customer Type - Adult 
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For Setting Adult Customer
    Description: For Setting Adult Customer current value in pointer object (if not initialized by Constructor)
    @param customer: an object of Adult Class for passing Adult customer details
    @return null
*****************************************************************************************************************************/
    //Setting Adult Customer:
    void setAdult(Adult customer)
    {
        ///assigns the value of current object to Customer Type - Adult
        this->adult = customer;
    }


/*****************************************************************************************************************************
    Module Name: Setter Function for setting Customer Type - Student 
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For Setting Student Customer
    Description: For Setting Student Customer current value in pointer object (if not initialized by Constructor)
    @param customer: an object of Student Class for passing Student customer details
    @return null
*****************************************************************************************************************************/
    void setStudent(Student customer)
    {
        ///assigns the value of current object to Customer Type - Student
        this->student = customer;
    }


/*****************************************************************************************************************************
    Module Name: Customer Type Setter Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For Setting Customer Type Number
    Description: Set Customer Type Number to the current value in pointer object if not initialized by Constructor
        @param val: For passing Customer Type Number as integer data type: 1-Senior, 2-Adult, 3-Adult
        @return null
*****************************************************************************************************************************/
    void set_customer(int val)
    {
        ///assigns the Customer Type Number to val variable
        this->customerType = val;
    }


/*****************************************************************************************************************************
    Module Name: Setter Function for setting Transactions
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: Add Transaction to Transaction Array
    Description: Set Transaction Array from the current value in pointer object (if not initialized by Constructor)
        @param transaction: an object of Transaction Class for passing and storing transaction details
        @return null
*****************************************************************************************************************************/
    void setTransactions(Transaction transaction)
    {
        ///assigns current value in pointer object to the Transaction Array
        this->transactions[this->transactionIndex++] = transaction;
    }


/*****************************************************************************************************************************
    Module Name: Acccount Number Accessor(Getter) Function 
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For getting Acccount Number
    Description: Gets Acccount Number / Returns Acccount Number when the function is called
        @param: None
        @return Acccount Number of integer data type is returned
*****************************************************************************************************************************/
    int getAccountNumber()
    {
        ///assigns current value in pointer object to the account_number variable
        return this->account_number;
    }


/*****************************************************************************************************************************
    Module Name: Acccount Balance Accessor(Getter) Function 
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For getting Acccount Balance
    Description: Gets Acccount Balance / Returns Acccount Balance when the function is called
        @param: None
        @return Acccount Balance of double data type is returned
*****************************************************************************************************************************/
    double get_balance()
    {
        ///assigns current value in pointer object to the balance variable
        return this->balance;
    }


/*****************************************************************************************************************************
    Module Name: Senior Account Type Accessor(Getter) Function 
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For getting Senior Acccount Type, if Senior - Customer Type is chosen
    Description: Gets Senior Acccount Type / Returns Senior Acccount Type when the function is called
        @param: None
        @return Acccount Type Senior: object of Class Senior is returned
*****************************************************************************************************************************/
    Senior getSenior()
    {
        return this->senior;
    }


/*****************************************************************************************************************************
    Module Name: Adult Account Type Accessor(Getter) Function 
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For getting Adult Acccount Type, if Adult - Customer Type is chosen
    Description: Gets Adult Acccount Type / Returns Adult Acccount Type when the function is called
        @param: None
        @return Acccount Type Adult: object of Class Adult is returned
*****************************************************************************************************************************/
    Adult getAdult()
    {
        return this->adult;
    }


/*****************************************************************************************************************************
    Module Name: Student Account Type Accessor(Getter) Function 
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For getting Student Acccount Type, if Student - Customer Type is chosen
    Description: Gets Student Acccount Type / Returns Student Acccount Type when the function is called
        @param: None
        @return Acccount Type Student: object of Class Student is returned
*****************************************************************************************************************************/
    Student getStudent()
    {
        return this->student;
    }


/*****************************************************************************************************************************
    Module Name: Getter Function for getting Transaction Details
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For getting Transaction Details and printing them
    Description: Gets or Returns Transaction Type, Transaction Date, Transaction Amount, Account Balance when the function is called
        @param: None
        @return null
*****************************************************************************************************************************/
    void getTransactionDetails()
    {
        cout << "\n";
        ///Traversing the transaction array to print from first to last transactions
        for (int i = 0; i < this->transactionIndex; i++)
        {
            cout << "\t\t" << transactions[i].transaction_type << "\t" << transactions[i].date << "\t$" << transactions[i].amount << "\t$" << transactions[i].balance << endl;
        }
    }


/*****************************************************************************************************************************
    Module Name: Function to Display Customer Information
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To Display Customer Information
    Description: Displays Customer Information like Account Number, Customer Type, Customer Name, Account Balance
        @param name: for displaying customer's information as string data type
        @return null
*****************************************************************************************************************************/
    void to_string()
    {   
        ///display Account Number
        cout << "\tAccount Number is : " << this->account_number << endl;

        ///To decide customerType: which customer is under consideration 1-Senior, 2-Adult, 3-Student
        switch (this->customerType) 
        {
        case 1:
            cout << "\tCustomer Type is : " << this->getSenior().type();
            cout << "\tOwner \t : " << this->getSenior().name << endl;
            break;

        case 2:
            cout << "\tCustomer Type is : " << this->getAdult().type();
            cout << "\tOwner \t: " << this->getAdult().name << endl;
            break;

        case 3:
            cout << "\tCustomer Type is : " << this->getStudent().type();
            cout << "\tOwner \t : " << this->getStudent().name << endl;
            break;

        }
        ///display Account Balance 
        cout << "\tBalance : $" << this->balance << endl;
    }
};

/*****************************************************************************************************************************
    Module Name: Class to Find Time Period
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To find Date durations, formatting start date and end date
*****************************************************************************************************************************/
class FindTimePeriod
{
public:

/*****************************************************************************************************************************
    Module Name: Function to Find Time Period
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: This Function returns the Time Period between start date and end date:
    Description: Displays Customer Information like Account Number, Customer Type, Customer Name, Account Balance
    for displaying customer's information as string data type
        @param start: Start date in string format
        @param end: End date in string format
        @return Monthly interest
    Precondition: Date should be in dd/mm/yyyy format only
    Postcondition: Calculates and returns Monthly Interest from the Dates
*****************************************************************************************************************************/
    static int findTimePeriod(string start, string end)
    {
        ///Formatting Start Date:
        ///Date sholud be in dd/mm/yyyy format else this function won't work
        start += "/";
        ///for storing month of Start Date
        int startMonths;
        ///for stroing year of Start Date
        int startYears;
        ///for storing days of Start Days
        int startDays;
        ///to store the date
        string splittedString[3];
        ///temperory variable for helping in storing the formatted date
        string temp = "";
        ///for indexing of string
        int j = 0;

        ///range based for loop for iterating over all elements of start date string
        for (char i : start)
        {   
            ///until '/' is found, keep putting the characters in splittedstring (ONLY if dd/mm/yyyy format is followed)
            if(i=='/')
            {   
                ///this would give day as the [0] element, month as [1] element, year as [2] element of splittedString
                splittedString[j++] = temp;
                temp = "";
            }
            else
            {
                temp += i;
            }
        }
        ///convert the string to integer using stoi() then store the string in [0] element which is date of start Date
        startDays = stoi(splittedString[0]);
        ///convert the string to integer using stoi() then store the string in [1] element which is Months of start Date
        startMonths = stoi(splittedString[1]);
        ///convert the string to integer using stoi() then store the string in [2] element which is year of start Date
        startYears = stoi(splittedString[2]);

        //Formatting End Date:
        end += "/";
        ///for storing month of end date
        int endMonths;
        ///for storing years of end date
        int endYears;
        ///for storing days of end date
        int endDays;
        temp = "";
        ///for indexing of string
        j = 0;

        ///range based for loop for iterating over all elements of start date string
        for (char i : end)
        {
            ///until '/' is found, keep putting the characters in splittedstring (ONLY if dd/mm/yyyy format is followed)
            if (i == '/')
            {
                ///this would give day as the [0] element, month as [1] element, year as [2] element of splittedString
                splittedString[j++] = temp;
                temp = "";
            }
            else
            {
                temp += i;
            }
        }
        ///convert the string to integer using stoi() then store the string in [0] element which is day of end date
        endDays = stoi(splittedString[0]);
        ///convert the string to integer using stoi() then store the string in [1] element which is month of end date
        endMonths = stoi(splittedString[1]);
        ///convert the string to integer using stoi() then store the string in [2] element which is year of end date
        endYears = stoi(splittedString[2]);

        //Here We consider Interest Month Wise:
        //If Yearly is needed- do this:
        //return (endYears - startYears) + (endMonths - startMonths) + (endDays - startDays)/ 30)/ 12;
        //Calculate Monthly Interest:
        return (endYears - startYears) * 12 + (endMonths - startMonths) + (endDays - startDays) / 30;
    }
};


/*****************************************************************************************************************************
    Module Name: Savings_Account Class which is a subclass derived from super Class Account 
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To perform all functions in Savings Account
    Description: Includes functions for deposit, withdraw and add interests in Savings Account 
*****************************************************************************************************************************/
class Savings_Account : public Account
{
public:


/*****************************************************************************************************************************
    Module Name: Deposit Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To add deposit amount in Savings Account
    Description: Adds deposit amount to the current balance in Savings Account
        @param amount: for passing deposit amount as double data type and storing it in Current Account Balance
        @return null
*****************************************************************************************************************************/
    void deposit(double amount)
    {

        this->balance += amount;
    }


/*****************************************************************************************************************************
    Module Name: Withdraw Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To withdraw amount from Savings Account
    Description: Withdraws amount from the current balance in Savings Account
        @param amount: for passing withdraw amount as double data type to update the Current Account Balance
        @param date: for date of Withdrawal to be stored with every transaction
        @param SAVINGS_INTEREST: for calculating interest on savings
        @param OVER_DUE_PENALTY: for calculating overdue penalty charges
        @return null
*****************************************************************************************************************************/
    void withdraw(double amount, string date, float SAVINGS_INTEREST, float OVER_DUE_PENALTY)
    {
        ///if the Account Balance is less than Withdrawal Amount then notify insufficient balance
        if (this->balance < amount)
        {
            cout << "\tInsufficient Balance" << endl;
        }
        else
        {
            string start;
            ///to get the start date of withdrawal
            start = this->transactions[this->transactionIndex - 1].date;
            
            ///Find Time Period For Previous Transaction:
            int timePeriod = FindTimePeriod::findTimePeriod(start, date); 
            
            ///to add interest if needed
            this->add_interest(SAVINGS_INTEREST, timePeriod, date);
            
            ///to calculate over due penalty, deduct from Account Balance
            this->balance -= OVER_DUE_PENALTY;
            Transaction transaction;

            ///process the transaction means reduce the withdrawal amount from balance 
            transaction.processTransactio(
                "OVR CHG", OVER_DUE_PENALTY, date, 0, this->balance);

            ///save the changes in transactions and balance amount
            this->setTransactions(transaction);
            this->balance -= amount;
        }
    }


/*****************************************************************************************************************************
    Module Name: Add Interest Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To add interest amount from Savings Account
    Description: Adds Interest amount in Savings Account
        @param rate: for passing interest rate as we need to add interest as float data type
        @param timeperiod: for duration to check how much interest should be added monthly
        @param date: for date of adding interest to be stored with every transaction
        @return null
*****************************************************************************************************************************/
    void add_interest(float rate, int timeperiod, string date)
    {
        ///Calculating Monthly Interest which is Principal Amount * Time * Rate
        double interestAmount = this->balance * timeperiod * rate;
        
        ///add interest amount to current balance
        this->balance = this->balance + interestAmount;
        Transaction transaction;
        
        ///store the changes by calling process transaction function
        transaction.processTransactio(
            "INT CR", interestAmount, date, 0, this->balance);
         ///save the changes in transactions
        this->setTransactions(transaction);
    }
};


/*****************************************************************************************************************************
    Module Name: Checking_Account Class which is a subclass derived from super Class Account 
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To perform all functions in Checkings Account
    Description: Includes functions for deposit, withdraw and add interests in Checkings Account 
*****************************************************************************************************************************/
class Checking_Account : public Account
{
public:

/*****************************************************************************************************************************
    Module Name: Deposit Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To add deposit amount in Checkings Account
    Description: Adds deposit amount to the current balance in Checkings Account
        @param amount: for passing deposit amount as double data type and storing it in Current Account Balance
        @return null
*****************************************************************************************************************************/
    void deposit(double amount)
    {
        this->balance += amount;
    }


/*****************************************************************************************************************************
    Module Name: Withdraw Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To withdraw amount from Checkings Account
    Description: Withdraws amount from the current balance in Savings Account
        @param amount: for passing withdraw amount as double data type to update the Current Account Balance
        @param date: for date of Withdrawal to be stored with every transaction
        @param CHECK_INTEREST: for calculating interest on checkings account
        @param CHECK_CHARGE: for calculating cheque charges
        @return null
*****************************************************************************************************************************/
    void withdraw(double amount, string date, float CHECK_INTEREST, float CHECK_CHARGE)
    {
        ///if the Account Balance is less than Withdrawal Amount then notify insufficient balance
        if (this->balance < amount)
        {
            cout << "\tInsufficient Balance" << endl;
        }
        else
        {
            string start;
            ///to get the start date of withdrawal
            start = this->transactions[this->transactionIndex - 1].date;

            //Find Time Period For Previous Transaction:
            int timePeriod = FindTimePeriod::findTimePeriod(start, date); 
            
            ///to add interest if needed
            this->add_interest(CHECK_INTEREST, timePeriod, date);

            ///to calculate cheque, deduct from Account Balance
            this->balance -= CHECK_CHARGE;
            Transaction transaction;

            ///process the transaction means reduce the withdrawal amount from balance 
            transaction.processTransactio(
                "CHK CHG", CHECK_CHARGE, date, 0, this->balance);

            ///save the changes in transactions and balance amount
            this->setTransactions(transaction);
            this->balance -= amount;
        }
    }


/*****************************************************************************************************************************
    Module Name: Add Interest Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To add interest amount from Checkings Account
    Description: Adds Interest amount in Checkings Account
        @param rate: for passing interest rate as we need to add interest as decimal numbers
        @param timeperiod: for duration to check how much interest should be added monthly
        @param date: for date of adding interest to be stored with every transaction
        @return null
*****************************************************************************************************************************/
    void add_interest(float rate, int timeperiod, string date)
    {
        ///Calculating Monthly Interest which is Principal Amount * Time * Rate
        double interestAmount = this->balance * rate * timeperiod;

        ///add interest amount to current balance
        this->balance = this->balance + interestAmount;
        Transaction transaction;

        ///store the changes by calling process transaction function
        transaction.processTransactio(
            "INT CR", interestAmount, date, 0, this->balance);

        ///save the changes in transactions
        this->setTransactions(transaction);
    }
};


/*****************************************************************************************************************************
    Module Name: Class Bank
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: For performing the main operations of Banking System
    Description: It has functions To Add Account, Withdraw, make deposit, get account number and get transactions
*****************************************************************************************************************************/
class Bank
{
private:
    ///for storing all accounts information in a pointer array
    Account *accounts[20];
    
    ///for storing savings accounts information
    Savings_Account savingAccounts[50];

    ///for storing checkings accounts information
    Checking_Account checkingAccounts[50];
    
    ///for storing number of customers
    int customerNumber = 1;

    ///for storing type of customer
    int customerType;
    
    ///for storing account number starting from 0
    int account_number = -1;

    // saving accounts + checking accounts i.e 2*50
    int accountTypes[2 * 50];

public:


/*****************************************************************************************************************************
    Module Name: Add Account Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To Add a new bank Account
    Description: Function to add a new account after asking for Customer's name, address, age, telephone number, customer type
    & account type. An Account Number is assigned.
        @param None
        @return null
*****************************************************************************************************************************/
    void add_account()
    {
        ///to store customer's name and address
        string name, address;

        ///to store customer's age
        short age;

        ///to store customer's telephone number
        long long telephone_number;

        ///to store the amount balance, which will be 0 when the account is created
        double balance = 0;

        ///to store transaction type: Withdrawal, Deposit, Add Account, Check Account Details
        string transaction_type;

        ///to store withdrawal or deposit amount
        double amount = 0;

        ///to store the interest charge fees, over due penalty or cheque charges
        float fees = 0;

        ///to store account type: 1.Checkings, 2.Savings
        int accountType;

        //Ask for Customer Name and receive input
        cout << "\tEnter Customer Name : >> ";
        cin >> name;
        //Ask for Customer Address and receive input
        cout << "\tEnter Customer Address : >> ";
        cin >> address;

        ///loop to check if customer's age is more than 100 or less than 0
        while (true)
        {
            cout << "\tEnter Customer Age : >> ";
            cin >> age;
            if ((age / 100) <= 1 || age < 0) //CHECK ON AGE
            {
                break;
            }
            ///if customer age is more than 100 or less than 0, give error message
            else
            {
                cout << "\n\t------------AGE CAN'T BE MORE THAT 100 AND LESS THAN 0----------------\n\n"
                     << endl;
            }
        }

        ///loop to check if customer's phone number is not more than 10 digits
        while (true)
        {
            cout << "\tEnter Customer Phone Number : >>  ";
            cin >> telephone_number;
            //FOR TELEPHONE NUMBER TO BE 10 DIGITS LONG
            if ((telephone_number / 10000000000) <= 1) 
            {
                break;
            }
            ///if customer's phone number is more than 10 digits, give error message
            else
            {
                cout << "\n\t--------------TELEPHONE NUMBER SHOULD BE 10 DIGITS LONG---------------\n\n"
                     << endl;
            }
        }
        
        ///loop to check if customer type number entered should be only 1, 2 or 3
        while (true)
        {
            cout << "\tEnter Customer Type\n\t 1 --- Senior\n\t 2 --- Adult\n\t 3 --- Student \n\t >> ";
            cin >> this->customerType;
            //RESTRICTING CUSTOMER TO CHOOSE AMONG PROVIDED THREE OPTIONS 1-SENIOR 2-ADULT 3-STUDENT:
            if (this->customerType == 1 || this->customerType == 2 || this->customerType == 3) 
            {
                break;
            }
            ///if customer's type number entered is not 1, 2 or 3, give error message
            else
            {
                cout << "\t------------WRONG INPUT PLEASE PROVIDE A VALID INPUT-----------" << endl;
            }
        }
 
        ///loop to check if Account type number entered should be only 1 or 2
        while (true)
        {
            cout << "\tEnter\n\t1 --- Saving Account\n\t2 --- Checking Account Type \n\t >> ";
            cin >> accountType;
            //FOR RESTRICTING USER TO ENTER ONLY GIVEN OPTIONS
            if (accountType == 1 || accountType == 2) 
            {
                break;
            }
            ///if Account type number entered is not 1 or 2, give error message
            else
            {
                cout << "\n\t------------WRONG INPUT PLEASE PROVIDE A VALID INPUT--------------\n\n"
                     << endl;
            }
        }

        ///calling constructors of the respectives classes so that the values are stored in the objects
        Student student(name, address, age, telephone_number, this->customerNumber);
        Senior senior(name, address, age, telephone_number, this->customerNumber);
        Adult adult(name, address, age, telephone_number, this->customerNumber);
        
        ///incrementing customer number since an account has been added, so customer has increased
        this->customerNumber++;
        
        ///incrementing account number since an account has been added, so account number has increased
        this->account_number++;
        
        ///storing data received of type of account
        accountTypes[this->account_number] = accountType;
        
        ///creating an object of Savings_Account, if saving account is chosen
        Savings_Account savingAccount;
        int sIndex = 0;

        ///creating an object of Checking_account, if saving account is chosen
        Checking_Account checkingAccount;
        int cIndex = 0;

        /// To determine the type of account chosen: Savings or Checkings
        switch (accountType)
        {
            ///If savings account is selected, set an account number
        case 1:
            savingAccount.setAccountNumber(account_number);

            /// To determine the type of customer chosen: Senior, Adult, Student
            switch (customerType)
            {
            case 1:
                ///If in savings account: Senior account is selected, set customer type Senior in Savings Account
                savingAccount.setSenior(senior);
                break;
            case 2:
                ///If in savings account: Adult account is selected, set customer type Adult in Savings Account
                savingAccount.setAdult(adult);
                break;
            case 3:
                ///If in savings account: Student account is selected, set customer type Student in Savings Account
                savingAccount.setStudent(student);
                break;
            }
            ///store the amount balance in Savings Account
            savingAccount.set_balance(balance);

            ///store the customer type in Savings Account
            savingAccount.set_customer(customerType);
            savingAccounts[sIndex++] = savingAccount;
            break;

        case 2:
            ///If checkings account is selected, set an account number
            checkingAccount.setAccountNumber(account_number);
            switch (customerType)
            {
            ///If in checkings account: Senior account is selected, set customer type Senior in checkings Account
            case 1:
                checkingAccount.setSenior(senior);
                break;
            ///If in checkings account: Adult account is selected, set customer type Adult in checkings Account
            case 2:
                checkingAccount.setAdult(adult);
                break;
            ///If in checkings account: Student account is selected, set customer type Student in checkings Account
            case 3:
                checkingAccount.setStudent(student);
                break;
            }

            ///store the amount balance in checkings Account
            checkingAccount.set_balance(balance);

            ///store the customer type in checkings Account
            checkingAccount.set_customer(customerType);
            checkingAccounts[cIndex++] = checkingAccount;
            break;
        ///If any other incorrect key is entered, sent this error message
        default:
            cout << "\tERROR! Please choose a desired option" << endl;
        }
    ///On successful addition of account, give confirmation and account number
        cout << "\tAccount Added  : " << this->account_number << "\n\n";
    }


/*****************************************************************************************************************************
    Module Name: Getter Function for getting Account Number & Account Type
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: TO FIND IF AN ACCOUNT EXISTS OR NOT
    Description: FUNCTION TO FIND IF AN ACCOUNT EXISTS OR NOT. Return index, if found: else return -1:
        @param account_number: passing account number as integer data type to compare and fetch the details of the account
        @param actType: passing account type for getting 0 for savings & 1 for checkings account
        @return : account type in the form of integer data type
*****************************************************************************************************************************/
    int get_account(int account_number, int actType)
    {   
        ///for searching for an account
        int j = 0;
        
        ///to determine Account Type: Savings or Checkings Account
        switch (actType)
        {
        case 1:
            //CASE 1 if ACCOUNT EXISTS IN SAVING Accounts:
            j = 0;
            for (Savings_Account i : this->savingAccounts)
            {
                ///Traversing to find if the account number provided by the user is the same as stored
                if (i.account_number == account_number)
                {
                    return j;
                }
                j++;
            }
            break;

        case 2:
            //CASE 2 IF ACCOUNT EXITS IN CHECKING ACCOUNTS:
            j = 0;
            for (Checking_Account i : this->checkingAccounts)
            {
                ///Traversing to find if the account number provided by the user is the same as stored
                if (i.account_number == account_number)
                {
                    return j;
                }
                j++;
            }
            break;
        }
        /// if account number not found return -1:
        return -1;
    }


/*****************************************************************************************************************************
    Module Name: Function for Making Deposit
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To add deposit amount in Checkings Account & Savings Account
    Description: Adds deposit amount to the current balance in Checkings Account & Savings Account
        @param amount: deposit amount of double data type for storing deposit in Current Account Balance
        @param account_number: passing account number as integer data type to compare and fetch the details of the account
        @param date: to store the date of deposit as string data type
        @param fees: the fees as float data type which is initially 0
        @return null
*****************************************************************************************************************************/
    void make_deposit(double amount, int account_number, string date, float fees = 0)
    {
        ///to get the account type of customer
        int accountType = this->accountTypes[account_number];

        ///FIND ACCOUNT :
        int index = this->get_account(account_number, accountType); 

        ///previous function returned -1 when account number was not found, so if index is 1, account is not found
        if (index == -1)
            cout << "\tAccount Number Not Found" << endl;
        else
        {   
            ///check is deposit amount is less than 0
            if (amount < 0)
            {
                cout << "\t AMOUNT LESS THAN 0" << endl;
            }
            else
            {
                ///To determine which Account Type
                switch (accountType)
                {
                ///For Savings Account
                case 1:
                    if (amount > 0)
                    {
                        ///store the deposit amount
                        savingAccounts[index].deposit(amount);

                        ///get the balance of the particular account number provided to add deposit amount to it
                        Transaction transaction;
                        transaction.processTransactio("DEP", amount, date, fees, savingAccounts[index].get_balance());

                        ///save the changes in Amount Balance & transactions
                        savingAccounts[index].setTransactions(transaction);

                        ///Deposit confirmation message with new balance
                        cout << "\tDeposited Success! " << endl;
                        cout << "\tNew Balance is $" << savingAccounts[index].get_balance() << endl;
                    }
                    break;

                ///For Checkings Account
                case 2:
                    if (amount > 0)
                    {
                        ///store the deposit amount
                        checkingAccounts[index].deposit(amount);

                        ///get the balance of the particular account number provided to add deposit amount to it
                        Transaction transaction;
                        transaction.processTransactio("DEP", amount, date, fees, checkingAccounts[index].get_balance());

                        ///save the changes in Amount Balance & transactions
                        checkingAccounts[index].setTransactions(transaction);

                        ///Deposit confirmation message with new balance
                        cout << "\tDeposited Success !" << endl;
                        cout << "\tNew Balance is $" << checkingAccounts[index].get_balance() << endl;
                    }
                    break;
                }
            }
        }
    }


/*****************************************************************************************************************************
    Module Name: Function to make Withdrawal
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To add deposit amount in Checkings Account & Savings Account
    Description: Withdraws amount from the current balance in Savings Account
        @param amount: deposit amount of double data type for storing deposit in Current Account Balance
        @param account_number: passing account number as integer data type to compare and fetch the details of the account
        @param date: to store the date of deposit as string data type
        @param fees: the fees as float data type which is initially 0
        @return null
*****************************************************************************************************************************/
    void make_withdrawal(double amount, int account_number, string date, float fees = 0)
    {
        ///to get the account type
        int accountType = this->accountTypes[account_number];

        ///FIND ACCOUNT & Account Type
        int index = this->get_account(account_number, accountType);

        ///for storing savings interest
        float SAVINGS_INTEREST;

        ///for storing check interest
        float CHECK_INTEREST;

        ///for storing cheque charges
        float CHECK_CHARGE;

        ///for storing overdraft penalty
        float OVERDRAFT_PENALTY;

        ///previous function returned -1 when account number was not found, so if index is 1, account is not found
        if (index == -1)
            cout << "\tAccount Not Found";
        else
        {
            if (amount < 0)
            {
                ///check is withrawal amount is less than 0
                cout << "\t AMOUNT CAN'T BE LESS THAN 0" << endl;
            }
            else
            {
                ///To determine which Account Type
                switch (accountType)
                {
                /// CASE 1 FOR SAVING ACCOUNT
                case 1:
                    ///To determine which Customer Type
                    switch (this->customerType)
                    {
                    ///For Senior Customer
                    case 1:
                        SAVINGS_INTEREST = savingAccounts[index].getSenior().SAVINGS_INTEREST;
                        OVERDRAFT_PENALTY = savingAccounts[index].getSenior().OVERDRAFT_PENALTY;
                        break;

                    ///For Adult Customer
                    case 2:
                        SAVINGS_INTEREST = savingAccounts[index].getAdult().SAVINGS_INTEREST;
                        OVERDRAFT_PENALTY = savingAccounts[index].getAdult().OVERDRAFT_PENALTY;
                        break;

                    ///For Student Customers
                    case 3:
                        SAVINGS_INTEREST = savingAccounts[index].getStudent().SAVINGS_INTEREST;
                        OVERDRAFT_PENALTY = savingAccounts[index].getStudent().OVERDRAFT_PENALTY;
                        break;
                    }

                    ///Check if withdrawal amount is more than Balance amount
                    if (amount > 0 && amount <= savingAccounts[index].balance)
                    {
                        ///store the withdrawal amount
                        savingAccounts[index].withdraw(amount, date, SAVINGS_INTEREST, OVERDRAFT_PENALTY);

                        ///get the balance of the particular account number provided to withdraw amount from
                        Transaction transaction;
                        transaction.processTransactio("WD", amount, date, fees, savingAccounts[index].get_balance());

                        ///save the changes in Amount Balance after withdraw & transactions
                        savingAccounts[index].setTransactions(transaction);

                        ///Withdraw confirmation message with new balance
                        cout << "\tWithdraw of amount : $ " << amount << " Success!" << endl;
                        cout << "\tNew Balance is  $ " << savingAccounts[index].get_balance() << endl;
                    }
                    else
                        ///give error message if withdrawal amount is more than balance in Savings Account
                        cout << "\n\tInsufficient balance, Cannot withdraw!" << endl;
                    break;  
                
                ///CASE 2 FOR CHECKING ACCOUNT:
                case 2:
                    ///To determin the Customer Type
                    switch (this->customerType)
                    {
                    ///FOR SENIOR CUSTOMER
                    case 1:
                        CHECK_INTEREST = checkingAccounts[index].getSenior().CHECK_INTEREST;
                        CHECK_CHARGE = checkingAccounts[index].getSenior().CHECK_CHARGE;
                        break;

                    /////FOR ADULT CUSTOMER
                    case 2:
                        CHECK_INTEREST = checkingAccounts[index].getAdult().CHECK_INTEREST;
                        CHECK_CHARGE = checkingAccounts[index].getAdult().CHECK_CHARGE;
                        break;

                    ///FOR STUDENT CUSTOMER
                    case 3:
                        CHECK_INTEREST = checkingAccounts[index].getStudent().CHECK_INTEREST;
                        CHECK_CHARGE = checkingAccounts[index].getStudent().CHECK_CHARGE;
                        break;
                    }
                    ///Check if withdrawal amount is more than Balance amount
                    if (amount > 0 && amount <= checkingAccounts[index].balance)
                    {
                        ///store the withdrawal amount in Checkings Account
                        checkingAccounts[index].withdraw(amount, date, CHECK_INTEREST, CHECK_CHARGE);

                        ///get the balance of the particular account number provided to withdraw amount from
                        Transaction transaction;
                        transaction.processTransactio("WD", amount, date, fees, checkingAccounts[index].get_balance());

                        ///save the changes in Amount Balance after withdraw & transactions
                        checkingAccounts[index].setTransactions(transaction);
                        
                        ///Withdraw confirmation message with new balance
                        cout << "\tWithdraw of amount : $ " << amount << " Success !" << endl;
                        cout << "\tNew Balance is  $ " << checkingAccounts[index].get_balance() << endl;
                        cout << "\t Amount " << amount << " is withdrawn successfully" << endl;
                    }
                    else
                        ///give error message if withdrawal amount is more than balance in Checkings Account
                        cout << "\n\tInsufficient balance, Cannot withdraw!" << endl;
                    break;
                }
            }
        }
    }


/*****************************************************************************************************************************
    Module Name: Getter Function for getting Account Number
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To get the account number for both savings and checkings account
    Description: Set customer's name to the current value in pointer object (if not initialized by Constructor)
        @param account_number: for passing account as integer data type that is to be searched
        @return bool: True is account number found, false if not found
*****************************************************************************************************************************/
    bool get_Account_number(int account_number)
    {   
        ///to get the account type: Savings or Checkings
        int accountType = this->accountTypes[account_number];
        int index = this->get_account(account_number, accountType);

        ///Account does not exist if index is -1
        if (index == -1)
        {
            cout << "\tACCOUNT NOT FOUND!" << endl;
            return false;
        }
        else
        {
            ///To determine the Type of Account
            switch (accountType)
            {
            /// CASE 1 FOR SAVING ACCOUNTS
            case 1:
                this->savingAccounts[index].to_string();
                break;
            /// FOR CHECKING ACCOUNTS
            case 2:
                this->checkingAccounts[index].to_string();
            }
        }
        this->getTransactionList(account_number);
        return true;
    }


/*****************************************************************************************************************************
    Module Name: Getter Function for getting Transactions List
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To get the list of all Transactions
    Description: Set customer's name to the current value in pointer object (if not initialized by Constructor)
        @param account_number: passing account number as integer data type to search for its transactions  
        @return null
*****************************************************************************************************************************/
    void getTransactionList(int account_number)
    {
        ///to get the account type: Savings or Checkings
        int accountType = this->accountTypes[account_number];
        int index = this->get_account(account_number, accountType);

        ///Account does not exist if index is -1
        if (index == -1)
        {
            cout << "\tACCOUNT NOT FOUND! " << endl;
        }
        else
        {
            ///To determine the Type of Account
            switch (accountType)
            {
            /// CASE 1 FOR SAVING ACCOUNTS
            case 1:
                this->savingAccounts[index].getTransactionDetails();
                break;

            /// CASE 2 FOR CHECKING ACCOUNTS
            case 2:
                this->checkingAccounts[index].getTransactionDetails();
                break;
            }
        }
    }
};


/*****************************************************************************************************************************
    Module Name: Main Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To ask user for input and then perform the desired banking options using the object of Bank Class
    Description: Give choice for Adding Account, Make Deposit, Withdrawal & Check Account Details
        @param: None
        @return int: if no error, int = 0, else it will be non-zero number
*****************************************************************************************************************************/
int main()
{   
    ///To call functions of Bank class to perform the desired option
    Bank bank;

    ///To store user's desired option
    int choice;

    ///To store the balance amount
    double amount;

    ///To store the fees of overdue penalty, cheque charges
    float fees = 0;

    ///To store the Account Type
    int accountType;

    ///To store the Account Number
    int accountNumber;

    ///to store date of transaction
    string date;

    ///flag to check if user wants to exit the program
    bool found;
    do
    {   ///try catch block: to catch any undetermined error
        try
        {
            ///Asks user to input any desired option and store that in choice variable
            cout << "\n\n\tEnter:\n\t 1 -- Add Account \n\t 2 -- Make Deposit \n\t 3 -- Make Withdrawal\n\t 4 -- Account Details \n\n\t Press any other key to Exit! \n\t >>  ";
            cin >> choice;

            ///To determine which function was chosen by the user
            switch (choice)
            {
            ///Case 1: To Add Account
            case 1:
                ///calling add account function
                bank.add_account();
                break;

            ///Case 2: To Make Deposit which requires account no., deposit amount and date of deposit
            case 2:
                cout << "\tEnter Account Number : >> ";
                cin >> accountNumber;
                cout << "\tEnter the deposit Amount : >> $";
                cin >> amount;
                cout << "\tEnter the Date of Transaction(dd/mm/yyyy) : >> ";
                cin >> date;

                ///calling make_deposit function
                bank.make_deposit(amount, accountNumber, date, fees = fees);
                break;

            ///Case 3: To Withdraw which requires account no., Withdrawal amount and date of Withdrawal
            case 3:
                cout << "\tEnter Account Number : >> ";
                cin >> accountNumber;
                cout << "\tEnter the WithDrawal Amount : >> $";
                cin >> amount;
                cout << "\tEnter the Date of Transaction(dd/mm/yyyy) : >> ";
                cin >> date;

                ///calling make_withdrawal function
                bank.make_withdrawal(amount, accountNumber, date, fees = fees);
                break;

            ///Case 4: To Check Bank Account Details which requires account no.
            case 4:
                cout << "\tEnter Account Number : >> ";
                cin >> accountNumber;

                ///calling get_Account_number function
                found = bank.get_Account_number(accountNumber);
                break;

            ///if anything else is chosen show the error message in try catch block
            default:
                choice = 5;
            }
        }
        ///To catch any error entered mistakenly by user
        catch (exception &x)
        {
            cout << "\t--------------------SOMETHING WENT WRONG! PLEASE TRY AGAIN! ----------" << endl;
            choice = 5;
        }
    ///run the loop until choice is not set to 5, means unless user keeps entering option 1,2,3,4
    } while (choice != 5);

    ///return 0 if program executed successfully because main function is of type integer
    return 0;
}