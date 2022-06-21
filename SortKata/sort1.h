#include <iostream>
#include <vector>
using namespace std;

vector<int> sort(vector<int> &vec)
{
    if(vec.size() > 1){
        for(int limit = vec.size() -1; limit > 0; limit--)
        {
            for(int firstIndex = 0; firstIndex < limit; firstIndex++)
            {
                int secondIndex = firstIndex + 1;
                if(vec[firstIndex] > vec[secondIndex])
                {
                    int first = vec[firstIndex];
                    int second = vec[secondIndex];
                    vec[firstIndex]  = second;
                    vec[secondIndex] = first; 
                }
            }
        }
    }
    return vec;
}

vector<int> sort_2(vector<int> &vec)
{
    vector<int> new_vec;
    if(vec.size() <= 1)
    {
        return vec;
    }else if(vec.size() == 2){
        int first = vec[0];
        int second = vec[1];
        if(first > second)
            return new_vec = {second, first};
        else
            return new_vec = {first, second};
    }else{
        int first = vec[0];
        int middle = vec[0];
        int last  = vec[0];
        vector<int> lessers;
        vector<int> greaters;

        if(first < middle)
            lessers.push_back(first);
        if(last < middle)
            lessers.push_back(last);
        if(first > middle)
            greaters.push_back(first);
        if(last > middle)
            greaters.push_back(last);
        
        vector<int> result;
        addAll(result, sort_2(lessers));
        result.push_back(middle);
        addAll(result, sort_2(greaters));
        return result;
    }

    return vec;
}

void addAll(vector<int> &a, vector<int> &b)
{
    for(int i = 0; i < b.size(); i++)
    {
        a.push_back(b[i]);
    }
}