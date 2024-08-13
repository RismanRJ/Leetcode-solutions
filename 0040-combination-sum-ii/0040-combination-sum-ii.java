class Solution {

    public static void findCombinationSum(int[] candidates, int target, int index, List<List<Integer>> ans,
            ArrayList<Integer> temp) {

        if (target < 0)
            return;
        if (target == 0) {
            ans.add(new ArrayList<>(temp));
            return;
        }

        for (int i = index; i < candidates.length; i++) {
            if (i > index && candidates[i] == candidates[i - 1])
                // -> to check for any duplicates
                continue;
            if (candidates[i] > target) { // target< element --> break the loop
                break;
            }
            temp.add(candidates[i]);
            findCombinationSum(candidates, target - candidates[i], i + 1, ans, temp);
            temp.remove(temp.size() - 1);

        }

    }

    public List<List<Integer>> combinationSum2(int[] candidates, int target) {

        Arrays.sort(candidates);
        List<List<Integer>> ans = new ArrayList<>();
        findCombinationSum(candidates, target, 0, ans, new ArrayList<Integer>());

        return ans;

    }
}