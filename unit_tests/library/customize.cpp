#include <boost/test/test_case_template.hpp>
#include <boost/test/unit_test.hpp>

#include "osrm/customizer.hpp"
#include "osrm/customizer_config.hpp"

#include <tbb/task_scheduler_init.h> // default_num_threads

BOOST_AUTO_TEST_SUITE(library_customize)

BOOST_AUTO_TEST_CASE(test_customize_with_invalid_config)
{
    using namespace osrm;

    osrm::CustomizationConfig config;
    config.requested_num_threads = tbb::task_scheduler_init::default_num_threads();
    BOOST_CHECK_THROW(osrm::customize(config),
                      std::exception); // including osrm::util::exception, etc.
}

BOOST_AUTO_TEST_CASE(test_customize_with_valid_config)
{
    using namespace osrm;

    osrm::CustomizationConfig customization_config;
    customization_config.base_path = "/data/monaco/monaco.osm";
    customization_config.UseDefaultOutputNames(customization_config.base_path);

    customization_config.requested_num_threads = tbb::task_scheduler_init::default_num_threads();
    BOOST_CHECK_NO_THROW(osrm::customize(customization_config));
}

BOOST_AUTO_TEST_SUITE_END()
