#include <iostream>
using namespace std;

class node{
public:
	int data;
	node *next, *prev;
	node(int rData){
		data = rData;
		next = NULL;
		prev = NULL;
	}
};

void insertAtTail(node* &head, int r_data){
	node *newNode = new node(r_data);
	if(head == NULL){
		head = newNode;
		return;
	}
	else{
		node *temp = head;
		while(temp -> next != NULL)
			temp = temp -> next;
		temp -> next = newNode;
		return;
	}
};

void insertAtHead(node* &head, int r_data){
	node *newNode = new node(r_data), *temp = head;
	newNode -> next = temp;
	head = newNode;
	return;
}

void display(node *head){
	while(head -> next != NULL){
		cout << head -> data << " -> ";
		head = head -> next;
	}
	cout << head -> data << " -> NULL\n";
	return;
};


int main(){
	node *head = NULL;
	insertAtTail(head, 10);
	insertAtTail(head, 20);
	insertAtTail(head, 30);
	insertAtTail(head, 40);
	display(head);
	return 0;
}