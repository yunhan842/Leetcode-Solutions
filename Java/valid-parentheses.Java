class Solution {
    public boolean isValid(String s) {
        HashMap<Character, Character> myMap = new HashMap<Character, Character>();
        Stack<Character> myStack = new Stack<Character>();
        myMap.put('(', ')');
        myMap.put('[', ']');
        myMap.put('{', '}');
        for(char x : s.toCharArray()){
            if(myMap.containsKey(x)){myStack.push(myMap.get(x));}
            else if(myStack.empty() || myStack.pop() != x){return false;}
        }
        return myStack.empty();
    }
}