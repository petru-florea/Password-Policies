
#include "RepetitionPolicy.h"

RepetitionPolicy::RepetitionPolicy(uint16_t maxCount) {
    this->maxCount = maxCount;
}

void RepetitionPolicy::check(const std::string &password) {
    uint32_t count = 0;
    bool check = false;

    for (uint32_t i = 0; i < password.size() - 1; i++) {
        if (password.at(i) == password.at(i + 1)) {
            count++;
            if (count == maxCount) {
                check = true;
            }
        }
        else if (password.at(i) != password.at(i + 1)) {
            count = 0;
        }

        if (check)
            isChecked = false;
        else
            isChecked = true;
    }
}