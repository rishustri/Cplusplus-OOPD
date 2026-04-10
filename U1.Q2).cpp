#include <iostream>
#include <string>
using namespace std;

string getGrade(double marks) {
    if (marks >= 90)      return "A+ (Outstanding)";
    else if (marks >= 80) return "A  (Excellent)";
    else if (marks >= 70) return "B  (Good)";
    else if (marks >= 60) return "C  (Average)";
    else if (marks >= 50) return "D  (Below Average)";
    else                  return "F  (Fail)";
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];
    int total = 0;

    cout << "\nEnter marks for each student (out of 100):\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> marks[i];
    }

    // Calculate total
    for (int i = 0; i < n; i++)
        total += marks[i];

    // Explicit type conversion: int -> double for accurate average
    double average = (double)total / n;

    // Display report
    cout << "\n========================================\n";
    cout << "         STUDENT PERFORMANCE REPORT\n";
    cout << "========================================\n";
    cout << "Student\t  Marks\t  Grade\n";
    cout << "----------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << "  " << (i + 1) << "\t  " << marks[i]
             << "\t  " << getGrade(marks[i]) << "\n";
    }

    cout << "----------------------------------------\n";
    cout << "Total Marks : " << total << "\n";
    cout << "Average     : " << average << "\n";
    cout << "Class Grade : " << getGrade(average) << "\n";
    cout << "========================================\n";

    return 0;
}