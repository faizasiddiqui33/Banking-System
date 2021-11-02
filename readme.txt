Banking project is a c++ program is a user-friendly program that has four parts: 
- Creates a bank account by asking the customer's name, customer's age, customer's address and customer's phone number. 
    - It also makes 3 types of Customers -> Senior, Adult, Student
    - It makes 2 types of Accounts: Checkings & Savings Account
- This program Deposits an amount in a bank account
- This program takes Withdrawal from a bank account
- This program checks balance in the bank account

This program implements Multiple Inheritance
In the program there is:
1. Account Super Class
2. Savings Account Class which is a sub class of Account Class
3. Checkings Account Class which is a sub class of Account Class
4. Customer Super Class
5. Senior Class which is a sub class of Customer Class
6. Adult Class which is a sub class of Customer Class
7. Student Class which is a sub class of Customer Class
8. Class Bank
9. Class Transaction 

In the first part of the Program, Functionality of adding a new account is implemented after asking for 
Customer's name, address, age, telephone number, customer type& account type. An Account Number is assigned.
Ther are Accessor and Modifier Functions for every data member
The user is also to choose Account Type: Savings or Checkings
The type of Customer is asked and stored as Senior, Adult and Student.

In the second part of the Program, user can make deposit after asking for account number, deposit amount and date of deposit. 
The Balance amount is then updated.
In this program we also calculate interest monthly. 
Savings interest for Savings Account and Check_interest for Checkings Account

In the third part of the Program, user can withdraw after asking for account number, withdraw amount and date of withdrawal. 
The Balance amount is then updated. If withdrawal is more than balance, then error message is displayed.

In the fourth part of the Program, user can check account details after asking for account number. 
The past transactions such as deposit, withdrawal, overdue penalty charges, cheque charges and balance amount is displayed along with . 
If account no. is not found, then error message is displayed.

In the Main Function, we call functions such as add_account(), make_deposit(), make_withdrawal(), get_account() to perform
desired option. We ask user for input and perform the desired option as requested. 