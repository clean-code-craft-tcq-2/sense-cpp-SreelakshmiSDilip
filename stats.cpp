#include "stats.h"
namespace Statistics {
Stats ComputeStatistics(const std::vector<double>& v1 ) {
    //Implement statistics here
    Stats s;
     s.max = *max_element(v1.begin(), v1.end());
    s.min = *min_element(v1.begin(), v1.end());
    s.average = std::accumulate(v1.begin(), v1.end(), 0LL) / v1.size();
    
    return s;
}
}
