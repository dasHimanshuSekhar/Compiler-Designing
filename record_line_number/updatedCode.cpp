   1 #include <iostream>
   2 using namespace std;
   3 //node class
   4 class node{
   5 public:
   6 int data;
   7 node *next, *prev;
   8 node(int rData){
   9 data = rData;
  10 next = NULL;
  11 prev = NULL;
  12 }
  13 };
  14 //insert at the tail of linked list
  15 void insertAtTail(node* &head, int r_data){
  16 node *newNode = new node(r_data);
  17 if(head == NULL){
  18 head = newNode;
  19 return;
  20 }
  21 else{
  22 node *temp = head;
  23 while(temp -> next != NULL)
  24 temp = temp -> next;
  25 temp -> next = newNode;
  26 return;
  27 }
  28 };
  29 //insert at the head of linked list
  30 void insertAtHead(node* &head, int r_data){
  31 node *newNode = new node(r_data), *temp = head;
  32 newNode -> next = temp;
  33 head = newNode;
  34 return;
  35 }
  36 //display the elements of linked list
  37 void display(node *head){
  38 while(head -> next != NULL){
  39 cout << head -> data << " -> ";
  40 head = head -> next;
  41 }
  42 cout << head -> data << " -> NULL\n";
  43 return;
  44 };
  45 /*Driver Code*/
  46 int main(){
  47 node *head = NULL;
  48 return 0;
  49 }