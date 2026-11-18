#include <iostream>
using namespace std;

enum Day
{
    Black,
    Blue,
    Purple
};

int main()
{
    Day signal = Black;
    switch(signal){
        case Black:
        cout<<"your never coming back from this";
        break;

        case Blue:
        cout<<"boy you are to much normal pick red next time to be different";
        break;

        case Purple:
        cout<<"you are either a girl or a weirdo";
        break;
    }
}
