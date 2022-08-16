/*

	Time complexity: O(3^N * 4^M) 
	Space complexity: O(3^N * 4^M)
	
	where N is the number of digits in the string S that maps to 3 letters and M is the number of digits in the string S that maps to 4 letters.
 

*/

void combinationsHelper(string digits, string digToStr[], int j, string temp, vector<string>&ans){
        
    // If we have reached the end of input string, push current string in ans
    if(j == digits.length()){

        ans.push_back(temp);
        return;
    }
    
    // Converting char to int
    int val = digits[j]-'0';
    
    // For all the characters corresponding to current digit, find all possible combinations
    for(int i=0;i<digToStr[val].size();i++){
    	
        temp.push_back(digToStr[val][i]);
        combinationsHelper(digits,digToStr,j+1,temp,ans);
        // Backtracking step, popping the previous consideration for current digit to find combinations corresponding to other characters of the current digit
        temp.pop_back();   
    }
}
    
vector<string> combinations(string s){
	
	// Mapping of all the digits to their respective char string
	string digToStr[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	
	// Size of input string
    int n =  s.length();
    
    // Temporary string
    string temp;
    
    // For storing all the possible combinations
    vector<string>ans;
    
    // If the input string is empty return ans
    if(n == 0){
    	return ans;
    }
    // Backtracking function
    combinationsHelper(s,digToStr,0,temp,ans);
    
    return ans;
}

