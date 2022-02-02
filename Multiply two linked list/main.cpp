/* Only the implementation of the function is provided

   @Author: RAUNAQ SINGH

*/
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  long long num1=0,num2=0,modulo=1000000007;
  while(l1!=NULL){
      num1=(num1*10)%modulo+l1->data;
      l1=l1->next;
  }
  while(l2!=NULL){
      num2=(num2*10)%modulo+l2->data;
      l2=l2->next;
  }
  return (num1*num2)%modulo;
}
