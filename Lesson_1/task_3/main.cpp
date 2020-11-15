#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Skolko oreshkov nuzhno belochke:" << endl;
    cin>> a;
    cout << "Skolko oreshkov v odnoy shishke:" << endl;
    cin>> b;
    cout << "Skolko shishek bylo sobrano:" << endl;
    cin>> c;
    if (b*c>=a)
    {
      cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}
