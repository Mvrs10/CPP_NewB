#pragma once

#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    struct TrieNode {
        map<string, TrieNode*> children;
        bool toBeDeleted = false;
    };

    vector<vector<string>> deleteDuplicateFolder(vector<vector<string>>& paths) {
        // 1. Build Trie
        TrieNode* root = new TrieNode();
        for (const auto& path : paths) {
            TrieNode* current = root;
            for (const string& folder : path) {
                if (current->children.find(folder) == current->children.end()) {
                    current->children[folder] = new TrieNode();
                }
                current = current->children[folder];
            }
        }

        // 2. Serialize and count
        unordered_map<string, int> count;
        serialize(root, count);

        // 3. Mark duplicates
        filter(root, count);

        // 4. Collect valid paths
        vector<string> cleanPath;
        vector<vector<string>> result;
        collect(root, cleanPath, result);
        return result;
    }

private:
    void collect(TrieNode* node, vector<string>& path, vector<vector<string>>& result) {
        for (map<string, TrieNode*>::iterator it = node->children.begin(); it != node->children.end(); ++it) {
            string folder = it->first;
            TrieNode* child = it->second;
            if (!child->toBeDeleted) {
                path.push_back(folder);
                result.push_back(path);
                collect(child, path, result);
                path.pop_back();
            }
        }
    }

    string filter(TrieNode* node, unordered_map<string, int>& count) {
        if (node->children.empty())
            return "";

        vector<string> list;
        for (map<string, TrieNode*>::iterator it = node->children.begin(); it != node->children.end(); ++it) {
            string folder = it->first;
            TrieNode* child = it->second;
            string childSerial = filter(child, count);
            list.push_back(folder + "(" + childSerial + ")");
        }

        sort(list.begin(), list.end());
        string serial;
        for (const auto& s : list) serial += s;

        if (count[serial] > 1)
            node->toBeDeleted = true;

        return serial;
    }

    string serialize(TrieNode* node, unordered_map<string, int>& count) {
        if (node->children.empty())
            return "";

        vector<string> list;
        for (map<string, TrieNode*>::iterator it = node->children.begin(); it != node->children.end(); ++it) {
            string folder = it->first;
            TrieNode* child = it->second;
            string childSerial = serialize(child, count);
            list.push_back(folder + "(" + childSerial + ")");
        }

        sort(list.begin(), list.end());
        string serial;
        for (const auto& s : list) serial += s;

        count[serial]++;
        return serial;
    }
};


