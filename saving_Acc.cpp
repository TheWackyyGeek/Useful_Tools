#include <iostream>

using namespace std;

class SavingsAccount {
private:
  double balance;
  double interest_rate;

public:
  SavingsAccount(double balance, double interest_rate) {
    this->balance = balance;
    this->interest_rate = interest_rate;
  }

  double getBalance() { return balance; }

  void deposit(double amount) {
    if (amount <= 0) {
      cout << "Invalid deposit amount" << endl;
      return;
    }

    balance += amount;
    cout << "Deposit successful. You deposited Rupees " << amount << endl;
  }

  void withdraw(double amount) {
    if (amount <= 0) {
      cout << "Invalid withdraw amount" << endl;
      return;
    }

    if (amount > balance) {
      cout << "Insufficient balance" << endl;
      return;
    }

    balance -= amount;
    cout << "Withdraw successful. You withdrew Rupees " << amount << endl;
  }

  void calculateInterest() {
    double interest = balance * interest_rate / 100;
    balance += interest;
    cout << "Interest calculated successfully. You earned Rupees " << interest << endl;
  }

  void checkBalance() { cout << "Your current balance is: Rupees " << balance << endl; }
};

int main() {
  double balance, interest_rate;
  cout << "Enter the initial balance (in Rupees): ";
  cin >> balance;

  cout << "Enter the interest rate (%): ";
  cin >> interest_rate;

  SavingsAccount account(balance, interest_rate);

  int choice;
  bool continue_loop = true;
  while (continue_loop) {
    cout << "Menu:" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Calculate interest" << endl;
    cout << "4. Check balance" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        double deposit_amount;
        cout << "Enter the amount to deposit (in Rupees): ";
        cin >> deposit_amount;
        account.deposit(deposit_amount);
        break;
      case 2:
        double withdraw_amount;
        cout << "Enter the amount to withdraw (in Rupees): ";
        cin >> withdraw_amount;
        account.withdraw(withdraw_amount);
        break;
      case 3:
        account.calculateInterest();
        break;
      case 4:
        account.checkBalance();
        break;
      case 5:
        continue_loop = false;
        cout << "Your final balance is: Rupees " << account.getBalance() << endl;
        break;
      default:
        cout << "Invalid choice" << endl;
    }
  }
  return 0;
}



