//@Author: RAUNAQ SINGH
//Pre-Requisite: Get minimum element from a stack
//https://github.com/Raunaq2001/DSA-Important-Questions/blob/main/Get%20minimum%20element%20from%20stack/main.cpp
int minEle;
void push(stack<int>& s, int a){
	if(s.empty()){
	    s.push(a);
	    minEle=a;
	}
	else if(a>=minEle) s.push(a);
	else{
	    s.push(2*a-minEle);
	    minEle=a;
	}
}
bool isFull(stack<int>& s,int n){
	if(s.size()==n) return true;
	return false;
}
bool isEmpty(stack<int>& s){
	if(s.empty()) return true;
	return false;
}
int pop(stack<int>& s){
	if(s.empty()) return -1;
	int topEle=s.top();
	s.pop();
	if(topEle>minEle) return topEle;
	else{
	    int num=minEle;
	    minEle=(2*minEle-topEle);
	    return num;
	}
}
int getMin(stack<int>& s){
	if(s.empty()) return -1;
	return minEle;
}
