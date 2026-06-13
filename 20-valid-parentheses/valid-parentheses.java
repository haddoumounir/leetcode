class Solution {
    public boolean isValid(String s) {
       Stack<Character> stack = new Stack<>();
        HashMap<Character,Character> ctp = new HashMap<>();

        ctp.put('}','{');
        ctp.put(']','[');
        ctp.put(')','(');

       for (int i = 0; i < s.length(); i++)
       {
           if(ctp.containsKey(s.charAt(i))){
               if(!stack.isEmpty() && stack.lastElement() == ctp.get(s.charAt(i)))
               {
                   stack.pop();
               }
               else
                   return false;
           }
           else
               stack.add(s.charAt(i));
       }
       return stack.isEmpty();
    }
}