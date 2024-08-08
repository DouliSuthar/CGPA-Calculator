#include <iostream>
#include <conio.h>
#include <unordered_map>
#include <string>
using namespace std;

// Function to map grades to points based on the provided table
double gradeToPoint(string grade) {
    unordered_map<string, double> gradeMap = {
        {"A++", 10.0}, {"A+", 9.0}, {"A", 8.5},
        {"B+", 8.0}, {"B", 7.5}, {"C+", 7.0},
        {"C", 6.5}, {"D+", 6.0}, {"D", 5.5},
        {"E+", 5.0}, {"E", 4.0}, {"F", 0.0}
    };

    return gradeMap[grade];
}

// Function to calculate SGPA
void calculateSGPA() {
    int NoOfSubs;
    cout << "------------------------------------------------" << endl;
    cout << "|               SGPA Calculator                |" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Enter No of Subjects: ";
    cin >> NoOfSubs;
    cout << endl;

    double* credits = new double[NoOfSubs];
    string* grades = new string[NoOfSubs];
    double sum = 0;
    double totalCredits = 0;

    for (int i = 0; i < NoOfSubs; i++) {
        cout << "Enter Credits of subject " << (i + 1) << ": ";
        cin >> credits[i];
        cout << "Enter Grade (e.g., A++, A+, B, etc.) of subject " << (i + 1) << ": ";
        cin >> grades[i];
        cout << "------------------------------------------------" << endl;
    }

    for (int i = 0; i < NoOfSubs; i++) {
        double point = gradeToPoint(grades[i]);
        sum += credits[i] * point;
    }

    for (int i = 0; i < NoOfSubs; i++) {
        totalCredits += credits[i];
    }

    cout << endl << endl;
    cout << "Total Points: " << sum << endl;
    cout << "Total Credits: " << totalCredits << endl;
    cout << "SGPA for this semester: " << sum / totalCredits << endl;

    cout << "\nPress any key to go back to Main Menu...";
    getch();

    delete[] credits;
    delete[] grades;
}

// Function to calculate CGPA
void calculateCGPA() {
    int NoOfSems;
    cout << "------------------------------------------------" << endl;
    cout << "|               CGPA Calculator                |" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Enter No of Semesters: ";
    cin >> NoOfSems;

    double* sgpas = new double[NoOfSems];
    double* semesterCredits = new double[NoOfSems];
    double totalCredits = 0;
    double weightedSum = 0;

    for (int i = 0; i < NoOfSems; i++) {
        cout << "Enter SGPA for Semester #" << (i + 1) << ": ";
        cin >> sgpas[i];
        cout << "Enter Total Credits for Semester #" << (i + 1) << ": ";
        cin >> semesterCredits[i];
        totalCredits += semesterCredits[i];
        weightedSum += sgpas[i] * semesterCredits[i];
    }

    cout << "Your CGPA: " << weightedSum / totalCredits << endl;

    cout << "\nPress any key to go back to Main Menu...";
    getch();

    delete[] sgpas;
    delete[] semesterCredits;
}

// Function to display instructions
void instructions() {
    system("cls");
    cout << endl << endl;
    cout << "How to Calculate SGPA and CGPA :" << endl;
    cout << "-------------------------------" << endl << endl;
    cout << "SGPA = sum of (credit * grade points) / total credits for a semester" << endl;
    cout << "CGPA = sum of (SGPA * semester credits) / total credits across all semesters" << endl;
    cout << endl << endl;
    cout << "Grade - Point Table (out of 10): " << endl;
    cout << "------------------------------------------------" << endl;
    cout << "\tGrade \t\t 10.0 Scale" << endl;
    cout << "------------------------------------------------" << endl << endl;
    cout << "\tA++ \t\t 10.0" << endl;
    cout << "\tA+ \t\t 9.0" << endl;
    cout << "\tA \t\t 8.5" << endl;
    cout << "\tB+ \t\t 8.0" << endl;
    cout << "\tB \t\t 7.5" << endl;
    cout << "\tC+ \t\t 7.0" << endl;
    cout << "\tC \t\t 6.5" << endl;
    cout << "\tD+ \t\t 6.0" << endl;
    cout << "\tD \t\t 5.5" << endl;
    cout << "\tE+ \t\t 5.0" << endl;
    cout << "\tE \t\t 4.0" << endl;
    cout << "\tF \t\t 0.0" << endl;

    cout << "\nPress any key to go back to Main Menu...";
    getch();
}

int main() {
    do {
        system("cls");
        cout << "------------------------------------------------" << endl;
        cout << "|          SGPA & CGPA Calculator              |" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "1. Calculate SGPA" << endl;
        cout << "2. Calculate CGPA" << endl;
        cout << "3. How to Calculate?" << endl;
        cout << "4. Quit" << endl << endl;
        cout << "Select Option: ";
        char op = 0;
        cin >> op;

        if (op == '1') calculateSGPA();
        else if (op == '2') calculateCGPA();
        else if (op == '3') instructions();
        else if (op == '4') exit(0);
    } while (1);
    return 0;
}
