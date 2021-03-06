# 804. Unique Morse Code Words

International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows: **"a"** maps to **".-"**, **"b"** maps to **"-..."**, **"c"** maps to **"-.-."**, and so on.

For convenience, the full table for the 26 letters of the English alphabet is given below:

```
[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
```

Now, given a list of words, each word can be written as a concatenation of the Morse code of each letter. For example, "cab" can be written as "-.-.-....-", (which is the concatenation "-.-." + "-..." + ".-"). We'll call such a concatenation, the transformation of a word.

Return the number of different transformations among all words we have.

Now, given a list of words, each word can be written as a concatenation of the Morse code of each letter. For example, "cab" can be written as "-.-.-....-", (which is the concatenation "-.-." + "-..." + ".-"). We'll call such a concatenation, the transformation of a word.

Return the number of different transformations among all words we have.

```
Example:<br>
Input: words = ["gin", "zen", "gig", "msg"]Example:<br>
Output: 2Example:<br>
Explanation: Output: 2Example:<br>
The transformation of each word is:Output: 2Example:<br>
"gin" -> "--...-."Output: 2Example:<br>
"zen" -> "--...-."Output: 2Example:<br>
"gig" -> "--...--."Output: 2Example:<br>
"msg" -> "--...--."Output: 2Example:<br>

There are 2 different transformations, "--...-." and "--...--.".
```

#### Note

+ The length of **words** will be at most **100**.
+ Each **words[i]** will have length in range **[1, 12]**.
+ **words[i]** will only consist of lowercase letters.

## Reference

[Problem description link](https://leetcode.com/problems/unique-morse-code-words/description/)
