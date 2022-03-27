
#ifndef PASSWORD_POLICIES_CONSECUTIVEPOLICY_H
#define PASSWORD_POLICIES_CONSECUTIVEPOLICY_H

#include "Policy.h"

class ConsecutivePolicy : public Policy {
private:
    uint16_t maxCount;

public:
    ConsecutivePolicy(uint16_t maxCount);

    void check(const std::string &password) override;
};

#endif //PASSWORD_POLICIES_CONSECUTIVEPOLICY_H
