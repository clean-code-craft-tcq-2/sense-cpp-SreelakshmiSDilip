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
	   StatsAlerter(const float Threshold,  std::vector<IAlerter> vecAlertArg )
	   {
		  maximumThreshold =  Threshold;
		   vecAlert = vecAlertArg;
	   }
	   //std::vector<IAlerter> checkAndAlert( const std::vector<double>&);
	    IAlerter checkAndAlert( const std::vector<double>&);
	};

//}


