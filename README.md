# Reverse Words in a String

## Problem Description

Given an input string `s`, reverse the **order of the words**.

A **word** is defined as a sequence of **non-space characters**. The words in `s` will be separated by at least one space.

Return a string of the words in **reverse order** concatenated by a **single space**.

**Note:**
- `s` may contain **leading or trailing spaces** or **multiple spaces** between words.
- The returned string should have **only a single space** separating the words.
- Do not include any extra spaces.

## Examples

### Example 1:
**Input:**  
`s = "the sky is blue"`  
**Output:**  
`"blue is sky the"`  

---

### Example 2:
**Input:**  
`s = "  hello world  "`  
**Output:**  
`"world hello"`  

**Explanation:**  
The reversed string should not contain leading or trailing spaces.

---

### Example 3:
**Input:**  
`s = "a good   example"`  
**Output:**  
`"example good a"`  

**Explanation:**  
Multiple spaces between words should be reduced to a single space in the reversed string.

---

## Constraints
- `1 <= s.length <= 10⁴`
- `s` contains English letters (upper-case and lower-case), digits, and spaces `' '`.
- There is at least **one word** in `s`.
