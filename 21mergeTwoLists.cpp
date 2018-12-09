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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode(0);
        ListNode *p=l1,*q=l2,*m=head;
        while(p&&q){
            if(p ->val<q ->val){
                m ->next=new ListNode(p ->val);
                p = p ->next;
                
            }else{
                 m ->next=new ListNode(q ->val);
                 q= q ->next;
            }
            m = m ->next;
        }
        if(p){
            m ->next=p;
        }
        if(q){
            m ->next=q;
        }
        return head ->next;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}