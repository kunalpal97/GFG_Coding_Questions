#include<iostream>
#include<bits/stdc++.h>

// In an Anagram you are given two strings 
// in that both the string contain the same character and frequency! so then they called as anagram

// TC -> (nlong(n))  SC - > O(1)

using namespace std;

bool solve(string s1 , string s2){

    int n1 = s1.size();
    int n2 = s2.size();

    sort(s1.begin() , s1.end());
    sort(s2.begin() , s2.end());

    if(n2>n1 || n1>n2){
        return false;
    }

    for(int i=0; i<n1; i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }
    return true;
}


int main(){

    string str1;
    cout <<"Enter the First String : "<<endl;
    cin >> str1;

    string str2;
    cout <<"Enter the Second String : " <<endl;
    cin >> str2;

    bool ans = solve(str1 , str2);

    if(ans){
        cout << endl <<"It is Anagram"<<endl;
    }
    else{
        cout <<"It is not an Anagram" <<endl;
    }



}