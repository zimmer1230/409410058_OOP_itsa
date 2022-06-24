#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<map>
#include<iomanip>


using namespace std;

int main(){
    float up,down,h;
    while (cin>>up>>down>>h)
    {
        float area=((up+down)/2)*h;
        cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<area<<endl;
    }
    



    return 0;
}