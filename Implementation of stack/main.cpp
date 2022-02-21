#include <iostream>
using namespace std;
#define MAX 1000
class stack{
    private: int top;
             int arr[MAX];
    public:
        stack(){
            top=-1;
        }
        bool isEmpty(){
            if(top>=0){
                return false;
            }
            return true;
        }
        int peek(){
            if(top<0){
                cout<<"Underflow Error";
                return -1;
            }
            else{
                return arr[top];
            }
        }
        void pop(){
            if(top>0){
                cout<<"Element to be deleted = "<<arr[top];
                top--;
            }
            else{
                cout<<"Underflow Error";
                return;
            }
        }
        void push(int num){
            if(top==MAX-1){
                cout<<"Overflow Error";
                return;
            }
            top++;
            arr[top]=num;
        }
};
int main()
{
    stack stk;
    cout<<stk.isEmpty()<<endl;
    stk.push(10);
    cout<<stk.peek();
    stk.pop();
}
