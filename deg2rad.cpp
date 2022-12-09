#include <iostream>
#include <cmath>
using namespace std;

int d;
double deg2rad( double d ){
    return d*(M_PI/180);
}

int main(){
    cout << "degree =";
    cin >> d;
    cout << deg2rad(d);
    return 0;
}