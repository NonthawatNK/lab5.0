#include<iostream>
using namespace std;

int main(){
   int i =0,Even=0,Odd=0,N;
    while (N!=0)
    {
        cout << "Enter an integer: ";
        cin>>N;
        if (N%2==0)
        {
            Even++;
        }
        else 
        {
           Odd++;
        }
        
       
    }
    cout << "#Even numbers = "<<Even-1<<endl;
    cout << "#Odd numbers = "<<Odd;
    return 0;
}
