/***************************************************************************************************
* Description:
*   A function that returns the first duplicate integer in a vector.
* Author:
*   Dad, but Wesley did some coding.
***************************************************************************************************/
int firstDuplicate(vector<int> input) {

    set<int> noDuplicates = {};

    for(int i = 0; i < input.size(); i++) {
        noDuplicates.insert(input[i]);
        if(noDuplicates.size() - 1 != i)
            return input[i];
    }

    return -1;
}