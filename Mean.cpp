#include <iostream>
#include <math.h>

class mean {
    public:
    void find_mean() {
        // Equation: sum(n) / len(n)
        int ar[4] = {3,5,2,4};
        float n = 0;
        for(int i=0; i<4; i++) {
            n = n + ar[i];
        }
        int ar_len = sizeof(ar)/sizeof(ar[0]);
        std::cout << "The Mean: " << n / ar_len;
    }
};

int main() {

    mean obj;
    obj.find_mean();

    return 0;
}
