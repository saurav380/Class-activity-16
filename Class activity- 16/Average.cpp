#include "average.hpp"
#include <numeric>  

// Function to calculate the average
double calculateAverage(const std::vector<int>& grades) {
    int total = std::accumulate(grades.begin(), grades.end(), 0);
    return static_cast<double>(total) / grades.size();
}
