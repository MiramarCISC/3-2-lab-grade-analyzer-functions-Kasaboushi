#include "grade_analyzer.hpp"
#include <iostream>

// this file contains analysis functions for main.cpp. Functions take in inputted scores and averages to operate.

using namespace std;

double calculateTotal(double score1, double score2, double score3) {
    // Returns the sum of the three scores.
    return score1 + score2 + score3 ;
}

double calculateAverage(double total, int count) {
    if (count <= 0) {
        return 0.0;
    }

    return total / count;
}

char determineLetterGrade(double average) {
    // Return 'A' for averages 90 or higher.
    // Return 'B' for averages 80 or higher.
    // Return 'C' for averages 70 or higher.
    // Return 'D' for averages 60 or higher.
    // Return 'F' otherwise.
    if (average >= 90) {
        return 'A';
    }
    else if (average >= 80) {
        return 'B'; 
    }
    else if (average >=70) {
        return 'C';
    }
    else if (average >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
}

bool isPassing(double average) {
    // Return true when average is 70 or higher.
    return average >= 70; // this works, though it might be a little awkward...still, it's fine.
}

bool isValidScore(double score) {
    return score >= 0 && score <= 100; //maybe consider adding parentheses for readability. Also, the .0 s are unnecessary here.
}

void printGradeReport(double total, double average, char letterGrade, bool passing) {
    cout << endl;
    cout << "Grade Report" << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    if (passing) {
        cout << "Status: Passing" << endl;
    } else {
        cout << "Status: Not Passing" << endl;
    }
}

