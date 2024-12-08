class Solution {
    public int romanToInt(String s) {
        int ans = 0;
        HashMap<Character, Integer> mpp = new HashMap<>();
        mpp.put('I', 1);
        mpp.put('V', 5);
        mpp.put('X', 10);
        mpp.put('L', 50);
        mpp.put('C', 100);
        mpp.put('D', 500);
        mpp.put('M', 1000);
        for (int i = 0; i < s.length(); i++) {
            if (i < s.length() - 1) {
                int v1 = mpp.get(s.charAt(i));
                int v2 = mpp.get(s.charAt(i + 1));

                if (v1 < v2)
                    ans -= v1;
                else
                    ans += v1;
            } else {

                int v1 = mpp.get(s.charAt(i));
                ans += v1;
            }
        }
        return ans;
    }
}