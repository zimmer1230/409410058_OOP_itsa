#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<map>
#include<iomanip>


using namespace std;

int main(){
    string password;
    cin>>password;
    for(int i=0;i<password.size();i++){
        cout<<(char) (password.at(i)-3);
    }
    cout<<endl;



    return 0;
}