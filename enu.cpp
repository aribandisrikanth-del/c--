#include <iostream>
using namespace std;

enum Day {
    Mon,
    Tue,
    Wen,
    Thu,
    Fri,
    Sat,
    Sun
};

int main(){
    Day today = Wen;
    cout<<today+1;
    return 0;
}
