#include "TargetGenerator_test.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
    std::vector<ATarget*>::iterator it = _targets.begin();

    for (; it != _targets.end(); ++it)
        delete (*it);
}

void                        TargetGenerator::learnTargetType(ATarget* target)
{
    std::vector<ATarget*>::iterator it = _targets.begin();

    for (; it != _targets.end(); ++it)
        if ((*it)->getType() == target->getType())
            return ;
    _targets.push_back(target->clone());
}

void                        TargetGenerator::forgetTargetType(const std::string& target)
{
    std::vector<ATarget*>::iterator it = _targets.begin();

    for (; it != _targets.end(); ++it)
        if ((*it)->getType() == target)
        {
            delete (*it);
            _targets.erase(it);
            return ;
        }
}

ATarget*                        TargetGenerator::createTarget(const std::string& target)
{
    std::vector<ATarget*>::iterator it = _targets.begin();

    for (; it != _targets.end(); ++it)
        if ((*it)->getType() == target)
            return (*it);
    return NULL;
}