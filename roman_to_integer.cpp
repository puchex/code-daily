#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int v,prev_val=0;
        for(int i=s.length()-1;i>=0;i--){
            int v;
            switch(s[i]){
                case 'I':
                  v = 1; break;
                case 'V':
                    v = 5; break;
                case 'X':
                    v = 10;break;
                case 'L':
                    v = 50; break;
                case 'C':
                    v = 100; break;
                case 'D':
                    v = 500; break;
                case 'M':
                    v = 1000; break;
            }
            if(v < prev_val){
                ans -= v;
            }
            else{
                ans += v;
            }
            prev_val = v;
        }
        return ans;
    }
};

int main(){
	Solution s = Solution();
	string inp;
	cin>>inp;
	cout<<s.romanToInt(inp)<<endl;
}
