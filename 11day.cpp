
class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26] ={0};
        
        for(int i =0;i<str.length();i++){
            char ch = str[i];
            int number = 0;
            number = ch-'a';
            arr[number]++;
        }
        int maxi=-1;
        int ans=0;
        for(int i =0;i<26;i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
            }
        }
        return ans+'a';
    }

};

//--------------------------------//

#include <bits/stdc++.h> 
string replaceSpaces(string &str){
    string temp = "";
	for (int i =0;i<str.length();i++){
		if(str[i] == ' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');

		}
		else
		{
			temp.push_back(str[i]);
		}
	}
}

//--------------------------------//

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};