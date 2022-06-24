#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<map>
#include<iomanip>


using namespace std;

int main(){
    int input;
    while (cin>>input)
    {
        int num=1;
        if(input>30)
            cout<<"Value of more than 31"<<endl;
        else{
                num=num<<input;
                cout<<num<<endl;
        }
        /* code */
    }
    



    return 0;
}