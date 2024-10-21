
#include <iostream>
using namespace std;

int main()
{
 double num1, num2;
    char operation;
   
    cout<<"Enter operation \n";//decide which operation to enter
    cin>>operation;
   
    cout<<"Enter number \n";//enter number
    cin>>num1;
   
    cout<<"Enter number \n";
    cin>>num2;
   
    switch(operation) { //give sum depending on operation chosen 
    case '+':
           cout<<" Sum "<<num1 +num2<<endl;
         break;
    case '-':
           cout<<" Sum "<<num1 -num2<<endl;
         break;
    case '*':
           cout<<" Sum "<<num1 *num2<<endl;
         break;
    case '/':
           cout<< " Sum " << num1 / num2 << endl;
         break;
    default:
           cout<<" Sum ";
    }
   


    return 0;
}