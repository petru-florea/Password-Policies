
#ifndef PASSWORD_POLICIES_LENGTHPOLICY_H
#define PASSWORD_POLICIES_LENGTHPOLICY_H

#include "Policy.h"

class LengthPolicy : public Policy {
private:
    uint16_t minLength, maxLength;

public:
    LengthPolicy(uint16_t min);

    LengthPolicy(uint16_t min, uint16_t max);

    void check(const std::string &password) override;
};


#endif //PASSWORD_POLICIES_LENGTHPOLICY_H
