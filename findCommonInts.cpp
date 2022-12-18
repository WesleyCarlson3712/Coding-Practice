#include <iostream>
#include <vector>
using namespace std;

// ------------------------------------------------------------------------------------------------

vector<int> getCommonInts(vector<int> input1, vector<int> input2){
    vector<int> output = {};

    for(int i = 0; i < input1.size(); i++){
        for(int j = 0; j < input2.size(); j++){
            if(input1[i] == input2[j]){
                output.push_back(input1[i]);
                break;
            }

        }
    }

    return output;
}

// ------------------------------------------------------------------------------------------------