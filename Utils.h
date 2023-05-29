#include <iostream>
using namespace std;
#include <tuple>

class Utils {
    public:
        static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
        static double calculateDistance(tuple<int, int> pos1, tuple<int, int> pos2);
};