#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
//进阶的思想是使用2个指针，第一个指针移动n个位置先，
//第二个和第一个在一起动
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int countNode=0;
        ListNode *p=head;
        while(p){
            countNode++;
            p=p->next;
        }
        p=head;
        if(countNode==n){
            ListNode *s=head;
            head=head ->next;
            delete s;
            return head;
        }else{
                //p要移动的位置
            for(int i=0;i<countNode-n-1;i++){
                p=p->next;
            }
        }
        
        ListNode *s=p ->next;
        p ->next=s ->next;
        delete s;
        return head;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}