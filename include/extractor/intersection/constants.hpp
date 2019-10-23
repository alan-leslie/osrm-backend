#ifndef OSRM_EXTRACTOR_INTERSECTION_CONSTANTS_HPP_
#define OSRM_EXTRACTOR_INTERSECTION_CONSTANTS_HPP_

#include "util/intersection_constants.hpp"

namespace osrm
{
namespace extractor
{
namespace intersection
{

// what angle is interpreted as going straight
using util::intersection::STRAIGHT_ANGLE;
using util::intersection::ORTHOGONAL_ANGLE;
// if a turn deviates this much from going straight, it will be kept straight
using util::intersection::MAXIMAL_ALLOWED_NO_TURN_DEVIATION;
// angle that lies between two nearly indistinguishable roads
using util::intersection::GROUP_ANGLE;
using util::intersection::NARROW_TURN_ANGLE;
// angle difference that can be classified as straight, if its the only narrow turn
using util::intersection::FUZZY_ANGLE_DIFFERENCE;

// Road priorities give an idea of how obvious a turn is. If two priorities differ greatly (e.g.
// service road over a primary road, the better priority can be seen as obvious due to its road
// category).
const double constexpr PRIORITY_DISTINCTION_FACTOR = 1.75;

// the lane width we assume for a single lane
const auto constexpr ASSUMED_LANE_WIDTH = 3.25;

// how far apart can roads be at the most, when thinking about merging them?
const auto constexpr MERGABLE_ANGLE_DIFFERENCE = 95.0;

} // namespace intersection
} // namespace extractor
} // namespace osrm

#endif // OSRM_EXTRACTOR_INTERSECTION_CONSTANTS_HPP_
