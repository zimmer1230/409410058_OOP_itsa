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
    while (cin>>n)
    {
        long long int sum=1;
        while (n>0)
        {
            sum*=n--;
        }
        cout<<sum<<endl;
        
        
    }
    



    return 0;
}