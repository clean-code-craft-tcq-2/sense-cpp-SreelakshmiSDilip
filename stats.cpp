#include "stats.h"
#include<algorithm>
#include<numeric>

namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& v1 ) {
        //Implement statistics here
        Stats s;
        s.max = *(std::max_element(v1.begin(), v1.end()));
        s.min = *(std::min_element(v1.begin(), v1.end()));
        s.average = (std::accumulate(v1.begin(), v1.end(),0.0L)) / v1.size();

        return s;
    }

}
void StatsAlerter::checkAndAlert( const std::vector<double>& v2)
{
    auto computedStats = Statistics::ComputeStatistics(v2);
    if(computedStats.max > maximumThreshold)
    {
        *(vecAlert[0]->emailAlertPtr) = {true};
        *(vecAlert[0]->ledAlertPtr) = {true};
    }

}



