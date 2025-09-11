#include <iostream>

void printer(std::string s) { std::cout << s << '\n'; }

void showBalance(double bal) {
  printer("Your balance is:");
  std::cout << bal << '\n';
}

// mainly messing with passing by referecne
void deposit(double &balance, double &newBal) {
  double deposit;
  printer("Enter deposit amount: ");
  std::cin >> deposit;
  double newAmt = deposit + balance;
  newBal = newAmt;
  balance = newBal;
}

void withdraw(double &balance, double &newBal) {
  double amt;
  printer("Please enter amount you would like to withdrawl");
  std::cout << "Current Amt: " << balance << '\n';
  std::cin >> amt;

  if (amt > balance) {
    printer("Cannot withdraw more money than you have professor");
    return;
  }

  newBal = balance - amt;
  balance = newBal;
  printer("Amount deducted");
  std::cout << "Current amount remaining: " << newBal << '\n';
  return;
}

int main() {
  // apparently found a way to nuke my code
  // Since the cin buffers its input into an int type, entering something like
  // 'fg', kinda increases the speed of the loop, so now, the loop is just stuck
  // on the default case, always starting at the begining of the loop without
  // user input. Failbit. This is what this mechanism is called.
  double balance = 0;
  double newBal = 0;
  int choice = 0;
  do {
    printer("***************************");
    printer("Please select a choice:");
    printer("***************************");
    printer("1. Show Balance");
    printer("2. Deposit Money");
    printer("3. Withdraw Money");
    printer("4. Exit");
    printer("");

    std::cin >> choice;
    switch (choice) {
    case 1:
      showBalance(balance);
      break;
    case 2:
      deposit(balance, newBal);
      std::cout << "[DEPOSIT]::Your new amount is now: £" << newBal << '\n';
      break;
    case 3:
      withdraw(balance, newBal);
      std::cout << "[WITHDRAW]::Your new amount is now: £" << newBal << '\n';
      break;

    case 4:
      printer("Thanks for using this...?");
      break;

    default:
      printer("Whats wrong comradere?");
      break;
    }

  } while (choice != 4);
  return 0;
}
