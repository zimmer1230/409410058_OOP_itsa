#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<map>
#include<iomanip>


using namespace std;

int main(){
    double up,down,h;
    while (cin>>down)
    {
        double area=down*down;
        area=floor((10*area)+0.5)/10;
        cout<<fixed<<setprecision(1)<<area<<endl;
    }
    



    return 0;
}