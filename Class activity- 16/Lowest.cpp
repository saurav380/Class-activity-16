#include "lowest.hpp"

// Function to find the lowest grade
int findLowest(const std::vector<int>& grades) {
    int lowest = grades[0];
    for (int grade : grades) {
        if (grade < lowest) {
            lowest = grade;
        }
    }
    return lowest;
}
