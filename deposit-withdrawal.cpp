#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Producer {
    public:
        float balance;
        float money,num;
        Producer(float num);
        
        float topup(){return balance = balance + money;}
        float pay(){return balance = balance - money;}
        float check(){return balance;}
        
        void showTopup(){
            cout<<"You have "<<topup()<<" baht in account\n"<<endl;
        }
        
        void showPay(){
            cout<<"You have "<<pay()<<" baht in account\n"<<endl;
        }
        
        void showBalance(){
            cout<<"You have "<<balance<<" baht in account\n"<<endl;
            
        }
};

Producer::Producer(float num){money = num;}

int main(){
    
    float num,low;
    int select;
        while(true){
            cout<<"Press 1 to Top up \nPress 2 to Pay \npress 3 to Check Money\nPress 0 to Exit"<<endl;
            cout<<"select : ";cin>>select;
        
            if(select == 1){
                cout<<"How much to top up : ";cin>>num;
                Producer ps1(num);
                ps1.showTopup();
        }
            else if(select == 2){
                cout<<"How much do you pay? : ";cin>>num;
                Producer ps1(num);
                low = ps1.check();
                if(num>low){
                    cout<<"****** Your account has too little money. ******\n---- Please top up -----\n"<<endl;
                }
                else {
                    ps1.showPay();
                }
            }  
            else if(select == 3){
                Producer ps1(num);
                ps1.showBalance();
            }
            else if(select == 0){
                break;
            }
        }
    
    return 0;
}


            
            
            
            
            
            
            
            
            
            
            
            
