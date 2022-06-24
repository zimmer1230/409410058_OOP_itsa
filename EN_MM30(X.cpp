#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<map>
#include<iomanip>


using namespace std;

int main(){
    long long m,n;
    while (cin>>m>>n)
    {
        if(m==0&&n==0){
            break;
        }
        long long ans=1;
        m%=10;
        for(int i=0;i<n;i++){
            ans=(ans*m)%10;
        }
        cout<<ans<<endl;
    }
    



    return 0;
}