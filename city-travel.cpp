/*You are going from City A to City B. The distance between A and B is S km. In the most days, you can go at most x km one day. But there are n exceptions, in the t th day, you can go at most y km. You need to find out the minimum number of days required to reach city B from city A. 

Input Format
First line contains three integers, s,x,n.

The i+1 th line contains two integers .

It's guaranteed any two Ti are different. Note that Ti is not sorted.

Output Format
One integer represents the answer.

SAMPLE INPUT 
21 5 2
2 4
4 8

SAMPLE OUTPUT 
4
*/

//code is here

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int s;
    int x,n,temp=0,c=1,k=0;
    cin>>s>>x>>n;
    long long int a[n][2];
    
    for(int k=0;k<n;k++)
        cin>>a[k][0]>>a[k][1];
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j][0]>a[j+1][0]){
                temp=a[j][0];
                a[j][0]=a[j+1][0];
                a[j+1][0]=temp;
                temp=a[j][1];
                a[j][1]=a[j+1][1];
                a[j+1][1]=temp;
            }
        }
    }
    
    while(s>0){
        if(c==a[k][0]){
            s=s-a[k][1];
            k++;
        }
        else
            s=s-x;
        c++;
    }
    
    cout<<c-1;
    return 0;
}
