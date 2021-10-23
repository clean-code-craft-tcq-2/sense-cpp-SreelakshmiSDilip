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
std::pair<bool, bool> StatsAlerter::checkAndAlert( const std::vector<double>& v2)
{
    auto computedStats = Statistics::ComputeStatistics(v2);
    IAlerter localStruct;
    if(computedStats.max > maximumThreshold)
    {
        localStruct.emailAlert1.emailSent = true;
        localStruct.ledAlert1.ledGlows = true;
        vecAlert.push_back(localStruct);
    }
    
    return std::make_pair(vecAlert[0].emailAlert1.emailSent, vecAlert[0].ledAlert1.ledGlows);

}

