#include <unordered_map>
#include <vector>
#include <string>

class Solution {
public:
    std::string kthDistinct(std::vector<std::string>& arr, int k) {
        std::unordered_map<std::string, int> mp;
        std::vector<std::string> order;

        // Count occurrences and record the order of first appearance
        for (const auto& s : arr) {
            mp[s]++;
            if (mp[s] == 1) {
                order.push_back(s);
            }
        }

        // Find the k-th distinct string
        int distinct_count = 0;
        for (const auto& s : order) {
            if (mp[s] == 1) {
                distinct_count++;
                if (distinct_count == k) {
                    return s;
                }
            }
        }

        // If there are fewer than k distinct strings, return an empty string
        return "";
    }
};
