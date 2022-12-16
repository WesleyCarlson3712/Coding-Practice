int firstDuplicate(vector<int> input){

    set<int> asdf = {};

    for(int i = 0; i < input.size(); i++){
        asdf.insert(input[i]);
        if(asdf.size() - 1 != i)
            return input[i];
    }
    return -1;
}