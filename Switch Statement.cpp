#include <iostream>

using namespace std;

int main()

{
   int age = 18;

   switch(age){
       case 16:
            cout <<"you will get a chocolate."<<endl;
            break;
       case 18:
            cout<< "you will get a license."<<endl;
             break;
       case 21:
            cout<<"you will get a beer."<< endl;
              break;
       default:
            cout<<"sorry, you get nothing.  :-(" <<endl;
              }
}

