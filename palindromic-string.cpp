/*You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 

Note
String S consists of lowercase English Alphabets only.

SAMPLE INPUT 
aba
SAMPLE OUTPUT 
YES
*/

//code is here

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n,flag=0;
    n=s.length();
    for(int i=0;i<n;i++){
        if(s[n-i-1]!=s[i]){
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
