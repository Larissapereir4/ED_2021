#include <iostream>
#include <vector>
#include <map>

using namespace std;

class ListNode {
    public:

    int val;
    ListNode *next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};


ListNode* deleteDuplicates(ListNode* head) {
    if (!head) return head;
   
    ListNode * iter = head;
    while (iter->next) {
        if (iter->val == iter->next->val) {
            ListNode * temp = iter->next;
            iter->next = iter->next->next;
			// Deixando espaço livre na memória
            delete temp;
        } else {
            iter = iter->next;
        }
    }
    return head;
}


int main(){
    int n;
    ListNode *head= nullptr;
    cin >> n;
    for(int i = 0; i < n; i++){
        ListNode *ptr;
        int x;
        cin >> x;
        if(i == 0){
            head = new ListNode(x);
            ptr = head;
        }else{
            ptr->next = new ListNode(x, nullptr);
            ptr = ptr->next;
        }
    }

    deleteDuplicates(head);

    for(ListNode *ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
    
    return 0;    
}

