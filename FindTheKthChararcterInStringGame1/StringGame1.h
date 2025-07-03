#pragma once
#include <vector>

static char kthCharacter(int k) {
    std::vector<char> word = { 'a' };
    while (word.size() < k) {
        int size = word.size();
        for (int i = 0; i < size; ++i) {
            char c = word[i];
            char newC = (c == 'z') ? 'a' : (char)(c + 1);
            word.push_back(newC);
        }
    }
    return word[k - 1];
}