struct queueNode{
    int data;
    queueNode*next;
    queueNode(int num){
    this->data=num;
    this->next=NULL;
    }
};
class Queue{
    private:
        queueNode*f,*r,*temp;
    public:
        Queue{
            f=NULL;
            r=NULL;
            temp=NULL;
        }
        void enQueue(int num){
            temp=new queueNode(num);
            if(f==NULL && r==NULL){
                f=r=temp;
            }
            else{
                r->next=temp;
                r=temp;
            }
        }
        void deQueue(){
            if(f==NULL){
                cout<<"Underflow";
                return;
            }
            f=f->next;
            if(f==NULL){
                r=NULL;
            }
        }
};
