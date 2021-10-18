#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<double>& v1 ) {
    //Implement statistics here
     Stats.max = *max_element(v1.begin(), v1.end());
}
