#include <iostream>
using namespace std;
int fact(int n){
  //Base case;
  if(n==0)
    return 1;
  int small = fact(n-1);
  int big = n * small;
  return big;
  
  
}
// hello
int main(){
  int n;
  cin >>n;
  cout << fact(n);
}
