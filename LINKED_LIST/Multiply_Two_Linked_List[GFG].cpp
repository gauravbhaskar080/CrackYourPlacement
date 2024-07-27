#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

long long multiplyTwoLists(Node *first, Node *second){
    // code here
    long long int num1 = 0, num2 = 0;
    long long int mod = 1000000007;
    Node *p1 = first, *p2 = second;
    while (p1 != NULL){
        num1 = (num1 * 10 + p1->data) % mod;
        p1 = p1->next;
    }
    while (p2 != NULL){
        num2 = (num2 * 10 + p2->data) % mod;
        p2 = p2->next;
    }
    return (num1 * num2) % mod;
}

int main(){
    Node *first = new Node(10);
    first->next = new Node(0);
    first->next->next = new Node(5);
    
    Node *second = new Node(1);
    second->next = new Node(0);
    cout << multiplyTwoLists(first, second) << endl; 
    return 0;
}