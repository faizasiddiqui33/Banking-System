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