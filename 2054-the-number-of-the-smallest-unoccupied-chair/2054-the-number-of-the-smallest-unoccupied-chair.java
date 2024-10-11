class Solution {
    public int smallestChair(int[][] times, int targetFriend) {
        int target= times[targetFriend][0];// getting the arriving time for the targeted person
        Arrays.sort(times,(a,b)-> a[0]-b[0]);// sort the array based on arriving time

        PriorityQueue<Integer> availableChairs= new PriorityQueue<>();
        for(int i=0;i<times.length;i++)
            availableChairs.offer(i);

        PriorityQueue<int[]>trackingChairs= new PriorityQueue<>((a,b)->a[0]-b[0]);

        for(int i=0;i<times.length;i++){
            while(!trackingChairs.isEmpty() &&trackingChairs.peek()[0]<=times[i][0] )
                availableChairs.offer(trackingChairs.poll()[1]);
        //(when a person with less or equal leaving time than a incoming person
        //there will be a seat available for him
        //)

        // offer him a new chair and remove the leaving person from the tracing Chairs

            if(times[i][0]==target)break;

            trackingChairs.offer(new int[]{times[i][1],availableChairs.poll()});
        }

        return availableChairs.peek(); // it will hold the targetFriend's chair number
    }
}