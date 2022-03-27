
#include "ClassPolicy.h"

ClassPolicy::ClassPolicy(uint16_t minClassCount) {
    this->minClassCount = minClassCount;
}

void ClassPolicy::check(const std::string &password) {
    uint32_t count = 0;

    for(auto &c : password) {
        if (std::islower(c) != 0) {
            count++;
            break;
        }
    }

    for(auto &c : password) {
        if (std::isupper(c) != 0) {
            count++;
            break;
        }
    }

    for(auto &c : password) {
        if (std::isdigit(c) != 0) {
            count++;
            break;
        }
    }

    for(auto &c : password) {
        if ((std::islower(c) == 0) && (std::isupper(c) == 0) && (std::isdigit(c) == 0)) {
            count++;
            break;
        }
    }

    if (count >= minClassCount)
        isChecked = true;
    else
        isChecked = false;
}

