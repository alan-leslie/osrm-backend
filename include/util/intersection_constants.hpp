#ifndef OSRM_UTIL_INTERSECTION_CONSTANTS_HPP_
#define OSRM_UTIL_INTERSECTION_CONSTANTS_HPP_

namespace osrm
{
namespace util
{
namespace intersection
{

// what angle is interpreted as going straight
const double constexpr STRAIGHT_ANGLE = 180.;
const double constexpr ORTHOGONAL_ANGLE = 90.;
// if a turn deviates this much from going straight, it will be kept straight
const double constexpr MAXIMAL_ALLOWED_NO_TURN_DEVIATION = 3.;
// angle that lies between two nearly indistinguishable roads
const double constexpr NARROW_TURN_ANGLE = 40.;
const double constexpr GROUP_ANGLE = 60;
// angle difference that can be classified as straight, if its the only narrow turn
const double constexpr FUZZY_ANGLE_DIFFERENCE = 25.;
} // namespace intersection
} // namespace extractor
} // namespace osrm

#endif // OSRM_UTIL_INTERSECTION_CONSTANTS_HPP_

