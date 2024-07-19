#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {};
};

bool hasCycle(ListNode *head){
    if (head == NULL) return 0;
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

int main(){
    ListNode *head = new ListNode(3);
    ListNode *two = new ListNode(2);
    ListNode *zero = new ListNode(0);
    ListNode *neg_four = new ListNode(-4);

    head->next = two;
    two->next = zero;
    zero->next = neg_four;
    neg_four->next = head->next;
    cout << (hasCycle(head)? "Yes" : "No") << endl;
    
    return 0;
}