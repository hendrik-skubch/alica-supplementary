#ifndef IO_TURTLE_BASE_BASE_HPP
#define IO_TURTLE_BASE_BASE_HPP

#include <engine/AlicaEngine.h>
#include <BehaviourCreator.h>
#include <ConditionCreator.h>
#include <UtilityFunctionCreator.h>
#include <ConstraintCreator.h>

#include "world_model.hpp"

namespace turtlesim {

class Base {
public:
    Base(ros::NodeHandle& nh, ros::NodeHandle& priv_nh, const std::string& name, const std::string& roleset,
            const std::string& master_plan, const std::string& path);
    ~Base();
    void start();

private:
    alica::AlicaEngine* ae;
    alica::BehaviourCreator* bc;
    alica::ConditionCreator* cc;
    alica::UtilityFunctionCreator* uc;
    alica::ConstraintCreator* crc;
    essentials::SystemConfig* sc;
};

}  // namespace turtlesim

#endif /* IO_TURTLE_BASE_BASE_HPP */