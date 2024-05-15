#include<iostream>
using namespace std;

enum days_of_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};
int main()
{
    enum days_of_week day1,day2;
    day1 = Tue;
    day2 = Fri;
    int diff = day2 - day1;
    cout<<"Day difference = "<<diff;

}
