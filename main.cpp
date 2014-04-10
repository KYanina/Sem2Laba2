#include <iostream>
#include "func.h"
using namespace std;
void control()

{
	Time a,b,res;
    int option;
    do
    {
        cout<<"   1 - the sum of two times\n";
        cout<<"   2 - the difference between time\n";
        cout<<"   3 - exit\n";
        cout<<endl;
        cin>>option;


        switch(option)
        {
        case 1:
            cout<<"Enter first time \n";
            enter(a);
            cout<<"Enter second time\n";
            enter(b);
            res=sum(a,b);
            cout<<endl;
            output(res);
            break;

        case 2:
            cout<<"Enter first time\n";
            enter(a);
            cout<<"Enter second time\n";
            enter(b);
            res=diff(a,b);
            cout<<endl;
            output(res);
            break;


        case 3:
            break;

        default:
            cout<<"\n Enter number between 1 and 3\n";
            break;
        }
        cout<<endl;
    }
    while(option!=3);
}


int main()
{
    control();
    return 0;
}

