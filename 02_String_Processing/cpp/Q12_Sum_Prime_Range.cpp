// Find the sum of prime numbers in the given range

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(NULL);
    
    int n;
    cout<<"Enter the number to find the sum of prime numbers up to: ";
    cin>>n;
    int sum = 0;
    for(int i = 2;i<n;i++){
        bool isPrime = false;
        for(int j = 2;j<i;j++){
            if(i%j==0){
                isPrime = true;
                break;
            }
        }
        if(isPrime){
            sum+=i;
        }
    }
    cout<<"The sum of prime numbers up to "<<n<<" is: "<<sum<<endl;
    return 0;
}