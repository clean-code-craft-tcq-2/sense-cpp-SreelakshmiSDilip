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
namespace
{
	struct IAlerter
	{
		EmailAlert emailAlert;
		 LEDAlert ledAlert;
	};
	struct EmailAlert 
	{
		bool emailSent;
	};
	struct LEDAlert 
	{

		bool ledGlows;
	};
	class StatsAlerter
	{

	public:
	   StatsAlerter(const float,  std::vector<IAlerter>& );
	   void checkAndAlert( std::vector<IAlerter>&);
	};

}


