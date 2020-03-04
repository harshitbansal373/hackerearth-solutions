/*You have c number of chocolates that you want to distribute between your n students. The intelligence level of the students is not the same, therefore, you decide to distribute the chocolates in such a way that a smarter student gets strictly more chocolates than the ones who are less smarter.

The difference between the chocolates received by any two adjacent students must be exactly one. Formally, if the least intelligent student gets k chocolates, then others must get k+1,k+2,k+3,... At the same time, your task is to minimize the number of chocolates that are left (if any) after distributing those among students. Determine the minimum number of chocolates left.

Note

It is mandatory to give chocolates to everyone if it is possible to do so. In other words, it is not possible that some students are getting chocolates and others are not.
Input format

First line: T denoting the number of test cases T
For each test case (next T lines):
First line: Two space-separated integers  and 
Output format 

For each test case, print the minimum number of chocolates left in a new line.

SAMPLE INPUT 
2
20 3
13 5

SAMPLE OUTPUT 
2
13
*/

//code is here

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        long long int c,n,sum=0;
        cin>>c>>n;
        sum=(n*(n+1))/2;
        if(c<sum)
            cout<<c<<endl;
        else
            cout<<(c-sum)%n<<endl;
    }
    return 0;
}
