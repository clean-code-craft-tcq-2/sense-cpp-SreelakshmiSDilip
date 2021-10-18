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
	using IAlerter = boost::variant<EmailAlert, LEDAlert>;
    std::vector<IAlerter*> alerters;
    float maxThreshold = 10.2;
public:
   void checkAndAlert( std::vector<IAlerter*>);
};
struct EmailAlert
{
	bool emailSent;
};
struct LEDAlert
{
	bool ledGlows;
};

