#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
//
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        else{
            int rightval =maxDepth(root->left);
            int leftval =maxDepth(root->right);
            return rightval>leftval?rightval+1:leftval+1;
        }
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}