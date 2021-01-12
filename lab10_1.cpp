#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;
int main()
{
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    string g[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    cout << "You will get " << g[rand() % 9] << " in this 261102.";
}

