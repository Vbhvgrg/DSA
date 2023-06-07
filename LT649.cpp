class Solution {
public:
    string predictPartyVictory(string senate) {
       queue<int>Rq,Dq;

       for(int i=0;i<senate.size();i++){
           if(senate[i]=='R'){
               Rq.push(i);
           }else{
               Dq.push(i);
           }
       }

       while(!Rq.empty() && !Dq.empty()){
           int ri = Rq.front();
           Rq.pop();
           int di = Dq.front();
           Dq.pop();

           if(ri<di){
               Rq.push(ri + senate.size());
           }else{
               Dq.push(di + senate.size());
           }
       }

       return (Rq.size()>Dq.size()) ? "Radiant" : "Dire"; 
    }
};
