/*As a beginner to the programming, Mishki came to Hackerearth platform, to become a better programmer. She solved some problems and felt very confident. Later being a fan of Hackerearth, she gave a problem to her friends to solve. They will be given a string containing only lower case characters (a-z), and they need to find that by using the characters of the given string, how many times they can print "hackerearth"(without quotes). As they are new to programming world, please help them.

Input:
The first line will consists of one integer N denoting the length of string.
Next line will contain the string str containing only lower case characters.

Output:
Print one integer, denoting the number of times her friends can print "hackerearth" (without quotes).

Constraints:
1<=N<=10^6
Each character of string str will be in range [a,z]

SAMPLE INPUT 
13
aahkcreeatrha

SAMPLE OUTPUT 
1
*/

//code is here

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s,x="hackerearth";
    cin>>n>>s;
    int a[7]={0};
    for(int i=0;i<n;i++){
        if(s[i]=='h')
            a[0]++;
    }
    a[0]=a[0]/2;
        
    for(int i=0;i<n;i++){
        if(s[i]=='a')
            a[1]++;
    }
    a[1]=a[1]/2;
    
    for(int i=0;i<n;i++){
        if(s[i]=='c')
            a[2]++;
    }
    
    for(int i=0;i<n;i++){
        if(s[i]=='k')
            a[3]++;
    }
    
    for(int i=0;i<n;i++){
        if(s[i]=='e')
            a[4]++;
    }
    a[4]=a[4]/2;
    
    for(int i=0;i<n;i++){
        if(s[i]=='r')
            a[5]++;
    }
    a[5]=a[5]/2;
    
    for(int i=0;i<n;i++){
        if(s[i]=='t')
            a[6]++;
    }
    
    int min=a[0];
    for(int i=0;i<7;i++){
        if(min>a[i])
            min=a[i];
    }
    cout<<min;
    return 0;
}
