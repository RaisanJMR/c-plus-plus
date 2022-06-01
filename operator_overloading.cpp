#include <iostream>
using namespace std;

struct YtChannel
{
    string ChannelName;
    int SubscriberCount;

    // Constructor

    YtChannel(string n, int s)
    {
        ChannelName = n;
        SubscriberCount = s;
    }
};

ostream &operator<<(ostream &COUT, YtChannel &ytchannel)
{
    COUT << "name :" << ytchannel.ChannelName << endl;
    COUT << "subs count :" << ytchannel.SubscriberCount << endl;
    return COUT;
}

int main()
{
    YtChannel yt1 = YtChannel("Traversy Media", 10000000);
    YtChannel yt2 = YtChannel("Net ninja", 250010000);

    // cout << yt1 << endl;
    // cout << yt2 << endl;

    operator<<(cout, yt1);
    return 0;
}