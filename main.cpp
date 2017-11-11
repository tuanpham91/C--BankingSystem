#include <iostream>
#include "Account.cpp"
using namespace std;

bool printWelcome() {
  cout<<"***********************************"<<endl;
  cout<<"    BANKING MANAGEMENT SYSTEN      "<<endl;
  cout<<"***********************************"<<endl;
  cout<<"   Trademark of Whatever Bank AG   "<<endl;
  cout<<"   PRESS ENTER TO PROCEED          "<<endl;
  bool entered(false);
  string input;
  while (!entered) {
    getline(cin,input);
    if (input==""){
      entered = true;
    }
  }
  return true;
}

int printUserFunction() {
  cout<<"MAIN MENU"<<endl;
  cout<<"1. NEW ACCOUNT"<<endl;
  cout<<"2. DEPOSIT ACCOUNT"<<endl;
  cout<<"3. NEW ACCOUNT"<<endl;
  cout<<"4. BALANCE ENQUIRY"<<endl;
  cout<<"5. ACCOUNT HOLDER LIST"<<endl;
  cout<<"6. CLOSE ACCOUNT"<<endl;
  cout<<"7. MODIFY ACCOUNT"<<endl;
  cout<<"8. NEW ACCOUNT"<<endl;
  cout<<"Select your option:"<<endl;
  int command(0);
  cin>>command;
  switch (command) {
    case 1:
      Account account;
      account.createAccount();
      account.printAccount();
      break;
  }

}

int main() {
  printWelcome();
  while (true) {
    printUserFunction();
  }
}
