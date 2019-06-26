#include <iostream>

int main() {
    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52

    // Solution: used static cast.

    int dailyCodeTimeInHours = 6;
    int semesterTimeInWeeks = 17;
    int workdaysPerWeek = 5;
    int averageWorkingHoursPerWeek = 52;

    int codingTimePerSemester = dailyCodeTimeInHours * workdaysPerWeek * semesterTimeInWeeks;
    float codingTimePercentagePerSemester = static_cast<float>(codingTimePerSemester) / (averageWorkingHoursPerWeek * semesterTimeInWeeks) * 100;

    std::cout << "Coding time in a semester by an attendee: " << codingTimePerSemester << " hours." << std::endl;
    std::cout << "Percentage of coding hours in the semester: " << codingTimePercentagePerSemester << "%." << std::endl;

    return 0;
}