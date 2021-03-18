#include<iostream>
#include<vector>

using namespace std;

//max, minのswap
template<class T>inline bool chMax(T &a, T b) {if(a < b) {a = b;return true;}return false;}
template<class T>inline bool chMin(T &a, T b) {if(a > b) {a = b;return true;}return false;}

void printMaxAndMin(vector<int> &input){//配列の最大値最小値出力
    int maxAns = -1, minAns = 1e9;
    for(int i = 0; i < input.size(); i++){
        chmin(minAns, input[i]);
        chmax(maxAns, input[i]);
    }
    cout << "min is :" << minAns << endl << "max is :" << maxAns << endl;
}

int main(){
    vector<int> input = {1, 2, 3, 4, 5, 6, 7};
    printMaxAndMin(input);
}