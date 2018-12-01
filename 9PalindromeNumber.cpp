#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        vector<int>a;
        while(x){
            a.push_back(x%10);
            x /=10;
        }
        for(int i=0,j=a.size()-1;i<=j;i++,j--){
            if(a[i]!=a[j])
            return false;
        }
        return true;
    }
};
int main(int argc, char const *argv[])
{
    int i=1221;
    Solution s;
    bool isright=s.isPalindrome(i);
    cout<<isright<<endl;
    return 0;
}