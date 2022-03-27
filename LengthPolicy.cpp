
#include "LengthPolicy.h"

LengthPolicy::LengthPolicy(uint16_t min) {
    minLength = min;
    maxLength = 255;
}

LengthPolicy::LengthPolicy(uint16_t min, uint16_t max) {
    minLength = min;
    maxLength = max;
}

void LengthPolicy::check(const std::string &password) {
    if (password.size() < minLength)
        isChecked = false;
    else if ((password.size() >= minLength) && (password.size() <= maxLength))
        isChecked = true;
    else if (password.size() > maxLength)
        isChecked = false;
}
