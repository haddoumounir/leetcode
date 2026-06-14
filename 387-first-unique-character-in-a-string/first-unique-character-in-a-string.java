class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character,Integer> seens = new HashMap<>();


        for(int i = 0; i < s.length(); i++)
        {
            seens.put(s.charAt(i),seens.getOrDefault(s.charAt(i),0) + 1);
        }
        for(int i = 0; i < s.length(); i++)
        {
            if(seens.get(s.charAt(i)) == 1)
                return i;
        }

        return -1;
    }
}