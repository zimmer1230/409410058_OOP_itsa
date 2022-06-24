// C++ program to convert a decimal
// number to binary number

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function to convert decimal to binary
void decToBinary(int n)
{
    vector<int> output;
	// array to store binary number
	int binaryNum[32]={0};

	// counter for binary array
	int i = 0;
    int orig=n;
    if(n<0) n=n*-1;
	while (n > 0) {

		// storing remainder in binary array
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
    int first_1=0;
	// printing binary array in reverse order
    if(orig>0){
	    for (int j = 7; j >= 0; j--)
		    cout << binaryNum[j];
    }
    else{
        for(int j=0;j<8;j++){
            if(binaryNum[j]==1){
                first_1=1;
                output.push_back(binaryNum[j]);
            }
            else{
                if(first_1==1){
                    output.push_back(!binaryNum[j]);
                }
                else{
                    output.push_back(binaryNum[j]);
                }
            }
        }
        reverse(output.begin(),output.end());
        for(auto a:output)
            cout<<a;

    }
    cout<<endl;
}

// Driver program to test above function
int main()
{
	int n;
    while (cin>>n)
    {
	decToBinary(n); 
    }
    
	return 0;
}
