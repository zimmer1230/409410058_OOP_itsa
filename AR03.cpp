#include<iostream>
#include<string>

using namespace std;

int main(){
    int input;
    int sum=0;
    for(int i=0;i<6;i++){
        cin>>input;
        sum+=input*input*input;
    }
    cout<<sum<<endl;


    return 0;
}