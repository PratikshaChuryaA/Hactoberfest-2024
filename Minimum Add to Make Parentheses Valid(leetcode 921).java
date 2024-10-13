
class Solution {
    public int minAddToMakeValid(String s) {
        int i = 0, j = 0;
        for (char ch : s.toCharArray()) {
            if (ch == '(') {
                i++;
            } else if (i > 0) {
                i--;
            } else {
                j++;
            }
        }
        return i + j;
    }
}


//Code Explaination

// this aims to find the minimum number of parentheses to make a string of parentheses valid. A valid string has matching opening ( and closing ) parentheses.

// How the solution works:
// Variables:

// i: Keeps track of how many unmatched opening parentheses ( you have.
// j: Keeps track of how many unmatched closing parentheses ) you have.
// Process:

// Loop through the string, one character at a time:
// If it's an opening parenthesis (, increase i (because it might need a matching )).
// If it's a closing parenthesis ):
// If i > 0 (meaning there's an unmatched (), reduce i (because we found a match for one opening parenthesis).
// If i == 0 (meaning there are no unmatched opening parentheses), increase j (because this closing parenthesis is unmatched).
// Final Step:

// After the loop, i will have the number of unmatched (, and j will have the number of unmatched ). The total number of additions needed is i + j.
// Example:
// For the string s = "())(":

// Start with i = 0 and j = 0.
// First character is (, so i = 1.
// Second character is ), and i > 0, so reduce i = 0 (they form a valid pair).
// Third character is ), but i == 0, so increase j = 1 (unmatched )).
// Fourth character is (, so increase i = 1 (unmatched ().
// At the end:

// i = 1 (one unmatched opening parenthesis ().
// j = 1 (one unmatched closing parenthesis )).
// So, you need to add 1 ) to match the ( and 1 ( to match the ). The result is 1 + 1 = 2.