#include <vector>

namespace Statistics {
    struct Stats
    {
        double average;
        double min;
        double max;
    };
    Stats ComputeStatistics(const std::vector<double>& );
}
class StatsAlerter
{
   std::vector<IAlerter*> alerters;
   float maxThreshold = 10.2;
public:
   void checkAndAlert( std::vector<IAlerter*>);
}

