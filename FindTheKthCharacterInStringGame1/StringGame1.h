#pragma once
#include <vector>

static char kthCharacter(int k) {
    std::vector<char> word = { 'a' };
    while (word.size() < k) {
        for (char c : word) {
            char newC = (c == 'z') ? 'a' : (char)(c + 1);
            word.push_back(newC);
        }
    }
    return word[k - 1];
}

