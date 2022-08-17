// Online C++ compiler to run C++ program online
// say digit;

#include <iostream>
using namespace std;
void dg(int n, string arr[]){
    // base case
    if(n==0)
        return;
    // processing 
    int dig= n%10;
    n =   n/10;
        
    // recursive call 
    dg(n,arr);
    cout << arr[dig] << " ";
    
}

int main() {
   string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cin>> n;
   dg(n,arr);
}
