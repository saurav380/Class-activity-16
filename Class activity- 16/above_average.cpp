#include "above_average.hpp"
#include <iostream>

// Function to print students who scored above the average
void printAboveAverage(const std::vector<std::string>& names, const std::vector<int>& grades, double average) {
    std::cout << "Students scoring above average (" << average << "):\n";
    for (size_t i = 0; i < grades.size(); ++i) {
        if (grades[i] > average) {
            std::cout << names[i] << " - " << grades[i] << "\n";
        }
    }
}
