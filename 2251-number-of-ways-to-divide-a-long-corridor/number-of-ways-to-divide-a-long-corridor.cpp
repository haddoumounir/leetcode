class Solution {
public:
    int numberOfWays(string corridor) {
        const int MOD = 1e9 + 7;
        long long res = 1;
        int seats = 0, plants = 0;
        bool counting = false;

        for (char c : corridor) {
            if (c == 'S') {
                seats++;
                if (seats > 2 && seats % 2 == 1) {
                    res = (res * (plants + 1)) % MOD;
                    plants = 0;
                }
                counting = seats % 2 == 0;
            } else if (counting) {
                plants++;
            }
        }

        if (seats >= 2 && seats % 2 == 0)
            return (res);
        return (0);
    }
};