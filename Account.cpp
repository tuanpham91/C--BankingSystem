
using namespace std;
class Account {
public:
  int accountNr;
  int balance;
  string accountHolder;

  void createAccount(){
    cout<<"Accout number :"<<endl;
    cin>>accountNr;
    cout<<"Balance : "<<endl;
    cin>>balance;
    cout<<"Owner  : "<<endl;
    cin>> accountHolder;
  }

  void printAccount() {
    cout<<accountHolder<< " with account number " <<accountNr<<" has a balance of "<< balance<<endl;
  }
};
