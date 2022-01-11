#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,e;
    cout<<"enter your first subject number"<<endl;
    cin>>a;
    cout<<"enter your second subject number"<<endl;
    cin>>b;
    cout<<"enter your third subject number"<<endl;
    cin>>c;
    cout<<"enter your fourth subject number"<<endl;
    cin>>d;
    cout<<"enter your fifth subject number"<<endl;
    cin>>e;
    double   average = a + b + c + d + e;
    double num = average / 500;
    double  percentage = num *100;
    cout<<"Your percentage is:"<<percentage<<"%";
    cout<<endl;

     if(percentage<=100 && percentage>=79)
    {
        cout<<"your grade is"<<":A+";
    }
     else if (percentage<79 && percentage>=70)
    {
        cout<<"your grade is A";
    }
     else  if (percentage<69 && percentage>=60)
    {
        cout<<"your grade is B";
    }
     else if (percentage<59 && percentage>=50)
    {
        cout<<"your grade is C";
    }
     else if  (percentage<49 && percentage>=40)
     {
         cout<<"your grade is C";
     }
     else
     cout<<"your grade are poor"<<endl;
    }


