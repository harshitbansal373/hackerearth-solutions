/*You are given a rectangle of length  and width . You are required to determine a circle that contains the maximum circumference that fits inside the rectangle. This type of circle is called a big circle. Your task is to determine the maximum number of big circles that can fit inside the rectangle. 

Input format

First line: An integer  denoting the number of test cases
First line of each test case: Integers  and 
Output format

For each test case, print the answer on a new line denoting the maximum number of big circles that can fit in the provided rectangle.

SAMPLE INPUT 
1
40 10

SAMPLE OUTPUT 
4
*/


//code is here

#include<bits/stdc++.h>>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int a,b,x;
        cin>>a>>b;
        if(a>b)
            cout<<a/b<<endl;
        else
            cout<<b/a<<endl;
    }
    return 0;
}
