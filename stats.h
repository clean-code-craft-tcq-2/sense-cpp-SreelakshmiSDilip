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

struct EmailAlert 
{
    bool emailSent;
};
struct LEDAlert 
{
    bool ledGlows;
};
struct IAlerter
{
    EmailAlert *emailAlertPtr;
    LEDAlert *ledAlertPtr;
};

class StatsAlerter
{
    float maximumThreshold;
    std::vector<IAlerter*>vecAlert;

public:
    StatsAlerter(const float Threshold,  std::vector<IAlerter*> vecAlertInit )
    {
        maximumThreshold =  Threshold;
        vecAlert = vecAlertInit;
    }
    //std::vector<IAlerter> checkAndAlert( const std::vector<double>&);
    void checkAndAlert( const std::vector<double>&);
};






