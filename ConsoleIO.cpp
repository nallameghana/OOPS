#include <iostream>
using namespace std;
class inout
{
    public:
    void getput()
    {
        char n;
        cout<<"\nEnter a character : ";
        cin.get(n);
        cout.put(n);
    }
    void getlinefqn()
    {
        string line;
        cout<<"\nEnter a string : ";
        cin.ignore();
        getline(cin, line);
        cout<<line;
    }
    void readwritefqns()
    {
        int k;
        cout<<"\nEnter no of characters in string : ";
        cin>>k;
        char str[k];
        cout<<"\nEnter a string : ";
        cin.read(str, k);
        cout.write(str, cin.gcount())<<endl;
    }
};
int main()
{
    inout m;
    m.getput();
    m.getlinefqn();
    m.readwritefqns();
  return 0;
}
