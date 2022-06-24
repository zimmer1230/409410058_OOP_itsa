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
    while (cin>>down>>h)
    {
        float area=(down/2)*h;
        cout<<fixed<<setprecision(1)<<area<<endl;
    }
    



    return 0;
}