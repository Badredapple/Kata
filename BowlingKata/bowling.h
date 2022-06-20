
class Game{
    public:
        int roll(int pins) 
        {  
            score += pins;
        }
        int total_score() { return score; }
    private:
        int score = 0;
};