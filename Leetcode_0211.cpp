class WordDictionary {
    vector<string> words;
public:
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        words.push_back(word);
    }
    
    bool search(string word) {
        int c=0;
        int n=word.size();
        for(int i=0;i<words.size();i++)
        {
            if(n==words[i].size())
            {
                for(int j=0;j<n;j++)
                {
                   if( words[i][j]==word[j]||word[j]=='.')
                    {
                        c++;
                    }
                    else{
                    c=0;
                    break;
                    }
                }
                if(c==n) return true;
            }
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */