#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    //非递归版本,题目没读懂就拿别人的了
    //https://blog.csdn.net/qq_26658823/article/details/74783648 
    string countAndSay(int n) {
        string tmp = "1";
        string ans;
        int cnt = 1;
        for(int i = 2;i <= n;i++){
            for(int j = 0;j < tmp.length();j++){
                if(tmp[j] == tmp[j + 1]){
                    cnt++;
                }
                else {
                    ans += cnt + '0';
                    ans += tmp[j];
                    cnt = 1;
                }
            }
            tmp = ans;
            ans = "";
        }
        return tmp;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}