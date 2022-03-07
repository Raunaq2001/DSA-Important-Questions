class Queue{
    private:
        int f,r,capacity,*arr;
    public:
        Queue(int capacity){
            f=r=-1;
            this->capacity=capacity;
            arr=new int[capacity];
        }
        void enQueue(int num){
            if(f==-1){
                f=r=0;
                arr[r]=num;
            }
            else if((f==0 && r==capacity-1)||(r=f-1)){
                cout<<"Full";
                return;
            }
            else if(f!=0 && r=capacity-1){
                r=0;
                arr[r]=num;
            }
            else{
                r++;
                arr[r]=num;
            }
        }
        void deQueue(){
            if(f==-1){
                cout<<"Empty";
                return;
            }
            else if(f==capacity-1){
                f=0;
            }
            else if(f==r){
                f=r=-1;
            }
            else{
                f++;
            }
        }
};
