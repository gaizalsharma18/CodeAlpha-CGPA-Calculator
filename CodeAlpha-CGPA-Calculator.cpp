#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numCourses;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter number of courses: ";
    cin >> numCourses;

    vector<string> courseNames(numCourses);
    vector<float> grades(numCourses);
    vector<float> credits(numCourses);

    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << " name: ";
        cin >> courseNames[i];
        cout << "Grade (on 10-point scale): ";
        cin >> grades[i];
        cout << "Credit Hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n--- Grade Summary ---\n";
    for (int i = 0; i < numCourses; i++) {
        cout << courseNames[i] << ": Grade = " << grades[i] << ", Credits = " << credits[i] << endl;
    }
    cout << "\nFinal CGPA: " << cgpa << endl;

    return 0;
}
