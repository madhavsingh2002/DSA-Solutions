#include <bits/stdc++.h>

void helper(string &str, vector<string>& ans, int index) {
    
    if(index >= str.length()) {
        ans.push_back(str);
        return;
    }
    
    for(int i = index; i < str.length(); i++) {
        
        swap(str[i], str[index]);
        helper(str, ans, index + 1);
        swap(str[i], str[index]);
        
    }
    
}

vector<string> generatePermutations(string &str)
{
    vector<string> ans;
    int index = 0;
    
    helper(str, ans, index);
    sort(ans.begin(), ans.end());
    return ans;
}
