
#ifndef PASSWORD_POLICIES_CLASSPOLICY_H
#define PASSWORD_POLICIES_CLASSPOLICY_H

#include "Policy.h"

class ClassPolicy : public Policy {
private:
    uint16_t minClassCount;

public:
    ClassPolicy(uint16_t minClassCount);

    void check(const std::string &password) override;
};

#endif //PASSWORD_POLICIES_CLASSPOLICY_H
