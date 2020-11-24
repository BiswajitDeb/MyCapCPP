#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a,b,c;

cout<<"Hours:";
cin>>a;
cout<<endl;

cout<<"Minutes:";
cin>>b;
cout<<endl;

cout<<"Seconds:";
cin>>c;
cout<<endl;

cout<<"Your Time is :  "<< setw(2) << setfill('0')<<a<<":"<< setw(2) << setfill('0')<<b<<":"<< setw(2) << setfill('0')<<c<<endl;
cout << "Time in seconds:"<<a*3600+b*60+c;
return 0;
}
