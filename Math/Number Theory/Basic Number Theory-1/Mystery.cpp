#include <iostream>

using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ans=1;
		for(int i=2;i*i<=n;i++){
			int count=0;
			while(n%i==0){
				count+=1;
				n/=i;
			}
			ans*=count+1;
		}

		if(n>1)
			ans*=2;

		cout<<ans<<endl;
	}
}
