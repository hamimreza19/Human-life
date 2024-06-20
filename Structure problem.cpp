#include<iostream>
using namespace std;

struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main()
{
  Student st;
  cin>>st.age;
  cin>>st.first_name;
  cin>>st.last_name;
  cin>>st.standard;

  cout<< st.age <<" " << st.first_name << " " << st.last_name << " " << st.standard << endl;



}
