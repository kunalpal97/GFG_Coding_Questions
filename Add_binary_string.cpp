#include<bits/stdc++.h>

using namespace std;

/* you should be know the binary addition rule first

below are the rule of addition binary number okay

 0 + 0 -> ans -> 0 , carry = 0;
 1 + 0 -> ans -> 1 , carry = 0;
 0 + 1 -> ans -> 1 , carry = 0;

 1 + 1 -> ans -> 0 , carry = 1;
 1 + 1 + 1 -> ans -> 1 , carry = 1;

*/

string solve(string s1 , string s2){

    int i = s1.size() - 1;
    int j = s2.size() - 1;

    int carry = 0;

    string ans = "";

    while(i>=0 || j>=0){
        int count_1s = 0;

        if(i>=0 && s1[i] == '1'){
            count_1s++;
        }
        if(j>=0 && s2[j] == '1'){
            count_1s++;
        }

        if(count_1s + carry == 0){
            ans+='0';
            carry = 0;
        }
        else if(count_1s + carry == 1){
            ans += '1';
            carry = 0;
        }

        else if(count_1s + carry == 2){
            ans += '0';
            carry = 1;

        }
        else if(count_1s + carry == 3){
            ans += '1';
            carry = 1;
        }
        i--;
        j--;
    }

    if(carry == 1){
        ans += to_string(carry);
    }

    cout <<"dekh lo " << ans << endl;

    reverse(ans.begin() , ans.end());

    cout << "ye reverse ke baad " << ans <<endl;
    int k = 0;
    while(ans[k] == '0'){
        ans.erase(0,1);

    }

    return ans;

}

int main(){

    string s1;
    cout << "Enter the First Binary String : " <<endl;
    cin >> s1;

    string s2;
    cout << "Enter the Second Binary String : "  << endl;
    cin >> s2;


    // eg string will be -> 1 1 1 0 and 0 0 1 0 
    // addition will be this -> 1  0  0  0  0

    string ans = solve(s1 , s2);

    cout << "Addition of " << s1 <<" and " << s2 << " is " << ans << endl;


    


}