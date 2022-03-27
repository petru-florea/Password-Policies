
#ifndef PASSWORD_POLICIES_POLICY_H
#define PASSWORD_POLICIES_POLICY_H

#include <string>

class Policy {
protected:
    bool isChecked = false;

public:
    virtual void check(const std::string &password) = 0;

    bool getCheck() const { return isChecked; }
};

#endif //PASSWORD_POLICIES_POLICY_H
