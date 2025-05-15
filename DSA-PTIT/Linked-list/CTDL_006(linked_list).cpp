#include <bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node *next; 
};

typedef Node *node;

node make_node(int x){
    node tmp = new Node;
    tmp->next = NULL;
    tmp->val = x;
    return tmp;
}


bool find(node X, int x){
    if(X == NULL) return true;
    while(X != NULL){
        if(X->val == x) return false;
        X = X->next;
    }
    return true;
}

void add_back(node &X, int x){
    if(X == NULL){
        X = make_node(x);
    }
    else{
        node tmp = X;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = make_node(x);
    }
}

void solution(){
    int n;
    cin>>n;
    node Linked_list = NULL;
    for(int i=1; i<=n; i++){
        int tmp;
        cin>>tmp;
        if(find(Linked_list, tmp)) add_back(Linked_list, tmp);
    }    
    
    while(Linked_list != NULL){
        cout<<Linked_list->val<<" ";
        Linked_list = Linked_list->next;
    }
    delete Linked_list;
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
        solution();
    // }
    return 0;
}