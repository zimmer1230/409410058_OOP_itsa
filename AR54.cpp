#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin>>n;
    map <char,int> table;
    while (n--)
    {
        char input;
        cin>>input;
        table[input]+=1;
    }
    for(auto a:table){
        cout<<a.first<<" "<<a.second<<endl;
    }
    



    return 0;
}