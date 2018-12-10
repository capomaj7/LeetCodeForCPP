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
     ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode *p=head->next,*pre=head;
        while(p){
            if(p ->val==pre ->val){
                pre ->next= p ->next;
            }else{
                pre=pre ->next;
            }
            p=p ->next;
        }
        return head;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}