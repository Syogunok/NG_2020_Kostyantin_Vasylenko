#include <iostream>

using namespace std;

int main()
{
    int a,b,s;
    cout << "Vvedite chislo a: "<< endl;
    cin>>a;
    cout << "Vvedite chislo b: "<< endl;
    cin>>b;
    cout << "Vvedite deistvie: "<< endl<<
     "1:slozhenie"<< endl<<
     "2:vchitanie"<< endl<<
     "3:umnozhenie"<< endl<<
     "4:delenie"<<endl;

    cin>>s;
    switch (s)
    {
    case 1:
        cout<<"R-slozhenie="<<a+b<< endl;
        break;
    case 2:
        cout<<"R-vchitanie="<<a-b<< endl;
        break;
    case 3:
        cout<<"R-umnozhenie="<<a*b<< endl;
        break;
    case 4:
        cout<<"R-delenie="<<(float)a/b<< endl;
        break;
    }
    return 0;
}
