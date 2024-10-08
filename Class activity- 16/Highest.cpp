#include "highest.hpp"

// Function to find the highest grade
int findHighest(const std::vector<int>& grades) {
    int highest = grades[0];
    for (int grade : grades) {
        if (grade > highest) {
            highest = grade;
        }
    }
    return highest;
}
