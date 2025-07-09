class Solution {
public:
    string reverseWords(string s) {
        string str="";
        vector<string>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ')str+=s[i];
            else{
                if(!str.empty())ans.push_back(str);
                str="";
            }
        }
        if(!str.empty())ans.push_back(str);
        str="";
        int count=0;
        for(int i=ans.size()-1;i>=0;i--){
            str+=ans[i];
            count++;
            if(count==ans.size())break;
            str+=" ";
        }
        return str;
    }
};
