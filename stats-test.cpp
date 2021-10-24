#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"

#include <cmath>

TEST_CASE("reports average, minimum and maximum") {
    auto computedStats = Statistics::ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.average - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.max - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.min - 1.5) < epsilon);
}



TEST_CASE("average is NaN for empty array") {
    auto computedStats = Statistics::ComputeStatistics({NAN,NAN,NAN});
    //All fields of computedStats (average, max, min) must be
    //NAN (not-a-number), as defined in math.h
    REQUIRE(std::isnan(computedStats.average));
    REQUIRE(std::isnan(computedStats.max));
    REQUIRE(std::isnan(computedStats.min));
    //Design the REQUIRE statement here.
    //Use http://www.cplusplus.com/reference/cmath/isnan/
}

TEST_CASE("raises alerts when max is greater than threshold") {
    EmailAlert emailAlert ={false};
    LEDAlert ledAlert = {false};
    IAlerter *alertObj = new IAlerter();
    alertObj->emailAlertPtr = &emailAlert;
    alertObj->ledAlertPtr = &ledAlert;
    std::vector<IAlerter*> alerters = {alertObj};
   

    const float maxThreshold = 10.2;
    StatsAlerter statsAlerter(maxThreshold, alerters);
    statsAlerter.checkAndAlert({9.8, 4.2, 4.5, 6.7});


    REQUIRE(emailAlert.emailSent);
    REQUIRE(ledAlert.ledGlows);
}

