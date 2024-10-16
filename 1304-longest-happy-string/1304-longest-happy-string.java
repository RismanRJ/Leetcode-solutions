class Solution {
    public String longestDiverseString(int a, int b, int c) {
        PriorityQueue<Pair>pq= new PriorityQueue<Pair>((x,y)->y.cnt-x.cnt);
        StringBuilder sb= new StringBuilder();
       if (a>0) pq.add(new Pair(a,'a'));
        if(b>0)pq.add(new Pair(b,'b'));
        if(c>0) pq.add(new Pair(c,'c'));

        while(!pq.isEmpty()){
            int n= sb.length();
            Pair p= pq.poll();

            if(n>=2 && sb.charAt(n-1)==p.lt && sb.charAt(n-2)==p.lt){
                if(pq.isEmpty())break;
                Pair nxt = pq.poll();
                sb.append(nxt.lt);
                nxt.cnt--;
                if(nxt.cnt>0)pq.add(nxt);
            }
            else{
                sb.append(p.lt);
                p.cnt--;
            }
            if(p.cnt>0)pq.add(p);
        }
        return sb.toString();
    }
}

class Pair{
    Character lt;
    int cnt;

    Pair(int cnt, Character lt){
        this.lt=lt;
        this.cnt=cnt;
    }
    
}