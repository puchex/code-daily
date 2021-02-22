#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
    int longest_string_index  = 0 ;
    int longest_string_length = 0;
    
    vector<int> d_index(d.size(),0),d_length(d.size(),0);
    
        for(int i=0;i<s.length();i++){
            for(int j=0;j<d.size();j++){
                if(d[j][d_index[j]]==s[i]){
                    d_index[j]++;
                    d_length[j]++;
                }
            }
        }
    for(int i=0;i<d.size();i++){
        if(d_length[i]> longest_string_length){
            longest_string_length = d_length[i];
            longest_string_index = i;
        }
        else if(d_length[i] == longest_string_length && d[i]<d[longest_string_index]){
            longest_string_index = i;
        }
    }
    if(longest_string_length){
        return d[longest_string_index];
    }
    else{
    return "";}
    }
};

int main(){
	Solution sol = Solution();
	cout<<"Enter string  : ";
	string s ; cin>>s;
	cout<<"Enter dict length : ";
	int n; cin>>n;
	cout<<"Enter dict : ";
	vector<string> d(n);
	for(int i=0;i<n;i++){
		cin>>d[i];
	}
	cout<<"Longest word is "<<sol.findLongestWord(s,d)<<endl;	

}
