//Lin_Eric
//October 7th, 2024
//Lecture 5

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double iniMoney;    // Initial Money
    double bal;         // Current Balance
    int trans;          // Number of Transactions

    // Asking user questions to gather the variables of the data
    cout << "How much money does your bank account have at the start of the day ?" << endl;
    cin >> iniMoney;
    cout << "How many bank transactions were done that day." << endl;
    cin >> trans;

    // Time to do some math!
    bal = iniMoney;
    int i = 0;

    while (i < trans) {
        cout << "Transaction " << (i + 1) << endl;
        char t;
        double amount;

    // Clear instruction for user to select type of transaction
    cout << "Enter transaction type (d for debit, c for credit): ";
    cin >> t;

    //Following is for debit
        if (t == 'd') 
    {
        cout << "Enter debit amount: ";
        cin >> amount;
    //Subtract for debit
        bal = bal - amount; 
        cout << "Balance after transaction " << (i + 1) << ": $" << bal << endl;
        i = i + 1;  
    } 
    //Following is for credit
        else if (t == 'c') 
    {
        cout << "Enter credit amount: ";
        cin >> amount;
    //Add for credit
        bal = bal + amount;  
        cout << "Balance after transaction: " << (i + 1) << ": $" << bal << endl;
        i = i + 1;  
    } else 
    {
        cout << "Invalid! Please enter 'd' or 'c'." << endl;
    }
}
    //The Summary for the Required Extra Credit...
    cout << "End of Day Balance Summary:";
    cout << "Final balance: $" << bal << endl;

    return 0;
}

/*
How much money does your bank account have at the start of the day ?
312.25
How many bank transactions were done that day.
3
Transaction 1
Enter transaction type (d for debit, c for credit): d
Enter debit amount: 12.25
Balance after transaction 1: $300
Transaction 2
Enter transaction type (d for debit, c for credit): c
Enter credit amount: 117.4
Balance after transaction: 2: $417.4
Transaction 3
Enter transaction type (d for debit, c for credit): c
Enter credit amount: 164.96
Balance after transaction: 3: $582.36
End of Day Balance Summary:Final balance: $582.36
*/