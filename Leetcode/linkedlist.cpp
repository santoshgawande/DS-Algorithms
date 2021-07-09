class Node{
    
    int val;
    Node *next;
};

class MyLinkedList {
private:
    Node *head;
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
       head= NULL;
        
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(head == NULL){
            return -1;
        }else{
            int c=0;
            Node *p;
            while(head!=NULL){
                p=p->next;
                c++;
            }
            return c;
        }
        
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        if(head == NULL){
            Node t= new Node();
            t.val = val;
            t.next = NULL;
            head = t;
        }else{
            Node *t;
            t=head;
            Node *p = new Node();
            p.val = val;
            p.next = t;
            head =t;
        }
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
  
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
int main(){
    Node *head = new Node();
    head->get(1);
    return 0;
}