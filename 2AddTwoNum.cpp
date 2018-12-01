#include<iostream>
using namespace std;
/**
 * Definition for singly-linked list*/
/* 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。

您可以假设除了数字 0 之外，这两个数都不会以 0 开头。 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    /* 自己最初的版本
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *newHead=new ListNode(0);
        ListNode *q=l1,*p=l2,*m=newHead;
        int flag=0;
        while(q&&p){
            int newvalue=(q->val+p->val+flag)%10;
            flag=(q->val+p->val+flag)/10;
            m ->next=new ListNode(newvalue);
            m=m ->next;
            q=q ->next;
            p= p ->next;

        }
        while(q){
           int newvalue=(q->val+flag)%10;
            flag=(q->val+flag)/10;
            m ->next=new ListNode(newvalue);
            m=m ->next;
            q=q ->next;
            
        }
        while(p){
            int newvalue=(p->val+flag)%10;
            flag=(p->val+flag)/10;
            m ->next=new ListNode(newvalue);
            m=m ->next;
            p=p ->next;
        }
        if(flag>0){
            m->next=new ListNode(flag);
            m=m ->next;
        }
        return newHead->next;
    } */
    /* 官方的版本java实现的，改成cpp版本 */
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *newHead=new ListNode(0);
        ListNode *q=l1,*p=l2,*curr=newHead;
        int carry=0;
        while(p||q){
            int x=(p)?p->val:0;
            int y=(q)?q->val:0;
            int sum =carry+x+y;
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr= curr->next;
            if(p)p=p->next;
            if(q)q=q->next;
        }
        if(carry>0){curr ->next=new ListNode(carry);}
        return newHead->next;
    }
};
int main(int argc, char const *argv[])
{
    
    return 0;
}