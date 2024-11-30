#include<iostream>
#include<bits/stdc++.h>

// In an Anagram you are given two strings 
// in that both the string contain the same character and frequency! so then they called as anagram

// TC -> (nlong(n))  SC - > O(1)

using namespace std;


bool findAns(string s1 , string s2){

    if(s1.size()!=s2.size()){
        return false;
    }

    vector<int> freq(26 , 0);
    // vector<int> freq2(26 , 0);
    // s1 -> freq mai.. dalo 
    // s2 ko freq2 mai... then check karo if both freq are equal then return on that basis 
    // ans should be unique

    for(int i=0; i<s1.size(); i++){
        freq[s1[i]-'a']++;
        freq[s2[i]-'a']--;
    }

    for(auto i: freq){

        if(i!=0){
            return false;
        }
    }

    return true;

}

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

    bool ans = findAns(str1 , str2);

    // bool ans = solve(str1 , str2);

    if(ans){
        cout << endl <<"Both the string have same characters with same frequency. So, they are anagrams. "<< endl;
    }
    else{
        cout <<"Characters in both the strings are not same, so they are not anagrams." << endl;
    }

    return 0;



}