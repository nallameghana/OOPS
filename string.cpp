#include <iostream>
using namespace std;
int main()
{
    string s;
    s = "Bvrith college";
    cout<<s.length()<<endl;
    cout<<s.find("coll")<<endl;
    cout<<s.substr(3, 7);
    string s1;
    cout<<"\nEnter name : ";
    getline(cin, s1);
    cout<<s1;
    string s2;
    cin>>s2;
    cout<<s2<<" Hello"<<endl;
  return 0;
}
