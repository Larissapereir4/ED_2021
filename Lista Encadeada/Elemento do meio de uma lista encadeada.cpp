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

 

ListNode* readList(){
    int n;
    cin >> n;
    ListNode * head;
    for(int i = 0; i < n; i++){
        ListNode * ptr;
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

    return head;

}


int getMiddle(ListNode *head){
    int count = 0;
    ListNode* mid = head;
 
    while (head != NULL){
        if (count & 1)
            mid = mid->next;
 
        ++count;
        head = head->next;
    }
 
    if (mid != NULL)
        printf("%d\n", mid->val);
}    



int main(){
    
    ListNode *head = readList();
    
    getMiddle(head);

    
    return 0;    
}

