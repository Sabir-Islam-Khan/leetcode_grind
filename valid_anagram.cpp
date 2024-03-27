#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) {
            return false;
        }

        map<char, int> first;
        map<char,int> second;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(auto i : s) {
            first[i]++;
        }

        for(auto i : t) {
            second[i]++;
        }

        for(auto it1 = first.begin(), it2 = second.begin(); it1 != first.end(); ++it1, ++it2) {
            
            if(it1->first != it2->first || it1->second != it2->second) {
                
                return false;
            }
        }

        return true;
    }
};