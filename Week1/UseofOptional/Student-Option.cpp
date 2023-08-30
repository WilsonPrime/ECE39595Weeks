#include <iostream>
#include <string>
#include <optional>
#define SIZE 3

std::optional<int> getStudentGradeFromID(int studentIDtoGrade[][2], int studentID) {
    for (int i = 0; i < SIZE; i++) {
        if (studentIDtoGrade[i][0] == studentID) {
            // Found the corresponding student ID, return the grade
            return studentIDtoGrade[i][1];
        }
    }
    // Student did not make any submission
    return std::nullopt;
}

int main() {
    int studentIDtoGrade[SIZE][2] = {{1131828, 32},
                                     {1131858, 91},
                                     {1121839, 72}};
    int studentID;
    std::optional<int> stduentGrade;

    studentID = 1131828;
    stduentGrade = getStudentGradeFromID(studentIDtoGrade, studentID);

    if(stduentGrade != std::nullopt){
        std::cout << "Grade for " << studentID << " is " << stduentGrade.value() << std::endl;
    } else {
        std::cout << "Student did not make any submission." << std::endl;
    }

    studentID = 52156;
    stduentGrade = getStudentGradeFromID(studentIDtoGrade, studentID);
    if (stduentGrade.has_value()) {
        std::cout << "Grade for " << studentID << " is " << stduentGrade.value() << std::endl;
    } else {
        std::cout << "Student " << studentID << " did not make any submission." << std::endl;
    }
}