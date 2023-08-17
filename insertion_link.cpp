#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int k){
        data=k;
        next=NULL;
    }
    // void display(){
    //     node* head;
    //     node* temp;
    //     temp=head;
    //     while(temp!=NULL){
    //         cout<<temp->data<<endl;
    //         temp=temp->next;
    //     }
    // }
    
   
};
int main(){
    node* head;
    node* temp;
    //node abc;
    int k=5;
    while(k--){
        int num;cin>>num;
        if(head==NULL){
            temp=new node(num);
            //temp=head;
            head=temp;
        }
        else{
            node* t=new node(num);
            temp->next=t;
            temp=temp->next;
        }
    }
    //abc.display();
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    cout<<"enter the data to insert at the first";
    int ent;
    cin>>ent;
    node *enter=new node(ent);
    // enter->next=head;
    temp=head;
    while(temp!=NULL){
    temp=temp->next;
    if(temp==NULL){
        temp->next=enter;
        enter=NULL;
    }
    }
    // head=enter;
    temp=head;
     while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    } 


    
}