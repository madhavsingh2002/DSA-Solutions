#include <iostream>
using namespace std;
int fb(int n){
    if(n==0){
        return 0;

    }
    if(n==1)
        return 1;
    return fb(n-1)+fb(n-2);
}
int main() {
    int cn, t;
    cin>> t;
    for(cn=1;cn<=t;cn++)
        cout << fb(cn) << ",";
        
    return 0;
}
