#include<bits/stdc++.h>

using namespace std;

class Node{
    public:

	int data;
	Node* next;
	Node* prev;

	Node(int val, Node* prev,Node* next){
		data=val;
		next=next;
		prev= prev;
	}

	Node(int val){
		data=val;
		next=nullptr;
		prev=nullptr;
	}
};



void insert(int data,Node* head){

	Node* newnode = new Node(data);
    Node* temp=head;

    while(temp->next!=NULL){
    	temp=temp->next;
    }

    temp->next=newnode;
    newnode->prev=temp;
}


void printkarna(Node* head){

	while(head!=0){
		cout<<head->data<<" ";
		head=head->next;
	}
}

Node* deletevalue(Node* head , int value){

 Node* temp=head;
	while(head->data!=value && head->next!=0){
		head=head->next;
	}
    
    if(head->prev==0 && head->data==value){
    	head->next->prev=nullptr;
    	return temp->next;
    }

    else if(head->next==0 && head->data==value){
    	head->prev->next=nullptr;
	   
    }
    else if(head->data==value){

	head->prev->next=head->next;
	head->next->prev=head->prev;
    }
   
return temp;
}


int main(){

    
    vector<int> arr = {2,5,7,8,9,4};
    
     Node* head= new Node(arr[0]);
    
    for (int i = 1; i < arr.size(); ++i)
    {
    	insert(arr[i],head);
    }

     head=deletevalue(head,5);
   
     printkarna(head);


	return 0;
}
