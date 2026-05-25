#include <iostream>
using namespace std;

// Structure Definition
struct Time {
    int hour;   // 0–23
    int minute; // 0–59
    int second; // 0–59
};

// Function to print time
void printTime(Time t) {
    cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}

int main() {
    // Declaration of variable
    Time lunchTime;

    // Declaration & initialization of variable
    Time dinnerTime = {18, 30, 0};

    // Pointer variable
    Time *ptrTime = &lunchTime;

    // Setting values for lunchTime using direct access
    lunchTime.hour = 12;
    lunchTime.minute = 30;
    lunchTime.second = 20;

    cout << "Lunch will be held at: ";
    printTime(lunchTime);

    cout << "Dinner will be held at: ";
    printTime(dinnerTime);

    return 0;
}

