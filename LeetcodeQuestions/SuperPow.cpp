#include <vector>
using namespace std;        
int modPow(int x, int n) {
            int mod = 1337;
            int result = 1;
            while (n > 0) {
                if (n % 2 == 1) {
                    result = (1LL * result * x) % mod;
                }
                x = (1LL * x * x) % mod;
                n /= 2;
            }
            return result;
        }
class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int result = 1;
         int mod = 1337;
        for (int digit : b) {
            result = modPow(result, 10) * modPow(a, digit) % mod;
        }
        return result;
    }
};
