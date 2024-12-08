class Solution {
    public String intToRoman(int num) {
        StringBuilder sb = new StringBuilder();
        String[] symbol= {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int[] value={1,4,5,9,10,40,50,90,100,400,500,900,1000};

        for(int i=symbol.length-1;i>=0;i--){

            if(num==0)break;
            while(num>=value[i]){
                sb.append(symbol[i]);
                num-=value[i];
            }
        }
        return sb.toString();
    }
}