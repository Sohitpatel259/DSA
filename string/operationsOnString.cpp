// Addition of two strings
#include <iostream>
using namespace std;
int main () {
    string s = "Hasrh";
    string s1 = "patel";
    string s2;
    s2 = s+s1;
    cout<<s2; 
return 0;
}


// find Substring
#include <iostream>
using namespace std;
int main () {
    string s1 = "leetcode";
    string s2 = "leet";
    if(s1.length()<s2.length()){
        return -1;
    }
    for(int i=0;i<s1.length();i++){
        if (s1.substr(i,s2.length())==s2){
            return i;
        }
        
        
    }
return -1;
}