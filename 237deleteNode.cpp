#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    //因为这里没有告诉你的头所以只能用下一个来做代替
    void deleteNode(ListNode* node) {
        node ->val=node ->next ->val;
        node ->next= node ->next ->next;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}