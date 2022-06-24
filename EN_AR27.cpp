#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<map>
#include<iomanip>


using namespace std;

int main(){
    int n;
    cin>>n;
    map <int,int> roll;
    for(int i=1;i<=n;i++){
        roll[i]=1;
    }
    int index;
    while (cin>>index)
        roll.erase(index);
    int pos=0;
    for(auto a:roll){
        pos++;
        cout<<a.first;
        if(pos==roll.size())
            cout<<endl;
        else
            cout<<" ";
    }



    return 0;
}