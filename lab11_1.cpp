#include <iostream>
using namespace std;

void fortune(){
    string grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    srand(time(0));
    int date = rand()%997978 + 2023;
    cout << "You will get " << grade[(rand()%9)] << " in this " << date << ".";
}

int main(){
    cout << "Press Enter 3 times to reveal your future.\n";
    for(int i=0; i<3; i++) cin.get();
    fortune();
    return 0;
}
