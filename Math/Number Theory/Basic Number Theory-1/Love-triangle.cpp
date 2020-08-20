#include <iostream>

using namespace std;

long long int base9(long long int n){
	if(n<9){
		return n;
	}else{
		return (n%9+10*base9(n/9));
	}

}

int main() {
	long long int n;
	while(cin>>n)
		cout<<base9(n)<<endl;
	return 0;
}
