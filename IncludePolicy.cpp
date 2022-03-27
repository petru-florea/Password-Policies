
#include "IncludePolicy.h"

IncludePolicy::IncludePolicy(char character) {
    characterType = character;
}

void IncludePolicy::check(const std::string &password) {
    isChecked = false;

    switch (characterType) {
        case 'a': {
            for (auto &c : password) {
                if (std::islower(c) != 0) {
                    isChecked = true;
                    break;
                }
            }
            break;
        }

        case 'A': {
            for (auto &c : password) {
                if (std::isupper(c) != 0) {
                    isChecked = true;
                    break;
                }
            }
            break;
        }

        case '0': {
            for (auto &c : password) {
                if (std::isdigit(c) != 0) {
                    isChecked = true;
                    break;
                }
            }
            break;
        }

        case '$': {
            for (auto &c : password) {
                if ((std::islower(c) == 0) && (std::isupper(c) == 0) && (std::isdigit(c) == 0)) {
                    isChecked = true;
                    break;
                }
            }
            break;
        }
    }
}