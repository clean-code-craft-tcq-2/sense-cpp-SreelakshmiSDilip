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
//namespace
//{
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
		EmailAlert emailAlert1;
		 LEDAlert ledAlert1;
	};
	
	class StatsAlerter
	{
          float maximumThreshold;
	  std::vector<IAlerter>vecAlert;
	public:
	   StatsAlerter(const float,  std::vector<IAlerter>& );
	   void checkAndAlert( const std::vector<float>&);
	};

//}


