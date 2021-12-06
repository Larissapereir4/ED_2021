#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class ListNode {
    public:

    int val;
    ListNode *next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};

ListNode* oddEvenList(ListNode* head) {
    if(!head || !head->next || !head->next->next) return head;
        
    ListNode *odd = head;
    ListNode *even = head->next;
    ListNode *even_start = head->next;
        
    while(odd->next && even->next){
        odd->next = even->next; 
        even->next = odd->next->next;  
        odd = odd->next;
        even = even->next;
    }
    odd->next = even_start;   
    return head; 
}


int main(){
    int n;
    ListNode * head= nullptr;
    cin >> n;
    for(int i = 0; i < n; i++){
        ListNode * ptr;
        int x;
        cin >> x;
        if( i == 0){
            head = new ListNode(x);
            ptr = head;
        }else{
            ptr->next = new ListNode(x, nullptr);
            ptr = ptr->next;
        }
    }

    head = oddEvenList(head);

    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
    
    return 0;    
}