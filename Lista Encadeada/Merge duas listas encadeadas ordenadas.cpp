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


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* head = new ListNode(0);
    ListNode* tail = head;
    while (l1 != NULL && l2 != NULL)
        if (l1->val <= l2->val)
        {
            tail->next = l1;
            l1 = l1->next;
            tail = tail->next;
            tail->next = NULL;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
            tail = tail->next;
            tail->next = NULL;            
        }

    if (l1 != NULL) tail->next = l1;
    if (l2 != NULL) tail->next = l2;

    tail = head;
    head = head->next;
    delete tail;

    return head;    
        
}

ListNode* readList(){
    int n;
    cin >> n;
    ListNode * head = nullptr;
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

    return head;

}


int main(){
    
    ListNode * list1 = readList();
    ListNode * list2 = readList();
    ListNode * head = mergeTwoLists(list1, list2);

    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
    
    return 0;    
}

