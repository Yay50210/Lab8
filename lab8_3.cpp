#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    int A, H, B;
    string C;
    cout << "Enter your age: ";
    cin >> A;

    if (A <= 25){
        cout << "Enter your height: ";
        cin >> H;
        if(H<100){
            C = "Chopper";
        }else if(H<180){
            C = "Usopp";
        }else {
            cout << "Enter your bounty: ";
            cin >> B;
            if(B<=1100000000){
                C = "Sanji";
            
            }else{
                C = "Zoro";
            }
        
        }
    }else if(A<=60){
       cout << "Enter your bounty: ";
        cin >> B;
        if(B<=500000000)
        C = "Franky";
        else{
            C = "Jinbe";
        }

    }else
    C = "Brook";


    cout << "Your character = " << C;
}
