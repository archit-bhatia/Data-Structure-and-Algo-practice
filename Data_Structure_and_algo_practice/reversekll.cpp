#include <iostream>
using namespace std;
class node{
    public:
    node* next;
    int data;
    node(int d){
        data = d;
        next = NULL;
    }
};
void add_node(node* &head,int val){
    node* temp = new node(val);
  if(head == NULL){
      head = temp;
      return;
  }

  node* ptr = head;
  while(ptr->next != NULL){
      ptr = ptr->next;
  }
  ptr->next = temp;

}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
node* reversek(node* head,int k){
  node* prev = NULL;
  node* curr = head;
  node* last = NULL;
  for(int i=0;i<k && curr!=NULL;i++){
      last = curr->next;
      curr->next = prev;
      prev = curr;
      curr = last;
  }
  if(last!=NULL)
  head->next = reversek(last,k);
  return prev;
}
int main() {
    int n,k,t;
    cin>>n>>k;
    node* head = NULL;
    for(int i=0;i<n;i++){
      cin>>t;
      add_node(head,t);
      //display(head);
    }
    head = reversek(head,k);
    display(head);

}

