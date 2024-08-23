class Solution {
    public static void addSubsets(List<List<Integer>> sol, int[] nums, int index, ArrayList<Integer> temp) {

        if (index == nums.length) {
            sol.add(new ArrayList<>(temp));
            return;
        }

        temp.add(nums[index]);
        addSubsets(sol, nums, index + 1, temp);
        temp.remove(temp.size() - 1);
        addSubsets(sol, nums, index + 1, temp);

    }

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> sol = new ArrayList<>();

        addSubsets(sol, nums, 0, new ArrayList<>());

        return sol;
    }
}