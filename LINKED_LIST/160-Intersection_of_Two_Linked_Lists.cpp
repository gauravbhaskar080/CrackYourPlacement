#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {};
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *p1=headA,*p2=headB;
    while(p1!=p2){
        if(p1==NULL) p1=headB;
        else p1=p1->next;
        if(p2==NULL) p2=headA;
        else p2=p2->next;
    }
    return p1;
}

int main(){
    ListNode *headA=new ListNode(4);
    headA->next=new ListNode(1);
    headA->next->next=new ListNode(8);
    headA->next->next->next=new ListNode(4);
    headA->next->next->next->next=new ListNode(5);
    
    ListNode *headB=new ListNode(5);
    headB->next=new ListNode(6);
    headB->next->next=new ListNode(1);
    headB->next->next->next=headA->next->next;
    
    ListNode *intersection=getIntersectionNode(headA,headB);
    if(intersection) cout<<intersection->val<<endl;
    else cout<<"No intersection found"<<endl;
    return 0;
}