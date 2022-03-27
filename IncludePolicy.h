
#ifndef PASSWORD_POLICIES_INCLUDEPOLICY_H
#define PASSWORD_POLICIES_INCLUDEPOLICY_H

#include "Policy.h"

class IncludePolicy : public Policy {
private:
    char characterType;

public:
    IncludePolicy(char character);

    void check(const std::string &password) override;
};

#endif //PASSWORD_POLICIES_INCLUDEPOLICY_H
