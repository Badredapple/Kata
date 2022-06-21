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