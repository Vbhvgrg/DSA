class Solution {
public:
    int myAtoi(string s) {
       string str="";
       int minus = 1;
       int flag = 0;
       int i = 0;
       while((s[i] == ' '))i++; //removing all spaces
       if(s[i] == '-' || s[i] == '+'){
          if(s[i] == '-')minus = -1;
           i++;
       }//seeing weather the number is pos or neg
    
       for(;i<s.length();i++){
          if(s[i] >= 48 && (s[i] <= 57)){
            str = str + s[i];
          }
          else break;
       }
       if(str.length() == 0)return 0;
       int res = 0;
       for(int i=0;i<str.length();i++){
           long long res_temp = res;
           if(res_temp*10+int(str[i] - 48) > INT_MAX){
               if(minus == -1)return 2147483648*minus;//for neg elements it is 2^31
               else return 2147483647;//for positive elements it is 2^31-1
           }
           res  = res*10 + int(str[i] - 48);
       }//converting to string
       return res*minus;
    }
};
