
#ifndef PASSWORD_POLICIES_NOTINCLUDEPOLICY_H
#define PASSWORD_POLICIES_NOTINCLUDEPOLICY_H

#include "Policy.h"

class NotIncludePolicy : public Policy {
private:
    char characterType;

public:
    NotIncludePolicy(char character);

    void check(const std::string &password) override;
};

#endif //PASSWORD_POLICIES_NOTINCLUDEPOLICY_H
