class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int s1 = player1[0];
        int s2 = player2[0];

        for(int i=1;i<player1.size();i++){
            if(i==1){
                if(player1[0]==10){
                    s1+=2*player1[1];
                }else{
                    s1+=player1[1];
                }
            }else{
                if(player1[i-1]==10 || player1[i-2]==10){
                    s1+= 2*player1[i];
                }else{
                    s1+=player1[i];
                }
            }
        }

        for(int i=1;i<player2.size();i++){
            if(i==1){
                if(player2[0]==10){
                    s2+=2*player2[1];
                }else{
                    s2+=player2[1];
                }
            }else{
                if(player2[i-1]==10 || player2[i-2]==10){
                    s2+= 2*player2[i];
                }else{
                    s2+=player2[i];
                }
            }
        }

        if(s1>s2){
            return 1;
        }else if(s2>s1){
            return 2;
        }else{
            return 0;
        }
    }
};
