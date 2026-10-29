#include <iostream>
#include<cstring>
#include <iomanip>
using namespace std;

int main() {
    char names[5][20];
    int marks[5][3];
    int total[5] = {0};
    double avg[5];
    int top = 0;

    // Input student names and marks
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin.getline(names[i], 20);

        for (int j = 0; j < 3; j++) {
            cout << "Enter mark " << j + 1 << ": ";
            cin >> marks[i][j];

            total[i] += marks[i][j];
        }

        cin.ignore();

        avg[i] = total[i] / 3.0;

        // Find the student with the highest total
        if (total[i] > total[top]) {
            top = i;
        }
    }

    // Display the results
    cout << "\n";
    cout << left
         << setw(20) << "Name"
         << setw(8) << "M1"
         << setw(8) << "M2"
         << setw(8) << "M3"
         << setw(10) << "Total"
         << setw(10) << "Average" << endl;

    cout << string(64, '-') << endl;

    for (int i = 0; i < 5; i++) {
        cout << left
             << setw(20) << names[i]
             << setw(8) << marks[i][0]
             << setw(8) << marks[i][1]
             << setw(8) << marks[i][2]
             << setw(10) << total[i]
             << fixed << setprecision(1)
             << setw(10) << avg[i] << endl;
    }

    cout << "\nTop student: " << names[top] << endl;
   

    return 0;
}