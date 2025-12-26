// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int i;
    srand(time(0));
    string grading[] = {"A", "B", "B+", "C", "C+", "D", "D+", "F", "W"};
    cout << "Press Enter 3 times to reveal your future." << endl;
    for (int j; j<3; j++){
        cin.get();
    }
    i = rand() % 9;
    cout << i << endl;
    string grade = grading[i];
    cout << "You will get " << grade << " in this 261102." << endl;
    return 0;
}