#include<iostream>
using namespace std;

//Linked List

class node{
    public:
    
    int data;
    node* next;
    
    node(int val){
        data =val;
        next =NULL;
    }
};

void insertTail(node* &head,int val){
    
    node* n=new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp = head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    temp->next=n;
}

void insertHead(node* &head,int val){
    
    node* n=new node(val);
    n->next=head;
    head=n;
    
}

void Display(node* head){
    
    node* temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

void DeleteatHead(node* &head){
    node* todelete=head;
    
    head=head->next;
    
    delete todelete;
}

void Delete(node* head,int val){
    
    if(head==NULL){
        return;
    }
    
    if(head->next==NULL){
        DeleteatHead(head);
    }
    
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    
    node* todelete = temp->next;
    
    temp->next=temp->next->next;
    
    delete todelete;
    
}

bool search(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

node* reverse(node* &head){
    
    node* prevptr =NULL;
    node* currptr=head;
    node* nextptr;
    
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        
        prevptr=currptr;
        currptr=nextptr;
    }
    
    return prevptr;
    
}


int main(){
    
    node* head=NULL;
    
    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,4);
    insertHead(head,1);
    DeleteatHead(head);
    Display(head);
    cout<<search(head,7)<<endl;;
    Display(reverse(head));
    
    
}
