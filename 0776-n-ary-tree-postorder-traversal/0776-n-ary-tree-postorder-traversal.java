/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public static void postOrder(Node root, List<Integer> ans){
        if(root==null)
        {
           
            return;
        }
        for(Node i: root.children)
        {
            postOrder(i,ans);
        }
        
        ans.add(root.val);
    }
    public List<Integer> postorder(Node root) {
        List<Integer> ans = new ArrayList<>();
        if(root==null)
            return ans;
        postOrder(root,ans);
        return ans;
    }
}