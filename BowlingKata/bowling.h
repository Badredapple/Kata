
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
            int frameIndex = 0;
            for(int frame = 0; frame < 10; frame++)
            {
                if(isSpare(frameIndex))
                {
                    score += 10 + rolls[frameIndex+2];
                    frameIndex+= 2;
                }else{
                    score += rolls[frameIndex] + rolls[frameIndex+1];
                    frameIndex+= 2;
                }
            }
            return score; 
        }

    private:
        std::vector<int> rolls;
        int currentRoll = 0;
        
        bool isSpare(int frameIndex)
        {
            return rolls[frameIndex] + rolls[frameIndex+1] == 10;
        }
};