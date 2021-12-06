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

ListNode* removeElements(ListNode* head, int val) {
    ListNode *atual, *anterior;

    atual = head;

    if (head == NULL) return NULL;    

    anterior = NULL;
    while (atual){        
        if (atual->val == val){

            if (anterior == NULL){
                //Remove um elemento do início da lista                     
                head = head->next; // Atualiza o início da lista
                free(atual);
                atual = head;
                continue;                
            } else {
                //Remove um elemento do meio ou final da lista 
                anterior->next = atual->next;
                free(atual);                    
                atual = anterior; // continua a partir do elemento anterior
                continue;
            }
        }
        
        anterior = atual;
        atual = atual->next;
    }
   
    return head;
    
}

ListNode* readList(){
    int n;
    cin >> n;
    ListNode * head = nullptr;
    for(int i = 0; i <= n; i++){
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

int main(){
    ListNode *lista = readList();
    ListNode * head = removeElements(lista, lista->val);

    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;

    return 0;    
}

