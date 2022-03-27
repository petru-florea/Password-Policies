
#include "NotIncludePolicy.h"

NotIncludePolicy::NotIncludePolicy(char character) {
    characterType = character;
}

void NotIncludePolicy::check(const std::string &password) {
    isChecked = true;

    switch (characterType) {
        case 'a': {
            for (auto &c : password) {
                if (std::islower(c) != 0) {
                    isChecked = false;
                    break;
                }
            }
            break;
        }

        case 'A': {
            for (auto &c : password) {
                if (std::isupper(c) != 0) {
                    isChecked = false;
                    break;
                }
            }
            break;
        }

        case '0': {
            for (auto &c : password) {
                if (std::isdigit(c) != 0) {
                    isChecked = false;
                    break;
                }
            }
            break;
        }

        case '$': {
            for (auto &c : password) {
                if ((std::islower(c) == 0) && (std::isupper(c) == 0) && (std::isdigit(c) == 0)) {
                    isChecked = false;
                    break;
                }
            }
            break;
        }
    }
}