#include<bits/stdc++.h>
using namespace std ;

struct Node{
    int val;
    Node* next;  
   
    Node (int data){
        val = data;
        next =NULL;
    }
};

Node* addAlternate(Node* head){
   if(head==NULL || head->next == NULL ||head->next->next==NULL){
       return head;
   }

   vector<int> v;
   
   Node* temp = head;
   while(temp!=NULL){
    v.push_back(temp->val);
    temp = temp ->next;
   }
   
   temp = head;
   temp = temp->next->next;
   int i=0;

   while(temp!=NULL){
   temp->val = temp->val + v[i];
   i++;
   temp = temp->next;
   }

   return head;

}
void insertAtEnd(Node* &head, int data ){
   
   Node* a = new Node(data);
   
   if(head == NULL){
     head = a;
   }
   else{
     Node* temp = head;
     while(temp->next != NULL){
       temp = temp->next;
     }

     temp->next = a ;
   }

//    return head;
}

void printList(Node* head){
    if(head == NULL)
    return ;

    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

}
int main(){
    int n;
    cin>>n;
    Node* head= NULL;
    int data;
    for(int i=0;i<n;i++){
        cin>>data;
        insertAtEnd(head, data);
    }

    head= addAlternate(head);
   printList(head);

    
}