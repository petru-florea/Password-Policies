
#ifndef PASSWORD_POLICIES_REPETITIONPOLICY_H
#define PASSWORD_POLICIES_REPETITIONPOLICY_H

#include "Policy.h"

class RepetitionPolicy : public Policy {
private:
    uint16_t maxCount;

public:
    RepetitionPolicy(uint16_t maxCount);

    void check(const std::string &password) override;
};

#endif //PASSWORD_POLICIES_REPETITIONPOLICY_H
