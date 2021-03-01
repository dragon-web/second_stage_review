#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<string> printVertically(string s) {
                    vector<string> ans;
                            char word[201];
                                    int cnt = 0;
                                    for(int i =0;i<s.length();){
                                        if(s[i]==' '){
                                                            i++;
                                                                            continue;
                                                                                        
                                        }
                                                    int j = i;
                                                                int p = 0;
                                                                while(j<s.length()&&s[j]!=' '){
                                                                                    word[p++] = s[j++];
                                                                                                
                                                                }
                                                                            word[p] = 0;
                                                                                        string tmp = word;
                                                                                        for(int k =0;k<tmp.size();k++){
                                                                                            if(ans.size()<=k){
                                                                                                                    ans.push_back("");
                                                                                                                                    
                                                                                            }
                                                                                            while(ans[k].length()<cnt){
                                                                                                                    ans[k].push_back(' ');
                                                                                                                                    
                                                                                            }
                                                                                                            ans[k].push_back(tmp[k]);
                                                                                                                        
                                                                                        }
                                                                                                    i = j;
                                                                                                                cnt++;
                                                                                                                        
                                    }
                                            return ans;
                                                
        }

};

作者：hust_dhc
链接：https://leetcode-cn.com/problems/print-words-vertically/solution/yi-ci-bian-li-by-hust_dhc/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
