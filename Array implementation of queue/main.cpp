//@Author: RAUNAQ SINGH
class Queue{
    private:
        int f,r,capacity,*arr;
    public:
        Queue(int capacity){
            f=0;
            r=0;
            this->capacity=capacity;
            arr=new int[this->capacity];
        }
        void enQueue(int num){
            if(r==capacity-1){
                cout<<"Overflow";
                return;
            }
            arr[r]=num;
            r++;
        }
        void deQueue(){
            if(f==r){
                cout<<"Queue is empty";
                return;
            }
            else{
                for(int i=0;i<r-1;i++){
                    arr[i]=arr[i+1];
                }
                r--;
            }
        }
        void display(){
            if(f==r){
                cout<<"Queue is empty";
                return;
            }
            else{
                for(int i=0;i<r;i++){
                    cout<<arr[i]<<" ";
                }
            }
        }
        void frontVal(){
            if(f==r){
                cout<<"Queue is empty";
                return;
            }
            else{
                cout<<arr[f];
            }
        }
};
