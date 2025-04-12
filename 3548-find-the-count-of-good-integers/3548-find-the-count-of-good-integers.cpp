class Solution {
    #define ll long long
    ll k_palindromes=0;
    unordered_set<ll> hash;
    vector<ll> fact;
    void precomputeFact()
    {
        fact[0]=1;
        fact[1]=1;
        for(ll i=2;i<11;i++){
            fact[i]= i* fact[i-1];
        }
    }

    bool isKPalindrome(string &num , int &k){
        return (stoll(num)%k==0);
    }

    ll countAllValidPalindromes(vector<ll>&freq, int n){
        ll factOfN= fact[n];
        for(int i=0;i<=9;i++){
            factOfN/= fact[freq[i]];
        }
        return factOfN;
    }

    ll allArrangements(string st, int &n, int &k){
        sort(st.begin(),st.end());

        if(hash.count(stoll(st))) return 0;
        hash.insert(stoll(st));

        vector<ll> freq(10);
        for(char& ch: st){
            freq[ch-'0']++;
        }

        ll totalCombinations = countAllValidPalindromes(freq, n);
        ll notValidCombinations =0;
        if(freq[0]>0){
            freq[0]--;
            notValidCombinations= countAllValidPalindromes(freq,n-1);
        }
        return totalCombinations-notValidCombinations;

    }

    void generateAllPalindromes(int& n, int pos,string &st, int& k){
        if(pos>= (n+1)/2){
            if(isKPalindrome(st,k)){
                k_palindromes+= allArrangements(st,n,k);
            }
            return ;
        }

        char start = pos==0?'1':'0';  // if the pos is '0' then '0' is not allowed
        while(start<='9'){
            st[pos]=start;
            st[n-pos-1]=start;
            generateAllPalindromes(n, pos+1,st,k);
            start++;
        }
        st[pos]=' '; // backtrack

    }

public:
    long long countGoodIntegers(int n, int k) {
        fact = vector<ll>(11);
        precomputeFact();
        string st(n,' ');
        generateAllPalindromes(n,0,st,k);
        return k_palindromes;
    }
};