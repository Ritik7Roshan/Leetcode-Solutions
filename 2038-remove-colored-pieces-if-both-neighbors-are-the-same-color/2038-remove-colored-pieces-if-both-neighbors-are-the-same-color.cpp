class Solution {
public:
    bool winnerOfGame(string colors) {
        // number of triplets having A/B value count krlo 
        // 
        int n=colors.size();
        if(colors.size()<=2) 
            return false;
        
        int tripleA=0,tripleB=0;
        
        for(int i=1; i<n-1; i++)
        {
            if(colors[i-1]==colors[i]&& colors[i]==colors[i+1]&& colors[i]=='A')
                tripleA++;
            else if(colors[i-1]==colors[i]&& colors[i]==colors[i+1]&& colors[i]=='B')
                tripleB++;
        }
        return tripleA-tripleB>=1;
    }
};