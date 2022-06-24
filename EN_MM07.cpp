#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<map>
#include<iomanip>


using namespace std;

int main(){
    string sub, str;
    while (cin>>sub>>str)
    {
        int num=0;
        int pos=0;
        int str_size=str.size();
        int sub_size=sub.size();
        while (pos<str_size)
        {
            string target=str.substr(pos,sub_size);
            //cout<<target<<endl;
            if(target==sub)
                num++;
            pos++;
        }
        cout<<num<<endl;

        
    }
    




    return 0;
}