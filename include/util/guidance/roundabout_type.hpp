#ifndef OSRM_UTIL_GUIDANCE_ROUNDABOUT_TYPES_HPP_
#define OSRM_UTIL_GUIDANCE_ROUNDABOUT_TYPES_HPP_

namespace osrm
{
namespace util
{
namespace guidance
{
enum class RoundaboutType
{
    None,                  // not a roundabout
    Roundabout,            // standard roundabout
    Rotary,                // traffic circle (large roundabout) with dedicated name
    RoundaboutIntersection // small roundabout with distinct turns, handled as intersection
};
} /* namespace guidance */
} /* namespace util */
} /* namespace osrm */

#endif /* OSRM_UTIL_GUIDANCE_ROUNDABOUT_TYPES_HPP_ */
