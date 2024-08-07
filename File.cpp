#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
   string name;
   ofstream file;
   file.open("Student.txt",ios::out|ios::app);
   cout<< " Enter your name : ";
   getline(cin,name);

   file << "Welcome to the hell " <<name<<endl;
   cout<<"Data is stored";
   file.close();


}
