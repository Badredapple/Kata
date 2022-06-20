
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
                if(isStrike(frameIndex)){
                    score += 10 + strikeBonus(frameIndex);
                    frameIndex++;
                }
                else if(isSpare(frameIndex))
                {
                    score += 10 + rolls[frameIndex+2];
                    frameIndex+= 2;
                }else{
                    score += twoBallsInFrame(frameIndex);
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
        
        bool isStrike(int frameIndex)
        {
            return rolls[frameIndex] == 10;
        }

        int strikeBonus(int frameIndex)
        {
            return rolls[frameIndex +1] + rolls[frameIndex + 2];
        }
        
        int twoBallsInFrame(int frameIndex)
        {
            return rolls[frameIndex] + rolls[frameIndex+1];
        }
};