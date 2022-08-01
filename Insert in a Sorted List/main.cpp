    //@Author: RAUNAQ SINGH
    //https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1?page=2&company[]=SAP%20Labs&sortBy=submissions
    Node *sortedInsert(struct Node* head, int data) {
        if(data<=head->data){
            Node*newHead=new Node(data);
            newHead->next=head;
            head=newHead;
            return head;
        }
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        if(data>temp->data){
            Node*newTail=new Node(data);
            temp->next=newTail;
            return head;
        }
        temp=head;
        Node*prev=NULL;
        while(temp->data<data){
            prev=temp;
            temp=temp->next;
        }
        Node*newNode=new Node(data);
        prev->next=newNode;
        newNode->next=temp;
        return head;
    }
