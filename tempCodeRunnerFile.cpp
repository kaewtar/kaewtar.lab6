#include <iostream>
#include <cmath>
using namespace std;


int r;
double rad2deg( double r){
    return (r*180)/M_PI;
}

int main(){
    cout << "radian =";
    cin >> r;
    cout << "degree = " << rad2deg(r);
    return 0;
}