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
  StatsAlerter statsAlerter(const float,  std::vector<IAlerter*> );
   void checkAndAlert( std::vector<IAlerter*>);
};
struct IAlerter
{
	EmailAlert *emailAlert;
	 LEDAlert *ledAlert;
};
struct EmailAlert 
{
	bool emailSent;
};
struct LEDAlert 
{

	bool ledGlows;
};

