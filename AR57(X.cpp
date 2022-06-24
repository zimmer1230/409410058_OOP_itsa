#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--)
    {
        map<char,bool> table;
        string input;
        while (input.size()==0)
        {
        getline(cin,input);
        }
        
        for(auto a:input){
            table[a]=1;
        }
        cout<<input.size()<<" "<<table.size()<<endl;
        if(n!=0)
            cout<<endl;
    }

    return 0;
}