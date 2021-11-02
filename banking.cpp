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

