// This file contains the code for the implementation of linked lists single and doublly one by one
#include<iostream>
using namespace std;

class Node{			//base class for the linked list
	public:
	int val;
	Node* next;
};

Node* insert(Node* head,int val)
{
	Node *new_node = new Node;
	Node *tmp=head; 
	new_node->val=val;
	new_node->next=NULL;
	if(head==NULL)
	{
		head = new_node;
	}		
	
	else 
	{
	while(tmp->next!=NULL)
		tmp=tmp->next;
	tmp->next=new_node;
	}
return head;
}


void print_ll(Node *head)
{
	while(head!=NULL)
	{
	cout<<head->val;
	head->next ?  cout<<"->" : cout<<"";
		
	head=head->next;
	}
	cout<<endl;
}



int main(int argc, char* argv[])
{
Node* head=NULL;
int i=0,option=0;
int val=2;
while(val!=0)
{
	cout<<"The options typed are"<< argv[0]<<endl;
	cout<<"In this code we see about the implementation of linked lists in c++ using pointers."<<endl;
	cout<<"1.Insert into ll\n2.printll"<<endl;
	cin>>option;
    
    if(option==1)
	{
	cout<<"Enter the value to be inserted/n"<<endl;
	cin>>val;
	head=insert(head,val);
	print_ll(head);
	}
	if(option==2)
	{
	cout<<"printing the linkedlist\n"<<endl;
	print_ll(head);
	}
}
return 0;
}
