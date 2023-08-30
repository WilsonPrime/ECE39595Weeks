#include <iostream>
#include <string>
#define SIZE 3

int getStudentGradeFromID(int studentIDtoGrade[][2], int studentID, bool* studentMadeSubmission) {
    for (int i = 0; i < SIZE; i++) {
        if (studentIDtoGrade[i][0] == studentID) {
            // Found the corresponding student ID, return the grade
            *studentMadeSubmission = true;
            return studentIDtoGrade[i][1];
        }
    }
    // Student did not make any submission
    *studentMadeSubmission = false;
    return 0;
}

int main() {
    int studentIDtoGrade[SIZE][2] = {{1131828, 92},
                                     {1131858, 91},
                                     {1121839, 72}};
    int studentID;
    int stduentGrade;
    bool studentMadeSubmission;

    studentID = 1131828;
    stduentGrade = getStudentGradeFromID(studentIDtoGrade, studentID, &studentMadeSubmission);
    if (studentMadeSubmission) {
        std::cout << "Grade for " << studentID << " is " << stduentGrade << std::endl;
    } else {
        std::cout << "Student did not make any submission." << std::endl;
    }

    studentID = 52156;
    stduentGrade = getStudentGradeFromID(studentIDtoGrade, studentID, &studentMadeSubmission);
    if (studentMadeSubmission) {
        std::cout << "Grade for " << studentID << " is " << stduentGrade << std::endl;
    } else {
        std::cout << "Student " << studentID << " did not make any submission." << std::endl;
    }
}