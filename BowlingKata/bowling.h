
#include <vector>
#include <iostream>

class Game{
    public:
        void roll(int pins) 
        {  
            rolls.push_back(pins);
        }

        int total_score() 
        { 
            int score = 0;
            for(int i = 0; i < rolls.size(); i++)
            {
                score += rolls[i];
            }
            return score; 
        }
    private:
        std::vector<int> rolls;
        int currentRoll = 0;
};