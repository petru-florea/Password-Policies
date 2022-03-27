#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <set>

#include "Policy.h"
#include "LengthPolicy.h"
#include "ClassPolicy.h"
#include "IncludePolicy.h"
#include "NotIncludePolicy.h"
#include "RepetitionPolicy.h"
#include "ConsecutivePolicy.h"

std::string checkPassword(std::string password, std::vector<Policy*> myVector) {
    uint32_t contor = 0;

    for (uint32_t i = 0; i < myVector.size(); i++) {
        myVector.at(i)->check(password);
    }

    for (uint32_t i = 0; i < myVector.size(); i++) {
        if (myVector.at(i)->getCheck()) {
            contor++;
        }
    }

    if (contor == myVector.size())
        return "OK";
    else
        return "NOK";
}

int main() {
    char character;
    uint16_t min, max, min_class_count, max_count;
    uint32_t n;
    std::string policy, password;
    std::vector<Policy*> policies;

    std::cin >> n;

    for (uint32_t i = 0; i < n; i++) {
        std::cin >> policy;
        if (policy == "length") {
            uint32_t a = std::scanf("%hu %hu", &min, &max);

            if (a == 2) {
                policies.push_back(new LengthPolicy(min, max));
            }
            else if (a == 1) {
                policies.push_back(new LengthPolicy(min));
            }
        }
        else if (policy == "class") {
            std::cin >> min_class_count;
            policies.push_back(new ClassPolicy(min_class_count));
        }
        else if (policy == "include") {
            std::cin >> character;
            policies.push_back(new IncludePolicy(character));
        }
        else if (policy == "ninclude") {
            std::cin >> character;
            policies.push_back(new NotIncludePolicy(character));
        }
        else if (policy == "repetition") {
            std::cin >> max_count;
            policies.push_back(new RepetitionPolicy(max_count));
        }
        else {
            std::cin >> max_count;
            policies.push_back(new ConsecutivePolicy(max_count));
        }
    }

    while (std::cin >> password) {
        std::cout << checkPassword(password, policies) << std::endl;
    }

    return 0;
}
