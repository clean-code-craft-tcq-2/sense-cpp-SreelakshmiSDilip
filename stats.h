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

	public:
	   StatsAlerter(const float,  std::vector<IAlerter>& );
	   void checkAndAlert( std::vector<float>&);
	};

//}


