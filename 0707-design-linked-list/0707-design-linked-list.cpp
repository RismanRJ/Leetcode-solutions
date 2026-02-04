struct Node {
    int val;
    Node* next; // Fix: Use pointer for next node

    Node(int val) {
        this->val = val; // Fix: Use -> to access members of 'this' pointer
        this->next = nullptr; // Fix: Use nullptr instead of null
    }
}; // Fix: Added missing semicolon

class MyLinkedList {
    Node* head; // Fix: head must be a pointer
public:
    MyLinkedList() {
        head = nullptr; // Fix: Initialize to nullptr (empty list) instead of new Node()
    }
    
    int get(int index) {
        Node* temp = head; // Fix: temp must be a pointer
        
        // Fix: Check for empty list/null head
        if (temp == nullptr) return -1; 
        
        if (index == 0) return head->val;
        
        int cnt = 0;
        while (temp->next != nullptr) { // Fix: nullptr
            if (cnt == index) return temp->val;
            temp = temp->next;
            cnt++;
        }
        // Fix: logic to check last element or return -1 if not found
        if (cnt == index) return temp->val;
        return -1; 
    }
    
    void addAtHead(int val) {
        Node* ele = new Node(val); // Fix: pointers for dynamic allocation
        ele->next = head;
        head = ele; // Fix: Must update head to point to the new node
    }
    
    void addAtTail(int val) {
        if (head == nullptr) { // Fix: Handle empty list case
            addAtHead(val);
            return;
        }

        Node* temp = head; // Fix: pointer
        while (temp->next != nullptr) temp = temp->next; // Fix: nullptr

        temp->next = new Node(val);
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0) {
            this->addAtHead(val); // Fix: access member function with ->
            return;
        }
        
        int cnt = 0;
        Node* temp = head; // Fix: pointer

        // Fix: Check temp is valid to avoid crash
        while (cnt < index - 1 && temp != nullptr && temp->next != nullptr) {
            temp = temp->next;
            cnt++;
        }
        
        // Check if index was out of bounds
        if (temp == nullptr) return;

        Node* ele = new Node(val); // Fix: pointer
        ele->next = temp->next;
        temp->next = ele;
    }
    
    void deleteAtIndex(int index) {
        if (index == 0) {
            if (head != nullptr) { // Fix: Safety check
                Node* toDelete = head;
                head = head->next;
                delete toDelete; // Recommended: clean up memory
            }
            return;
        }

        int cnt = 0;
        Node* temp = head; // Fix: pointer

        // Fix: Iterate to node BEFORE the one to delete
        while (temp != nullptr && temp->next != nullptr && cnt < index - 1) {
            temp = temp->next;
            cnt++;
        }

        if (temp == nullptr || temp->next == nullptr) return;

        Node* toDelete = temp->next;
        temp->next = temp->next->next; // Fix: null -> nullptr implicit
        delete toDelete; // Recommended: clean up memory
    }
};
