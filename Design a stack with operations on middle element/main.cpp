#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    private:
        struct Node{
            int data;
            Node*next;
            Node*prev;
            Node(int num){
                this->data=num;
                this->next=NULL;
                this->prev=NULL;
            }
        };
        Node*head,*mid;
        int stkSize=0;
    public:
        void push(int num){
            Node*temp=new Node(num);
            if(stkSize==0){
                head=mid=temp;
                stkSize++;
                return;
            }
            head->next=temp;
            temp->prev=head;
            head=temp;
            if(stkSize%2==1){
                mid=mid->next;
            }
            stkSize++;
        }
        void pop(){
            if(stkSize!=0){
                if(stkSize==1){
                    head=mid=NULL;
                }
                else{
                    head=head->prev;
                    head->next=NULL;
                    if(stkSize%2==0){
                        mid=mid->prev;
                    }
                }
                stkSize--;
            }
        }
        void peek(){
            if(stkSize!=0){
                cout<<head->data<<" ";
            }
        }
        void deleteMid(){
            if(stkSize!=0){
                if(stkSize==1){
                    head=mid=NULL;
                }
                else if(stkSize==2){
                    head=head->prev;
                    mid=mid->prev;
                    head->next=NULL;
                }
                else{
                    mid->next->prev=mid->prev;
                    mid->prev->next=mid->next;
                    if(stkSize%2==0){
                        mid=mid->prev;
                    }
                    else{
                        mid=mid->next;
                    }
                }
                stkSize--;
            }
        }
        int findMiddle(){
            if(stkSize!=0){
                return mid->data;
            }
        }
};
int main()
{
    Stack st;
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.pop();
    st.pop();
    st.pop();
    cout<<st.findMiddle()<<endl;
    st.deleteMid();
    cout<<st.findMiddle()<<endl;
    return 0;
}
