#include <iostream>
#include <vector>
#include "average.hpp"
#include "highest.hpp"
#include "lowest.hpp"
#include "above_average.hpp"

int main() {
    std::vector<std::string> studentNames = { "A", "B", "C", "D", "E" };
    std::vector<int> studentGrades = { 85, 92, 78, 88, 90 };

    
    double averageGrade = calculateAverage(studentGrades);
    int highestGrade = findHighest(studentGrades);
    int lowestGrade = findLowest(studentGrades);

    
    std::cout << "Average Grade: " << averageGrade << "\n";
    std::cout << "Highest Grade: " << highestGrade << "\n";
    std::cout << "Lowest Grade: " << lowestGrade << "\n";

    
    printAboveAverage(studentNames, studentGrades, averageGrade);

    return 0;
}
