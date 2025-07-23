class Solution {
public:
    int maximumGain(string s, int x, int y) {
    int score = 0;

    auto removePair = [&](char first, char second, int value) {
        string newString;
        int localScore = 0;
        for (char c : s) {
            if (!newString.empty() && newString.back() == first && c == second) {
                newString.pop_back();
                localScore += value;
            } else {
                newString.push_back(c);
            }
        }
        s = newString;
        return localScore;
    };

    if (x >= y) {
        score += removePair('a', 'b', x);
        score += removePair('b', 'a', y);
    } else {
        score += removePair('b', 'a', y);
        score += removePair('a', 'b', x);
    }

    return score;
    }
};