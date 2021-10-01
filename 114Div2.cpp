//                                                 B. Combinatorics Homework
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given four integer values a, b, c and m.

// Check if there exists a string that contains:

// a letters 'A';
// b letters 'B';
// c letters 'C';
// no other letters;
// exactly m pairs of adjacent equal letters (exactly m such positions i that the i-th letter is equal to the (i+1)-th one).



#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    int a,b,c,m;
    while(T--){
        cin>>a>>b>>c>>m;
        int count =0;
       if((a/2+b/2+c/2)>=m && a<=m+3 && b<=m+3 && c<=m+3){
           cout<<"YES"<<endl;
       }else{
           cout<<"no"<<endl;
       }

    }
    return 0;
}