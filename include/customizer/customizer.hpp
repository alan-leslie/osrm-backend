#ifndef OSRM_CUSTOMIZE_CUSTOMIZER_HPP
#define OSRM_CUSTOMIZE_CUSTOMIZER_HPP

namespace osrm
{
namespace customizer
{
struct CustomizationConfig;

class Customizer
{
  public:
    int Run(const CustomizationConfig &config);
};

} // namespace customizer
} // namespace osrm

#endif // OSRM_CUSTOMIZE_CUSTOMIZER_HPP
