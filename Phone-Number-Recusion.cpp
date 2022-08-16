/*
    Backtracking approach
The idea is to find all possible combinations of letters using backtracking. 
Backtracking is an algorithm to find all possible solutions by exploring all potential candidates. If the current solution does not turn out to be a solution or is not possibly the last solution, this algorithm backtracks and makes some changes on the previous steps.

 

Algorithm: 

Let’s say we have a backtrack function, combinationsHelper(combination, nextDigits) which takes the ongoing letter combination and next digits (which we need to map to letters) as its arguments.
Base Case: If there are no more digits to check, that means that the current                         combination is done.
If there are still digits to check :
a. Iterate over the letters mapping the next available digit. 

b. Append the current letter to the current combination and proceed to check the next digits.

Time Complexity
O(3^N * 4^M), where N is the number of digits in the string S that maps to 3 letters and M is the number of digits in the string S that maps to 4 letters.

 

Numbers {2, 3, 4, 5, 6, 8} map to 3 letters and numbers {7, 9} map to 4 letters. Generating combinations of a string of length L takes K^L time, where K is the number of letters that each digit maps to. Thus, the final time complexity will be O(3^N * 4^M).

Space Complexity
O(3^N * 4^M), where N is the number of digits in the string S that maps to 3 letters and M is the number of digits in the string S that maps to 4 letters.

Since we are storing all the possible combinations, thus the final space complexity is O(3^N * 4^M).


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










    


