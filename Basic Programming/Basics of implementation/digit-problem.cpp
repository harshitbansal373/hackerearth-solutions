/*This time your task is simple.

Given two integers X and K, find the largest number that can be formed by changing digits at atmost K places in the number X.

Input:

First line of the input contains two integers X and K separated by a single space.

Output:

Print the largest number formed in a single line.

Constraints:
1<=x<=10^18
0<=k<=9

SAMPLE INPUT 
4483 2

SAMPLE OUTPUT 
9983
*/

//code is here

#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    int k;
    cin>>x;
    cin>>k;
    for(int i=0;i<x.length();i++){
        if(k==0)
            break;
        if(x[i]!='9'){
            x[i]='9';
            k=k-1;
        }
    }
    cout<<x;
    return 0;
}
