#include <iostream>
#include <stack>
using namespace std;

class StackMin{
    private:
        int min = -1;  
        static const int demoVal = 9999; 
        stack<int> st;
    public:
        void push(int x){
            if(st.empty() || x < min){
                min = x;
            }
        
            st.push(x * demoVal + min); 
        }

        void pop(){
            if ( st.empty() ){
                cout << "Pilha vazia" << endl ;
            }
      
            int val = st.top();
            st.pop();
        
            if (!st.empty()) min = st.top() % demoVal;
            else min = -1;
        }

        void getMin(){
            cout << min << endl; 
        }

};


int main(){
    int n;
    StackMin s;
    int arr[n];

    cin >> n;

    for(int i = 0; i < n; i++){
        int op;
        cin >> op;
        
        if(op==1){
            cin >> arr[i];
            s.push(arr[i]);
        }else if(op==2){
            s.pop();
        }else{
            s.getMin();
        }

    }
}