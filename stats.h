#include <vector>

namespace Statistics {
    struct Stats
    {
        float avgVal;
        float minVal;
        float maxVal;
    };
    Stats ComputeStatistics(const std::vector<double>& );
}
