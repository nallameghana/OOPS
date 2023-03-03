//Encapsulation : Hiding the sensitive information 
#include <iostream>
using namespace std;
class Ytchannel
{
    string name;
    int subscribers;
    int no_videos;
    string content;
    public:
    void get_info(string Name, int nvideos, string cont)
    {
        name = Name;
        no_videos = nvideos;
        content = cont;
        cout<<"Channel Name : "<<name<<"\nNo of videos posted : "<<no_videos<<"\nType of Content : "<<content;
    }
    void subscribe()
    {
        subscribers += 1;
    }
    void no_subscribers()
    {
        cout<<"\nNo of subscribers : "<<subscribers;
    }
};
int main()
{
    Ytchannel yt;
    yt.get_info("Code help", 8, "Coding concepts in C++");
    int m;
    yt.subscribe();
    yt.subscribe();
    yt.subscribe();
    yt.subscribe();
    yt.no_subscribers();
  return 0;
}