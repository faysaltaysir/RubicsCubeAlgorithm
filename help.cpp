#include<iostream>
using namespace std;

int main(){
/*
U(0,0) U(0,1) U(0,2) U(1,0) U(1,1) U(1,2) U(2,0) U(2,1) U(2,2) 
F(0,0) F(0,1) F(0,2) F(1,0) F(1,1) F(1,2) F(2,0) F(2,1) F(2,2) 
D(0,0) D(0,1) D(0,2) D(1,0) D(1,1) D(1,2) D(2,0) D(2,1) D(2,2) 
B(0,0) B(0,1) B(0,2) B(1,0) B(1,1) B(1,2) B(2,0) B(2,1) B(2,2) 
L(0,0) L(0,1) L(0,2) L(1,0) L(1,1) L(1,2) L(2,0) L(2,1) L(2,2) 
R(0,0) R(0,1) R(0,2) R(1,0) R(1,1) R(1,2) R(2,0) R(2,1) R(2,2)
*/
    string s = "UFDBLR"; 
    for(int k=0;k<6;k++){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<s[k]<<"("<<i<<","<<j<<") ";
                // cout<<s[k]<<" ";
            }
        }
        cout<<endl;
    }
}