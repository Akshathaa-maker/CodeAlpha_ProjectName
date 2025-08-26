#include <iostream>
#include <string>
using namespace std;

struct Course {
    string name;
    int credits;
    float grade; // GPA points: 10 = A+, 9 = A, etc.
};

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    Course courses[100]; // support for up to 100 courses
    float totalCredits = 0, weightedSum = 0;

    for (int i = 0; i < n; ++i) {
        cout << "\nCourse " << (i + 1) << ":\n";
        cout << "Name: ";
        cin >> ws; // flush newline before getline
        getline(cin, courses[i].name);

        cout << "Credits: ";
        cin >> courses[i].credits;

        cout << "Grade (0 to 10): ";
        cin >> courses[i].grade;

        weightedSum += courses[i].credits * courses[i].grade;
        totalCredits += courses[i].credits;
    }

    float cgpa = (totalCredits > 0) ? (weightedSum / totalCredits) : 0;
    cout << "\nYour CGPA is: " << cgpa << "\n";

    return 0;
}