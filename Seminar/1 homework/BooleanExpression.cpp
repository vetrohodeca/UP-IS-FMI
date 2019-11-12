#include<iostream>
using namespace std;
int main()
{
    bool hasAC;
    double price;
    int hp;
    long long milage;
    bool isNew;
    cin>>isNew>>hasAC>>hp>>milage>>price;
    cout<< ((isNew==false&&
    ((hasAC==true&&milage<115000&&hp>=70&&price<=6000)
    ||hasAC==false&&milage<180000&&hp>=60&&price<=2000))
    ||(isNew==true&&price<=25000&&hp>=70&&hp<=90));
    return 0;
}
