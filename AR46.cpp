#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include<iomanip>
using namespace std;

int main(){
    string input;
    vector <double> arr;
    getline(cin,input);
    int pos=0;
    while (pos!=string::npos)
    {
        arr.push_back( stof(input) );
        pos=input.find(" ");
        input.erase(0,pos+1);
    }
        
    
    double sum=0;
    for(auto a:arr){
        sum+=a*a;
    }
    cout<<fixed<<setprecision(6)<<sum<<endl;

    return 0;
}
