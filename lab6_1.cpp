#include<iostream>
using namespace std;

int main()
{
    int number = 1;
    int odd = 0;
    int even = 0;
    while (number != 0){
        cout << "Enter an integer: ";
        cin >> number;
        
        if(number%2 == 0){
            odd=odd+1;
        }
        else{
            even=even+1;
         }
        
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = "<< odd-1;
    return 0;
}
