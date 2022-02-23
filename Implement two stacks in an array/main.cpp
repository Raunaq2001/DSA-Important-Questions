class twoStack{
    private:
        int *arr;
        int top1;
        int top2;
    public:
        twoStack(int stkSize){
            arr=new int[stkSize];
            top1=-1;
            top2=stkSize;
        }
        void push1(int num){
            // There is a space for atleast one more element
            if(top1<top2-1){
                top1++;
                arr[top1]=num;
            }
            else{
                return -1;
            }
        }
        void push2(int num){
            if(top1<top2-1){
                top2--;
                arr[top2]=num;
            }
            else{
                return -1;
            }
        }
        void pop1(){
            if(top1>=0){
                int x=arr[top1];
                top1--;
                return x;
            }
            else{
                return -1;
            }
        }
        void pop2(){
            if(top2<stkSize){
                int x=arr[top2];
                top2++;
                return x;
            }
            else{
                return -1;
            }
        }
};
