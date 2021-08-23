#include <iostream>
#include <iomanip>
using namespace std;
class Time{
    public:
    int hh;
    int mm;
    int ss;
    int second;
};
int main() {
    Time T;
    cout<<"Enter time:\nHours ? ";
    cin>>T.hh;
    cout<<"Minutes ? ";
    cin>>T.mm;
    cout<<"Seconds ? ";
    cin>>T.ss;
    T.second=T.hh*3600+T.mm*60+T.ss;
    cout<<"The time is = "<<setw(2)<<setfill('0')<<T.hh<<":";
    cout<<setw(2)<<setfill('0')<<T.mm<<":";
    cout<<setw(2)<<setfill('0')<<T.ss;
    cout<<endl;
    cout<<"Time in total seconds : "<<T.second;
}
