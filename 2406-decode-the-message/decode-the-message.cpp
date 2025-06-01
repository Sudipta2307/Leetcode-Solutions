class Solution {
public:
    string decodeMessage(string key, string message) {
        //Time complexity-0(m)
        //space complexity-0(m)
        //step1 create mapping
        unordered_map<char,char> mapping;
        //excetional case if space occurs it will be space
        char space=' ';
        mapping[space]=space;
        char start='a';
        int index=0;
        
        while(start<='z' && index<key.length()){
            char keykacurrentcharacter=key[index];
            //start->mapping abcd..
            //mapping->keykacurrentcharacter->
            if(mapping.find(keykacurrentcharacter)!=mapping.end()){
                //agar currentcharacter ki mapping already present hai
                //no need to store any mapping here
                //just move to next character in key
                index++;
            }
            else{
                //already present nahi hai
                //create maping and move ahead
                mapping[keykacurrentcharacter]=start;
                index++;
                start++;
            }
        }
        //step-2 use mapping to decode the message
        string ans="";
        for(int i=0;i<message.length();i++){
            char msgcharacter=message[i];
            char mappedcharacter=mapping[msgcharacter];
            ans.push_back(mappedcharacter);
        }
        return ans;
    }
};