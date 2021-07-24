// BANK MANAGEMENT SYSTEM

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
class bank
{
    char name[80], adr[120], a;
    int amount;

public:
    void open_account();
    void deposit_money();
    void display_account();
    void withdraw_money();
};

void bank ::open_account()
{
    cout << "Enter your full name: ";
    cin.ignore();          // It is used to clear buffer
    cin.getline(name, 80); // It is used to get any string

    cout << "Enter your Address: ";
    cin.ignore();
    cin.getline(adr, 120);

    cout << "What type of account you want to open, Savings(s) or Current(c) "<<endl;
    cin >> a;

    cout << "Enter your first deposit amount: "<<endl;
    cin >> amount;

    cout << "Your Account has been created successfully"<<endl;
}

void bank ::deposit_money()
{
    int d;
    cout << "How much amount you want to deposit: ";
    cin >> d;
    amount += d;
    cout << "Your available balance is: " << amount<<endl;
}

void bank ::display_account()
{
    cout << "Enter your full name :: " << name<<endl;
    cout << "Enter full address :: " << adr<<endl;
    cout << "Type of account you want to open :: " << a<<endl;
    cout << "Amount you deposit :: " << amount<<endl;
}

void bank ::withdraw_money()
{
    float money;
    cout << "\n Withdraw :: ";
    cout << "Enter amount you want to withdraw -- "<<endl;
    cin >> money;
    amount -= money;
    cout << "Available balance is :: " << amount<<endl;
}

int main()
{
    int sel, x;
    bank sbi;
    do
    {
        cout << "1) Open Account" << endl;
        cout << "2) Deposit Money" << endl;
        cout << "3) Withdraw Money" << endl;
        cout << "4) Display Account" << endl;
        cout << "5) Exit" << endl;
        cout << "Select the option from above" << endl;
        cin >> sel;

        switch (sel)
        {
        case 1:
            cout << "1) Open Account" << endl;
            sbi.open_account();
            break;
        case 2:
            cout << "2) Deposit Money" << endl;
            sbi.deposit_money();
            break;
        case 3:
            cout << "3) Withdraw Money" << endl;
            sbi.withdraw_money();
            break;
        case 4:
            cout << "4) Display Account" << endl;
            sbi.display_account();
            break;
        case 5:
            if (sel == 5)
            {
                exit(1);
            }
        default:
            cout << "Please choose correct option. Try Again!" << endl;
            break;
        }
        cout << "Do you want to choose other option, then press :: z" << endl;
        cout << "If you want to exit then press :: N"<<endl;
        x = getch(); // GetCh work is not only to hold screen it also takes the value
        if (x == 'N')
        {
            exit(0);
        }
    } while (x == 'z');
    getch();
    return 0;
}