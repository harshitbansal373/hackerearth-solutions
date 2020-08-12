#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int value;
        cin>>value;
        long long int sum=0;

        for(int i=1;i<=value/2;i++){
            if(value%i==0)
                sum+=i;
        }
        cout<<sum;
        cout<<endl;
    }
    return 0;
}
