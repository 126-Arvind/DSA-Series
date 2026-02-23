#include <iostream>
using namespace std;
int main(){
    string s = "Arvind";
    int len = s.size();
    s[len-1] = 'z';
    cout << s[len-1];
    //cout << s[3];
    return 0;
}