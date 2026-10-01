class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        // para cada string s
        for (string s : strs) {
            // adicionar tamanho de s
            encoded += to_string(s.size());
            // adicionar algum marcador como #
            encoded += '#';
            // adicionar s
            encoded += s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        
        while (i < s.size()) {
            int j = i;

            // achar o #
            while (s[j] != '#') 
                j++;
            
            // converter o tamanho
            int len = stoi(s.substr(i, j - i));

            // agora falta pegar a palavra
            decoded.push_back(s.substr(j + 1, len));
            i = j + 1 + len;
        }
        return decoded;
    }
};
